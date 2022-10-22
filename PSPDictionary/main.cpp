#include <pspkernel.h>
#include <pspctrl.h>

#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#include "CSurface.h"
#include "CMenu.h"
#include "CKeyboard.h"
#include "CAudio.h"

#define printf pspDebugScreenPrintf

CMenu *menu = new CMenu();
CSurface *surface = new CSurface();
CKeyboard *keyboard = new CKeyboard();
CAudio *audio = new CAudio();


PSP_HEAP_SIZE_KB(20480);

	SDL_Surface *screen;
	SDL_Surface *sprite, *message, *logo, *logo2, *missed, *bghelpinfo;

	SDL_Surface *bgmainmenu, *bgloaddictionarmenu, *bgdictionarymainmenu, *bghelpmainmenu;
	SDL_Surface *keyboardmobile, *keyboardqwerty;
	SDL_Surface *bghelpperson;

	SDL_Rect spriteSoruce, spriteDestination;
	
	//Mix_Music *bgaudio;
	//int chanel;
	
//========================================================================================================
//	Menu control varibales
//--------------------------------------------------------------------------------------------------------
	int UpDownSetting = 1;
	int LeftRightSetting = 1;
	int SuggesstionSetting = 1;
	
	bool ShiftTime = false;
	
	bool OnMissed = false;

	//Start
	bool OnStartGame = true;
	bool OnMainMenu = false;

	//MainMenu:
	bool OnLoadDictionary = false;
	bool OnMainDictionaryMenu = false;
	bool OnExtraMenu = false;
	bool OnHelpMainMenu = false;

	//DictionarMenu:					
	bool OnKeyboardMobileMenu = false;			
	bool OnKeyboardQWERTYMenu = false;			int IndexCharacterIntelisense = -1;
	bool OneResultMenu = false;					int IndexCharacter = 0;
	bool OneRandomMenu = false;					char intelisense[18];
	bool OnHistoryMenu = false;					char writtenword[65];

	//Help:
	bool OnHelpAboutDictionary = false;
	bool OnHelpAboutPersons = false;
	bool OnHelpControlMenu = false;
//========================================================================================================

//========================================================================================================
// All characters available in the dictionary
//--------------------------------------------------------------------------------------------------------
	char abc[] = {'a','b','c','A','B','C','á','à','â','ä','æ','Á','À','Â','Ä','Æ','ç','Ç'};
	char def[] = {'d','e','f','D','E','F','é','è','ê','ë','É','È','Ê','Ë'};
	char ghi[] = {'g','h','i','G','H','I','í','ì','î','ï','Í','Ì','Î','Ï'};
	char jkl[] = {'j','k','l','J','K','L'};
	char mno[] = {'m','n','o','M','N','O','ñ','Ñ','ó','ò','ô','ö','Ó','Ò','Ô','Ö'};
	char pqrs[] = {'p','q','r','s','P','Q','R','S','ß'};
	char tuv[] = {'t','u','v','T','U','V','ú','ù','û','ü','Ú','Ù','Û','Ü'};
	char wxyz[] = {'w','x','y','z','W','X','Y','Z'};

	char characters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
					   'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	char pmark[] = {'¿','?','¡','!',',','.',':',';', '»','«', ' '};
//========================================================================================================


//========================================================================================================
//      Labels
//--------------------------------------------------------------------------------------------------------
	int mainMenuItemPosY1 = 95;
	int mainMenuItemPosY2 = 138;
	int mainMenuItemPosY3 = 183;
	int mainMenuItemPosY4 = 225;

	int generalMenuItemPosX = 71;		int helptextMenuPosX = 5;
	int generalMenuItemPosY1 = 65;		int helptextMenuPosY = 252;
	int generalMenuItemPosY2 = 107;
	int generalMenuItemPosY3 = 150;
	int generalMenuItemPosY4 = 192;

	int loadMenuItemPosY1 = 48;			int loadMenuItemPosX = 305;		
	int loadMenuItemPosY2 = 90;	
	int loadMenuItemPosY3 = 135;		
	int loadMenuItemPosY4 = 178;		
	int loadMenuItemPosY5 = 220;

//--------------------------------------------------------------------------------------------------------
//	Keyboard Mobile KeyPosition
//--------------------------------------------------------------------------------------------------------
	int keyMobileKeyX1 = 17;		int keyMobileKeyY1 =  83;
	int keyMobileKeyX2 = 53;		int keyMobileKeyY2 =  119;
	int keyMobileKeyX2_2 = 56;
	int keyMobileKeyX3 = 93;		int keyMobileKeyY3 =  155;
	int keyMobileKeyX3_2 = 96;

	int keyMobileWrittenX = 150;	int keyMobileWrittenY = 51;

	int keyMobileInteliseX = 8;		int keyMobileInteliseY = 53;

	int suggestion1PosY1 = 75;		int suggestion1PosX = 150;
	int suggestion1PosY2 = 95;
	int suggestion1PosY3 = 116;
	int suggestion1PosY4 = 138;
	int suggestion1PosY5 = 160;

	int keyMobileSpecialX1 = 19;		int keyMobileSpecialY = 213;
	int keyMobileSpecialX2 = 77;
	int keyMobileSpecialX3 = 140;
	int keyMobileSpecialX4 = 210;
//========================================================================================================


int ExitCallback(int Arg1, int Arg2, void *Common)
{
    sceKernelExitGame();
    return 0;
}
int CallbackThread(SceSize Args, void *Argp)
{
    int CallbackId = sceKernelCreateCallback("Exit Callback", ExitCallback, NULL);
    sceKernelRegisterExitCallback(CallbackId);
    sceKernelSleepThreadCB();
    return 0;
}
int SetupCallbacks(void)
{
    int ThreadId = sceKernelCreateThread("update_thread",CallbackThread,0x11,0xFA0,0,0);
        if(ThreadId >= 0) sceKernelStartThread(ThreadId,0,0);
    return ThreadId;
}


//========================================================================================================
//Menu Logic Functions
//--------------------------------------------------------------------------------------------------------
void SetAllMenusSettingToOne()
{
	UpDownSetting = 1; 
	LeftRightSetting = 1;
	SuggesstionSetting = 1;
}

void SetAllMenusOff()
{
	OnStartGame = false;
	OnMainMenu = false;

	OnMissed = false;

//MainMenu:
	OnLoadDictionary = false;
	OnMainDictionaryMenu = false;
	OnExtraMenu = false;
	OnHelpMainMenu = false;

//DictionarMenu:
	OnKeyboardMobileMenu = false;
	OnKeyboardQWERTYMenu = false;
	OneResultMenu = false;
	OneRandomMenu = false;
	OnHistoryMenu = false;

//Help:
	OnHelpAboutDictionary = false;
	OnHelpAboutPersons = false;
	OnHelpControlMenu = false;
}

void DeleteIntelisenseArray()
{
	IndexCharacterIntelisense=-1;  //return to the first element

    for(int i =0;i<=strlen(intelisense);i++) intelisense[i] = NULL;
}

void DeleteCurrentCharacter()
{
	int pos=strlen(writtenword);
	writtenword[pos-1]=NULL;
}

void ShiftCharactersFromLowerToUpper(int i)
{
	IndexCharacter=i+26;
    int pos=strlen(writtenword);
    writtenword[pos-1]=characters[IndexCharacter];
}

void ShiftCharactersFromUpperToLower(int i)
{
	IndexCharacter=i-26;
    int pos=strlen(writtenword);
    writtenword[pos-1]=characters[IndexCharacter];
}
//--------------------------------------------------------------------------------------------------------
//Drawing GUI-Functions
//--------------------------------------------------------------------------------------------------------
void DrawMainMenu()
{
	surface->DrawSurface(bgmainmenu, screen);

	menu->MainMenuEngine(UpDownSetting);

	surface->DrawLabel(menu->GetLabelText1(), screen , generalMenuItemPosX, mainMenuItemPosY1);
	surface->DrawLabel(menu->GetLabelText2(), screen , generalMenuItemPosX, mainMenuItemPosY2);
	surface->DrawLabel(menu->GetLabelText3(), screen , generalMenuItemPosX, mainMenuItemPosY3);
	surface->DrawLabel(menu->GetLabelText4(), screen , generalMenuItemPosX, mainMenuItemPosY4);

	SDL_Flip(screen);
}

void DrawLoadDictionary()
{
	surface->DrawSurface(bgloaddictionarmenu, screen);

	menu->LoadEngine(UpDownSetting, LeftRightSetting);
	surface->DrawLabel(menu->GetLabelText1(), screen , generalMenuItemPosX, loadMenuItemPosY1);
	surface->DrawLabel(menu->GetLabelText2(), screen , generalMenuItemPosX, loadMenuItemPosY2);
	surface->DrawLabel(menu->GetLabelText3(), screen , generalMenuItemPosX, loadMenuItemPosY3);
	surface->DrawLabel(menu->GetLabelText4(), screen , generalMenuItemPosX, loadMenuItemPosY4);
	surface->DrawLabel(menu->GetLabelText5(), screen , generalMenuItemPosX, loadMenuItemPosY5);

	surface->DrawLabel(menu->GetLabelText6(), screen , loadMenuItemPosX, loadMenuItemPosY1);
	surface->DrawLabel(menu->GetLabelText7(), screen , loadMenuItemPosX, loadMenuItemPosY2);
	surface->DrawLabel(menu->GetLabelText8(), screen , loadMenuItemPosX, loadMenuItemPosY3);
	surface->DrawLabel(menu->GetLabelText9(), screen , loadMenuItemPosX, loadMenuItemPosY4);
	surface->DrawLabel(menu->GetLabelText10(), screen , loadMenuItemPosX, loadMenuItemPosY5);

	surface->DrawLabel(menu->GetHelpLabelText(), screen , helptextMenuPosX, helptextMenuPosY);

	SDL_Flip(screen);
}

void DrawDictionaryMain()
{
	surface->DrawSurface(bgdictionarymainmenu, screen);

	menu->DictionaryMenuEngine(UpDownSetting);
	surface->DrawLabel(menu->GetLabelText1(), screen , generalMenuItemPosX, generalMenuItemPosY1);
	surface->DrawLabel(menu->GetLabelText2(), screen , generalMenuItemPosX, generalMenuItemPosY2);
	surface->DrawLabel(menu->GetLabelText3(), screen , generalMenuItemPosX, generalMenuItemPosY3);
	surface->DrawLabel(menu->GetLabelText4(), screen , generalMenuItemPosX, generalMenuItemPosY4);

	surface->DrawLabel(menu->GetHelpLabelText(), screen , helptextMenuPosX, helptextMenuPosY);

	SDL_Flip(screen);
}

void DrawHelpMain()
{
	surface->DrawSurface(bghelpmainmenu, screen);

	menu->HelpMenuEngine(UpDownSetting);
	surface->DrawLabel(menu->GetLabelText1(), screen , generalMenuItemPosX, generalMenuItemPosY1);
	surface->DrawLabel(menu->GetLabelText2(), screen , generalMenuItemPosX, generalMenuItemPosY2);
	surface->DrawLabel(menu->GetLabelText3(), screen , generalMenuItemPosX, generalMenuItemPosY3);

	surface->DrawLabel(menu->GetHelpLabelText(), screen , helptextMenuPosX, helptextMenuPosY);

	SDL_Flip(screen);
}

void DrawKeyboardMobile()
{
	surface->DrawSurface(keyboardmobile, screen);

	keyboard->KeyboardMobileEngine(UpDownSetting, LeftRightSetting, intelisense, writtenword);

	surface->DrawLabel(keyboard->GetIntellisenseKey(),screen , keyMobileInteliseX, keyMobileInteliseY);
	surface->DrawLabel(keyboard->GetIntelisense(),screen, keyMobileInteliseX, keyMobileInteliseY);

	surface->DrawLabel(keyboard->GetWrittenWord(),screen, suggestion1PosX-6, 48);

	surface->DrawLabel(keyboard->GetKeyABC(),screen , keyMobileKeyX1, keyMobileKeyY1);
	surface->DrawLabel(keyboard->GetKeyDEF(),screen , keyMobileKeyX2_2, keyMobileKeyY1);
	surface->DrawLabel(keyboard->GetKeyGHI(),screen , keyMobileKeyX3_2, keyMobileKeyY1);
							
	surface->DrawLabel(keyboard->GetKeyJKL(),screen , keyMobileKeyX1, keyMobileKeyY2);
	surface->DrawLabel(keyboard->GetKeyMNO(),screen , keyMobileKeyX2_2, keyMobileKeyY2);
	surface->DrawLabel(keyboard->GetKeyPQRS(),screen , keyMobileKeyX3, keyMobileKeyY2);
							
	surface->DrawLabel(keyboard->GetKeyTUV(),screen , keyMobileKeyX1, keyMobileKeyY3);
	surface->DrawLabel(keyboard->GetKeyWYZ(),screen , keyMobileKeyX2, keyMobileKeyY3);
	surface->DrawLabel(keyboard->GetSpecialCharacters(),screen , keyMobileKeyX3_2, keyMobileKeyY3);

	surface->DrawLabel(keyboard->GetKeySpace(),screen , keyMobileSpecialX1, keyMobileSpecialY);
	surface->DrawLabel(keyboard->GetKeyChange(),screen , keyMobileSpecialX2, keyMobileSpecialY);
	surface->DrawLabel(keyboard->GetKeyDelete(),screen , keyMobileSpecialX3, keyMobileSpecialY);
	surface->DrawLabel(keyboard->GetKeyOK(),screen , keyMobileSpecialX4, keyMobileSpecialY);

	surface->DrawLabel(keyboard->GetHelpLabelText(),screen , helptextMenuPosX, helptextMenuPosY);

	menu->SuggestionEngine(SuggesstionSetting);

	surface->DrawLabel(menu->GetLabelText1(),screen , suggestion1PosX, suggestion1PosY1);
	surface->DrawLabel(menu->GetLabelText2(),screen , suggestion1PosX, suggestion1PosY2);
	surface->DrawLabel(menu->GetLabelText3(),screen , suggestion1PosX, suggestion1PosY3);
	surface->DrawLabel(menu->GetLabelText4(),screen , suggestion1PosX, suggestion1PosY4);
	surface->DrawLabel(menu->GetLabelText5(),screen , suggestion1PosX, suggestion1PosY5);

	SDL_Flip(screen);
}

void DrawKeyboardQWERTY()
{
	surface->DrawSurface(keyboardqwerty, screen);

	keyboard->KeyboardQWERTYEngine(UpDownSetting, LeftRightSetting, writtenword);

	surface->DrawLabel(keyboard->GetWrittenWord(), screen, 15, 48);

	surface->DrawLabel(keyboard->GetKeyQ(),screen, 25, 87);
	surface->DrawLabel(keyboard->GetKeyW(),screen, 63, 87);
	surface->DrawLabel(keyboard->GetKeyE(),screen, 104, 87);
	surface->DrawLabel(keyboard->GetKeyR(),screen, 147, 87);
	surface->DrawLabel(keyboard->GetKeyT(),screen, 186, 87);
	surface->DrawLabel(keyboard->GetKeyY(),screen, 227, 87);
	surface->DrawLabel(keyboard->GetKeyU(),screen, 266, 87);
	surface->DrawLabel(keyboard->GetKeyI(),screen, 306, 87);
	surface->DrawLabel(keyboard->GetKeyO(),screen, 344, 87);
	surface->DrawLabel(keyboard->GetKeyP(),screen, 387, 87);
	surface->DrawLabel(keyboard->GetKeyQuestion(),screen, 428, 87);

	surface->DrawLabel(keyboard->GetKeyA(),screen, 25, 123);
	surface->DrawLabel(keyboard->GetKeyS(),screen, 63, 123);
	surface->DrawLabel(keyboard->GetKeyD(),screen, 104, 123);
	surface->DrawLabel(keyboard->GetKeyF(),screen, 147, 123);
	surface->DrawLabel(keyboard->GetKeyG(),screen, 186, 123);
	surface->DrawLabel(keyboard->GetKeyH(),screen, 227, 123);
	surface->DrawLabel(keyboard->GetKeyJ(),screen, 266, 123);
	surface->DrawLabel(keyboard->GetKeyK(),screen, 306, 123);
	surface->DrawLabel(keyboard->GetKeyL(),screen, 346, 123);
	surface->DrawLabel(keyboard->GetKeyQuotes(),screen, 387, 123);
	surface->DrawLabel(keyboard->GetKeyDelete(),screen, 421, 123);

	surface->DrawLabel(keyboard->GetKeyZ(),screen, 25, 160);
	surface->DrawLabel(keyboard->GetKeyX(),screen, 63, 160);
	surface->DrawLabel(keyboard->GetKeyC(),screen, 104, 160);
	surface->DrawLabel(keyboard->GetKeyV(),screen, 147, 160);
	surface->DrawLabel(keyboard->GetKeyB(),screen, 186, 160);
	surface->DrawLabel(keyboard->GetKeyN(),screen, 227, 160);
	surface->DrawLabel(keyboard->GetKeyM(),screen, 266, 160);
	surface->DrawLabel(keyboard->GetKeyComa(),screen, 306, 160);
	surface->DrawLabel(keyboard->GetKeyDot(),screen, 348, 160);
	surface->DrawLabel(keyboard->GetKeyNotation(),screen, 387, 160);
	surface->DrawLabel(keyboard->GetKeyOK(),screen, 427, 160);
	
	surface->DrawLabel(keyboard->GetKeyShift(),screen, 32, 207);
	surface->DrawLabel(keyboard->GetKeySpace(),screen, 208, 207);
	surface->DrawLabel(keyboard->GetKeyChange(),screen, 403, 207);

	SDL_Flip(screen);
}

//========================================================================================================


extern "C" int SDL_main (int argc, char* args[]);

int main(int argc, char *args[])
{
    SetupCallbacks();
	
	SceCtrlData pad, lastpad;
	sceCtrlReadBufferPositive(&lastpad, 1);	

    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO)!=0)
	{
		pspDebugScreenInit();
		printf("unable to initialize SDL");
	}

	if(Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 5120) != 0)
	{
		pspDebugScreenInit();
		printf("unable to initialize audio");
	}

    SDL_ShowCursor(0);
	
    screen = SDL_SetVideoMode(480,272,32,SDL_HWSURFACE|SDL_DOUBLEBUF);

	TTF_Init();
	menu->Init();
	keyboard->Init();

	logo = surface->LoadSurface("images/kaczmarczyk.jpg");
	logo2 = surface->LoadSurface("images/logo.jpg");
	message = surface->LoadSurface("images/aviso.jpg");
	//sprite = surface->LoadSurface("images/animations/main.png");
	//bgaudio = audio->LoadMusic("music/bgsound1.mp3");

	surface->DrawIntro(logo, screen, 1.5);
	surface->DrawIntro(logo2, screen, 1.5);
	surface->DrawSurface(message, screen);
	SDL_Flip(screen);


	missed = surface->LoadSurface("images/missed.png");

	bgmainmenu = surface->LoadSurface("images/menu.jpg");
	bgdictionarymainmenu = surface->LoadSurface("images/menudictionary.jpg");
	bgloaddictionarmenu = surface->LoadSurface("images/loadmenu.jpg");
	bghelpmainmenu = surface->LoadSurface("images/helpmenu.jpg");
	bghelpinfo = surface->LoadSurface("images/info.jpg");
	bghelpperson = surface->LoadSurface("images/aboutPerson.jpg");

	keyboardmobile = surface->LoadSurface("images/keyboardM.jpg");
	keyboardqwerty = surface->LoadSurface("images/keyboard.jpg");

	while(true)
	{
		sceCtrlReadBufferPositive(&pad, 1);
     
		if(pad.Buttons != lastpad.Buttons)
		{
		lastpad = pad;

//========================================================================================================
//PSP_CTRL_CROSS [X]
//========================================================================================================
		if(pad.Buttons & PSP_CTRL_CROSS)
			{
				if(OnStartGame)
				{
						SetAllMenusOff();
						SetAllMenusSettingToOne();
						OnMainMenu = true;
						//chanel = audio->PlayMusic(bgaudio,-1);
						DrawMainMenu();
				}

//--------------------------------------------------------------------------------------------------------
//Main Menu
//--------------------------------------------------------------------------------------------------------
				else if(OnMainMenu)
				{
					switch(UpDownSetting)
					{
					
						case 1:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnLoadDictionary = true;
							
							DrawLoadDictionary();
							break;
						}

						case 2:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnMainDictionaryMenu = true;
							
							DrawDictionaryMain();
							break;
						}

					case 3:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnExtraMenu = true;

							surface->DrawSurface(missed, screen);
							SDL_Flip(screen);
							break;
						}

					case 4:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnHelpMainMenu = true;

							DrawHelpMain();
							break;
						}
					}
				}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//Dictionary Main Menu
//--------------------------------------------------------------------------------------------------------
				else if(OnMainDictionaryMenu)
				{
					switch(UpDownSetting)
					{
						case 1:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnKeyboardMobileMenu = true;

							DrawKeyboardMobile();
							break;
						}

						case 2:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OneRandomMenu = true;

							surface->DrawSurface(missed, screen);

							SDL_Flip(screen);
							break;
						}

						case 3:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnMissed = true;

							surface->DrawSurface(missed, screen);

							SDL_Flip(screen);
							break;
						}

						case 4:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnHistoryMenu = true;

							surface->DrawSurface(missed, screen);

							SDL_Flip(screen);
							break;
						}
					}
				}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//Help Menu
//--------------------------------------------------------------------------------------------------------
				else if(OnHelpMainMenu)
				{
					switch(UpDownSetting)
					{
						case 1:
						{	
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnHelpAboutDictionary = true;

							surface->DrawSurface(bghelpinfo, screen);
							SDL_Flip(screen);
							break;
						}

						case 2:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnHelpControlMenu = true;

							surface->DrawSurface(missed, screen);
							SDL_Flip(screen);
							break;
						}

						case 3:
						{
							SetAllMenusOff();
							SetAllMenusSettingToOne();
							OnHelpAboutPersons = true;

							surface->DrawSurface(bghelpperson, screen);
							SDL_Flip(screen);
							break;
						}
					}
				}
//--------------------------------------------------------------------------------------------------------

				else if(OnHelpAboutDictionary)
				{
					SetAllMenusOff();
					SetAllMenusSettingToOne();
					OnHelpControlMenu = true;

					surface->DrawSurface(missed, screen);
					SDL_Flip(screen);
				}

				else if(OnHelpControlMenu)
				{
					SetAllMenusOff();
					SetAllMenusSettingToOne();
					OnHelpAboutPersons = true;

					surface->DrawSurface(bghelpperson, screen);
					SDL_Flip(screen);
				}

				else if(OnHelpAboutPersons)
				{
					SetAllMenusOff();
					SetAllMenusSettingToOne();
					OnHelpMainMenu = true;

					DrawHelpMain();
				}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//KeyboardMobile Intelisense
//--------------------------------------------------------------------------------------------------------
				else if(OnKeyboardMobileMenu)
				{
					SetAllMenusOff();
					OnKeyboardMobileMenu = true;

					switch(UpDownSetting)
					{
						case 1:
						{
							switch(LeftRightSetting)
							{
								case 1: //abc
								{
									if(IndexCharacterIntelisense < 17)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, abc[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									
									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 2: //def
								{
									if(IndexCharacterIntelisense < 13)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, def[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 3: //ghi
								{
									if(IndexCharacterIntelisense < 13)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, ghi[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 4: //ok!
								{
									break;
								}
							}//switch case
							break;
						}//line 1
//--------------------------------------------------------------------------------------------------------
						case 2:
						{
							switch(LeftRightSetting)
							{
								case 1://jkl
								{
									if(IndexCharacterIntelisense < 5)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, jkl[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 2://mno
								{
									if(IndexCharacterIntelisense < 15)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, mno[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;	
								}

								case 3://pqrs
								{
									if(IndexCharacterIntelisense < 8)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, pqrs[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 4: //Ok!
								{
									break;
								}
							}//switch case
							break;
						}//line 2
//--------------------------------------------------------------------------------------------------------
						case 3:
						{
							switch(LeftRightSetting)
							{
								case 1://tuv
								{
									if(IndexCharacterIntelisense < 13)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, tuv[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 2://wxyz
								{
									if(IndexCharacterIntelisense < 7)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, wxyz[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 3://.,?!
								{
									if(IndexCharacterIntelisense < 9)
									{
										IndexCharacterIntelisense++;
										sprintf(intelisense,"%s%c", intelisense, pmark[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}

									else
									{
										DeleteIntelisenseArray();
										DrawKeyboardMobile();
									}
									break;
								}

								case 4://Ok!
								{
									break;
								}
							}//switchcase
							break;
						}//line 3
//--------------------------------------------------------------------------------------------------------
						case 4:
						{
							switch(LeftRightSetting)
							{
								case 1://space
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardMobile();
									break;
								}

								case 2://change
								{
									SetAllMenusOff();
									SetAllMenusSettingToOne();
									OnKeyboardQWERTYMenu = true;
									ShiftTime = false;
									IndexCharacter=0;

									DrawKeyboardQWERTY();
									break;
								}

								case 3://delete
								{
									DeleteCurrentCharacter();
									DrawKeyboardMobile();
									break;
								}

								case 4://OK!
								{
									break;
								}
							}//siwtchcase
							break;
						}//line 4
					}//switchcase main
				}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//KeyboardQWERTY
//--------------------------------------------------------------------------------------------------------
				else if(OnKeyboardQWERTYMenu)
				{
					switch(UpDownSetting)
					{
//--------------------------------------------------------------------------------------------------------
						case 1:
//--------------------------------------------------------------------------------------------------------
						{
							switch(LeftRightSetting)
							{
								case 1: //q
								{
									ShiftTime = false;
									IndexCharacter=16;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 2: //w
								{
									ShiftTime = false;
									IndexCharacter=22;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 3: //e
								{
									ShiftTime = false;
									IndexCharacter=4;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 4: //r
								{
									ShiftTime = false;
									IndexCharacter=17;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 5: //t
								{
									ShiftTime = false;
									IndexCharacter=19;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 6: //y
								{
									ShiftTime = false;
									IndexCharacter=24;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 7: //u
								{
									ShiftTime = false;
									IndexCharacter=20;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 8: //i
								{
									ShiftTime = false;
									IndexCharacter=8;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 9: //o
								{
									ShiftTime = false;
									IndexCharacter=14;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 10: //p
								{
									ShiftTime = false;
									IndexCharacter=15;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 11: //?
								{
									ShiftTime = false;
									sprintf(writtenword, "%s%c", writtenword, pmark[1]);
									DrawKeyboardQWERTY();
									break;
								}
							}
							break;
						}//line 1
//--------------------------------------------------------------------------------------------------------
						case 2:
//--------------------------------------------------------------------------------------------------------
						{
							switch(LeftRightSetting)
							{
								case 1: //a
								{
									ShiftTime = false;
									IndexCharacter=0;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 2: //s
								{
									ShiftTime = false;
									IndexCharacter=18;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 3: //d
								{
									ShiftTime = false;
									IndexCharacter=3;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 4: //f
								{
									ShiftTime = false;
									IndexCharacter=5;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 5: //g
								{
									ShiftTime = false;
									IndexCharacter=6;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 6: //h
								{
									ShiftTime = false;
									IndexCharacter=7;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 7: //j
								{
									ShiftTime = false;
									IndexCharacter=9;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 8: //k
								{
									ShiftTime = false;
									IndexCharacter=10;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 9: //l
								{
									ShiftTime = false;
									IndexCharacter=11;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 10: //"
								{
									ShiftTime = false;
									sprintf(writtenword, "%s%c", writtenword, pmark[8]);
									DrawKeyboardQWERTY();
									break;
								}

								case 11: //delete
								{
									ShiftTime = false;
									IndexCharacter=0;
									DeleteCurrentCharacter();
									DrawKeyboardQWERTY();
									break;
								}
							}
							break;
						}//line2
//--------------------------------------------------------------------------------------------------------
						case 3:
//--------------------------------------------------------------------------------------------------------
						{
							switch(LeftRightSetting)
							{
								case 1: //z
								{
									ShiftTime = false;
									IndexCharacter=25;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 2: //x
								{
									ShiftTime = false;
									IndexCharacter=23;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 3: //c
								{
									ShiftTime = false;
									IndexCharacter=2;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 4: //v
								{
									ShiftTime = false;
									IndexCharacter=21;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 5: //b
								{
									ShiftTime = false;
									IndexCharacter=1;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 6: //n
								{
									ShiftTime = false;
									IndexCharacter=13;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 7: //m
								{
									ShiftTime = false;
									IndexCharacter=12;
									sprintf(writtenword, "%s%c", writtenword, characters[IndexCharacter]);
									DrawKeyboardQWERTY();
									break;
								}

								case 8: //,
								{
									ShiftTime = false;
									sprintf(writtenword, "%s%c", writtenword, pmark[4]);
									DrawKeyboardQWERTY();
									break;
								}

								case 9: //.
								{
									ShiftTime = false;
									sprintf(writtenword, "%s%c", writtenword, pmark[6]);
									DrawKeyboardQWERTY();
									break;
								}

								case 10: //!
								{
									ShiftTime = false;
									sprintf(writtenword, "%s%c", writtenword, pmark[3]);
									DrawKeyboardQWERTY();
									break;
								}

								case 11: //Ok!
								{
									ShiftTime = false;
									break;
								}
							}
							break;
						}//line3
//--------------------------------------------------------------------------------------------------------
						case 4:
//--------------------------------------------------------------------------------------------------------
						{
							switch(LeftRightSetting)
							{
								//--------------------------------------------------------------------------------------------------------
								case 1: //shift
								{
									if(ShiftTime == false)
									{
										ShiftTime=true;
										ShiftCharactersFromLowerToUpper(IndexCharacter);
										DrawKeyboardQWERTY();
										
									}

									else
									{
										ShiftTime=false;
										ShiftCharactersFromUpperToLower(IndexCharacter);
										DrawKeyboardQWERTY();
									}
									break;
								}

								case 2: //shift
								{
									if(ShiftTime == false)
									{
										ShiftCharactersFromLowerToUpper(IndexCharacter);
										DrawKeyboardQWERTY();
										ShiftTime=true;
									}

									else
									{
										ShiftTime=false;
										ShiftCharactersFromUpperToLower(IndexCharacter);
										DrawKeyboardQWERTY();
									}
									break;
								}
								//--------------------------------------------------------------------------------------------------------
								
								//--------------------------------------------------------------------------------------------------------
								case 3: //space
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}

								case 4:
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}

								case 5:
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}

								case 6:
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}

								case 7:
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}

								case 8:
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}

								case 9:
								{
									sprintf(writtenword, "%s%c", writtenword, pmark[10]);
									DrawKeyboardQWERTY();
									break;
								}
								//--------------------------------------------------------------------------------------------------------

								//--------------------------------------------------------------------------------------------------------
								case 10: //change
								{
									SetAllMenusOff();
									SetAllMenusSettingToOne();
									OnKeyboardMobileMenu = true;
									IndexCharacterIntelisense =-1;
									DeleteIntelisenseArray();
									ShiftTime = false;

									DrawKeyboardMobile();
									break;
								}

								case 11:
								{
									SetAllMenusOff();
									SetAllMenusSettingToOne();
									OnKeyboardMobileMenu = true;
									IndexCharacterIntelisense =-1;
									DeleteIntelisenseArray();
									ShiftTime = false;

									DrawKeyboardMobile();
									break;
								}
								//--------------------------------------------------------------------------------------------------------
							}
							break;
						}//line 4

					}//switchcase 1
				}
//--------------------------------------------------------------------------------------------------------
		}//x pad



//========================================================================================================
//PSP_CTRL_CIRCLE [O]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_CIRCLE)
			{
				if(OnLoadDictionary || OnMainDictionaryMenu || OnExtraMenu || OnHelpMainMenu)
				{
						SetAllMenusOff();
						SetAllMenusSettingToOne();
						OnMainMenu = true;
						
						DrawMainMenu();
				}

				else if(OneRandomMenu || OnHistoryMenu || OnMissed)
				{
						SetAllMenusOff();
						SetAllMenusSettingToOne();
						OnMainDictionaryMenu = true;

						DrawDictionaryMain();

				}

				else if(OnHelpAboutDictionary || OnHelpControlMenu || OnHelpAboutPersons)
				{
						SetAllMenusOff();
						SetAllMenusSettingToOne();
						OnHelpMainMenu = true;

						DrawHelpMain();
				}

//--------------------------------------------------------------------------------------------------------
//KeyboardMobile
//--------------------------------------------------------------------------------------------------------
				else if(OnKeyboardMobileMenu)
				{
					SetAllMenusOff();
					OnKeyboardMobileMenu = true;

					switch(UpDownSetting)
					{
						case 1:
						{
							switch(LeftRightSetting)
							{
								case 1: //abc
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, abc[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

								case 2: //def
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, def[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

								case 3: //ghi
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, ghi[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}
							}//switch case
							break;
						}//line 1
//--------------------------------------------------------------------------------------------------------
						case 2:
						{
							switch(LeftRightSetting)
							{
								case 1: //jkl
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, jkl[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

								case 2: //mno
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, mno[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

								case 3: //pqrs
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, pqrs[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

							}//switchcase
							break;
						}//line 2
//--------------------------------------------------------------------------------------------------------
						case 3:
						{
							switch(LeftRightSetting)
							{
								case 1: //tuv
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, tuv[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

								case 2: //wxyz
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, wxyz[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}

								case 3: //.,?!
								{
									if(strlen(writtenword)<65)
									{
										sprintf(writtenword, "%s%c", writtenword, pmark[IndexCharacterIntelisense]);
										DrawKeyboardMobile();
									}
									break;
								}
							}//switchcase
							break;
						}//line 3

						default:
						{
							break;
						}
//--------------------------------------------------------------------------------------------------------
					}
				}
			}
//--------------------------------------------------------------------------------------------------------

//========================================================================================================
//PSP_CTRL_START [START]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_START)
			{
				if(!OnMainMenu)
				{
						SetAllMenusOff();
						SetAllMenusSettingToOne();
						OnMainMenu = true;
						
						DeleteIntelisenseArray();
						IndexCharacterIntelisense=-1;
						
						DrawMainMenu();
				}
			}
//--------------------------------------------------------------------------------------------------------


//========================================================================================================
//PSP_CTRL_DOWN [DOWN]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_DOWN)
			{
//--------------------------------------------------------------------------------------------------------
//Main Menu
//--------------------------------------------------------------------------------------------------------
				if(OnMainMenu)
				{
					UpDownSetting++;
					if (UpDownSetting >= 4) UpDownSetting = 4;
					
					DrawMainMenu();
				}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//LoadDictionary
//-------------------------------------------------------------------------------------------------------
				else if(OnLoadDictionary)
				{
					UpDownSetting++;
					if (UpDownSetting >= 5) UpDownSetting = 5;

					DrawLoadDictionary();
				}

//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Dictionary Main Menu
//-------------------------------------------------------------------------------------------------------
				else if(OnMainDictionaryMenu)
				{
					UpDownSetting++;
					if (UpDownSetting >= 4) UpDownSetting = 4;
					
					surface->DrawSurface(bgdictionarymainmenu, screen);

					DrawDictionaryMain();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Help main menu
//-------------------------------------------------------------------------------------------------------
				else if(OnHelpMainMenu)
				{
					UpDownSetting++;
					if (UpDownSetting >= 3) UpDownSetting = 3;
					
					surface->DrawSurface(bghelpmainmenu, screen);

					DrawHelpMain();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Keyboard Mobile
//-------------------------------------------------------------------------------------------------------
				else if(OnKeyboardMobileMenu)
				{
					DeleteIntelisenseArray();
					IndexCharacterIntelisense=-1;

					UpDownSetting++;
					if (UpDownSetting >= 4) UpDownSetting = 4;

					DrawKeyboardMobile();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Keyboard QWERTY
//-------------------------------------------------------------------------------------------------------
				else if(OnKeyboardQWERTYMenu)
				{
					UpDownSetting++;
					if (UpDownSetting >= 4) UpDownSetting = 4;

					DrawKeyboardQWERTY();
				}
			}
//--------------------------------------------------------------------------------------------------------


//========================================================================================================
//PSP_CTRL_UP [UP]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_UP)
			{
//-------------------------------------------------------------------------------------------------------
//Main Menu
//-------------------------------------------------------------------------------------------------------
				if(OnMainMenu)
				{
					UpDownSetting--;
					if (UpDownSetting <= 1) UpDownSetting = 1;
					
					DrawMainMenu();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Load Dictionary
//-------------------------------------------------------------------------------------------------------
				else if(OnLoadDictionary)
				{
					UpDownSetting--;
					if (UpDownSetting <= 1) UpDownSetting = 1;

					DrawLoadDictionary();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Main Dictionary Menu
//-------------------------------------------------------------------------------------------------------
				else if(OnMainDictionaryMenu)
				{
					UpDownSetting--;
					if (UpDownSetting <= 1) UpDownSetting = 1;
					
					DrawDictionaryMain();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Help Main Menu
//-------------------------------------------------------------------------------------------------------
				else if(OnHelpMainMenu)
				{
					UpDownSetting--;
					if (UpDownSetting <= 1) UpDownSetting = 1;
					
					surface->DrawSurface(bghelpmainmenu, screen);

					DrawHelpMain();
				}
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Keyboard Mobil
//-------------------------------------------------------------------------------------------------------
				else if(OnKeyboardMobileMenu)
				{
					DeleteIntelisenseArray();
					IndexCharacterIntelisense=-1;

					UpDownSetting--;
					if (UpDownSetting <= 1) UpDownSetting = 1;

					DrawKeyboardMobile();
				}
//--------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
//Keyboard QWERTY
//-------------------------------------------------------------------------------------------------------
				else if(OnKeyboardQWERTYMenu)
				{
					UpDownSetting--;
					if (UpDownSetting <= 1) UpDownSetting = 1;

					DrawKeyboardQWERTY();
				}
//--------------------------------------------------------------------------------------------------------

			}
//--------------------------------------------------------------------------------------------------------
		
//========================================================================================================
//PSP_CTRL_RIGHT [RIGHT]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_RIGHT)
			{
//-------------------------------------------------------------------------------------------------------
//Load Dictionary Menu
//-------------------------------------------------------------------------------------------------------
				if(OnLoadDictionary)
				{
					LeftRightSetting++;
					if (LeftRightSetting >= 2) LeftRightSetting = 2;

					DrawLoadDictionary();
				}
//-------------------------------------------------------------------------------------------------------
				
//--------------------------------------------------------------------------------------------------------
//keyboard mobile
//--------------------------------------------------------------------------------------------------------
				if(OnKeyboardMobileMenu)
				{
					DeleteIntelisenseArray();
					IndexCharacterIntelisense=-1;

					LeftRightSetting++;
					if (LeftRightSetting >= 4) LeftRightSetting = 4;

					DrawKeyboardMobile();
				}
//--------------------------------------------------------------------------------------------------------			
			
//--------------------------------------------------------------------------------------------------------
//keyboard QWERTY
//--------------------------------------------------------------------------------------------------------
				if(OnKeyboardQWERTYMenu)
				{
					LeftRightSetting++;
					if (LeftRightSetting >= 11) LeftRightSetting = 11;

					DrawKeyboardQWERTY();
				}
//--------------------------------------------------------------------------------------------------------			

			}
//--------------------------------------------------------------------------------------------------------

//========================================================================================================
//PSP_CTRL_LEFT [LEFT]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_LEFT)
			{
//-------------------------------------------------------------------------------------------------------
//Load Dictionary Menu
//-------------------------------------------------------------------------------------------------------
				if(OnLoadDictionary)
				{
					LeftRightSetting--;
					if (LeftRightSetting <= 1) LeftRightSetting = 1;

					DrawLoadDictionary();
				}
//-------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//keyboard mobile
//--------------------------------------------------------------------------------------------------------
				if(OnKeyboardMobileMenu)
				{
					DeleteIntelisenseArray();
					IndexCharacterIntelisense=-1;

					LeftRightSetting--;
					if (LeftRightSetting <= 1) LeftRightSetting = 1;

					DrawKeyboardMobile();
				}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//keyboard QWERTY
//--------------------------------------------------------------------------------------------------------
				if(OnKeyboardQWERTYMenu)
				{
					LeftRightSetting--;
					if (LeftRightSetting <= 1) LeftRightSetting = 1;

					DrawKeyboardQWERTY();
				}
//--------------------------------------------------------------------------------------------------------

			}
//--------------------------------------------------------------------------------------------------------
		
//========================================================================================================
//PSP_CTRL_LEFT [Right-TRIGGER]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_RTRIGGER)
			{
				if(OnKeyboardMobileMenu)
				{
					SuggesstionSetting++;
					if (SuggesstionSetting >= 5) SuggesstionSetting = 5;

					DrawKeyboardMobile();
				}

				else if(OnKeyboardQWERTYMenu)
				{
					if(ShiftTime == false)
					{
						ShiftTime=true;
						ShiftCharactersFromLowerToUpper(IndexCharacter);
						DrawKeyboardQWERTY();
					}
				}
			}
//--------------------------------------------------------------------------------------------------------

//========================================================================================================
//PSP_CTRL_LEFT [Left-TRIGGER]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_LTRIGGER)
			{
				if(OnKeyboardMobileMenu)
				{
					SuggesstionSetting--;
					if (SuggesstionSetting <= 1) SuggesstionSetting = 1;

					DrawKeyboardMobile();
				}

				else if(OnKeyboardQWERTYMenu)
				{
					if(ShiftTime == true)
					{
						ShiftTime=false;
						ShiftCharactersFromUpperToLower(IndexCharacter);
						DrawKeyboardQWERTY();
					}
				}
			}
//--------------------------------------------------------------------------------------------------------
		
//========================================================================================================
//PSP_CTRL_SQUARE [SQUARE]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_SQUARE)
			{
				if(OnKeyboardMobileMenu)
				{
					ShiftTime = false;
					IndexCharacter=0;
					DeleteCurrentCharacter();
					DrawKeyboardMobile();
				}

				else if(OnKeyboardQWERTYMenu)
				{
					ShiftTime = false;
					IndexCharacter=0;
					DeleteCurrentCharacter();
					DrawKeyboardQWERTY();
				}
			}
//--------------------------------------------------------------------------------------------------------


//========================================================================================================
//PSP_CTRL_SELECT [SELECT]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_SELECT)
			{
				if(OnKeyboardMobileMenu)
				{
					SetAllMenusOff();
					SetAllMenusSettingToOne();
					OnKeyboardQWERTYMenu = true;
					ShiftTime = false;

					DrawKeyboardQWERTY();				
				}

				else if(OnKeyboardQWERTYMenu)
				{
					SetAllMenusOff();
					SetAllMenusSettingToOne();
					OnKeyboardMobileMenu = true;
					IndexCharacterIntelisense =-1;
					DeleteIntelisenseArray();
					ShiftTime = false;

					DrawKeyboardMobile();
				}
			}
//--------------------------------------------------------------------------------------------------------

//========================================================================================================
//PSP_CTRL_TRIANGLE [TRIANGLE]
//========================================================================================================
			if(pad.Buttons & PSP_CTRL_TRIANGLE)
			{
				if(OnKeyboardMobileMenu)
				{
					sprintf(writtenword, "%s%c", writtenword, pmark[10]);
					DrawKeyboardMobile();
				}

				if(OnKeyboardQWERTYMenu)
				{
					sprintf(writtenword, "%s%c", writtenword, pmark[10]);
					DrawKeyboardQWERTY();
				}
			}
//--------------------------------------------------------------------------------------------------------
		}//end "pad"

	}//end while


//========================================================================================================
	SDL_FreeSurface(logo2);
	SDL_FreeSurface(message);
	SDL_FreeSurface(bgmainmenu);
	SDL_FreeSurface(bgdictionarymainmenu);
	SDL_FreeSurface(logo);
	
	delete surface;
	delete menu;
	delete keyboard;
	//delete audio;

	TTF_Quit();
	SDL_Quit();
    sceKernelSleepThread();


return 0;
}
