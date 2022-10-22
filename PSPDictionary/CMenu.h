#ifndef CMenu_H_INCLUDED
#define CMenu_H_INCLUDED

#include "CMenuSurface.h"
#include <string>
#include <string.h>
using namespace std;

class CMenu
{
private:
	SDL_Surface *Surf_LabelText1, *Surf_LabelText2, *Surf_LabelText3, *Surf_LabelText4, *Surf_LabelText5;
	SDL_Surface *Surf_LabelText6, *Surf_LabelText7, *Surf_LabelText8, *Surf_LabelText9, *Surf_LabelText10;
	
	SDL_Surface *Surf_HelpLabelText;

	SDL_Color markedtexcolor, unmarkedtextcolor;

	#define unmarkedtext 100; 
	#define markedtext 0;

//========================================================================================================
//	Mainmenu:
//--------------------------------------------------------------------------------------------------------
		string MainMenuItemLabel1;		char *MainMenuItemLabelpointer1;		
		string MainMenuItemLabel2;		char *MainMenuItemLabelpointer2;		
		string MainMenuItemLabel3;		char *MainMenuItemLabelpointer3;		
		string MainMenuItemLabel4;		char *MainMenuItemLabelpointer4;

//--------------------------------------------------------------------------------------------------------
//	DictionaryMainmenu:
//--------------------------------------------------------------------------------------------------------
	string DictionaryMainMenuItemLabel1;	char *DictionaryMainMenuItemLabelpointer1;
	string DictionaryMainMenuItemLabel2;	char *DictionaryMainMenuItemLabelpointer2;
	string DictionaryMainMenuItemLabel3;	char *DictionaryMainMenuItemLabelpointer3;
	string DictionaryMainMenuItemLabel4;	char *DictionaryMainMenuItemLabelpointer4;

	string DictionaryHelpLabel1;			char *DictionaryHelplabelpointer1;
	string DictionaryHelpLabel2;			char *DictionaryHelplabelpointer2;
	string DictionaryHelpLabel3;			char *DictionaryHelplabelpointer3;
	string DictionaryHelpLabel4;			char *DictionaryHelplabelpointer4;
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//	HelpMainmenu:
//--------------------------------------------------------------------------------------------------------
	string HelpMainMenuItemLabel1;		char *HelpMainMenuItemLabelpointer1;
	string HelpMainMenuItemLabel2;		char *HelpMainMenuItemLabelpointer2;
	string HelpMainMenuItemLabel3;		char *HelpMainMenuItemLabelpointer3;

	string HelpMainMenuHelpLabel1;		char *HelpMainMenuHelpLabelpointer1;
	string HelpMainMenuHelpLabel2;		char *HelpMainMenuHelpLabelpointer2;
	string HelpMainMenuHelpLabel3;		char *HelpMainMenuHelpLabelpointer3;
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
//	LoadMainMenu:
//--------------------------------------------------------------------------------------------------------
	string LoadMenuItemLabel1;		char *LoadMenuItemLabelpointer1;
	string LoadMenuItemLabel2;		char *LoadMenuItemLabelpointer2;
	string LoadMenuItemLabel3;		char *LoadMenuItemLabelpointer3;
	string LoadMenuItemLabel4;		char *LoadMenuItemLabelpointer4;
	string LoadMenuItemLabel5;		char *LoadMenuItemLabelpointer5;
	string LoadMenuItemLabel6;		char *LoadMenuItemLabelpointer6;
	string LoadMenuItemLabel7;		char *LoadMenuItemLabelpointer7;
	string LoadMenuItemLabel8;		char *LoadMenuItemLabelpointer8;
	string LoadMenuItemLabel9;		char *LoadMenuItemLabelpointer9;
	string LoadMenuItemLabel10;		char *LoadMenuItemLabelpointer10;

	string LoadHelpLabel;			char *LoadHelpLabelpointer;


//========================================================================================================


public:
	CMenu();
	~CMenu();

	void Init();

	SDL_Surface *DrawLabel(const char* labeltext, TTF_Font *fontlabel, SDL_Color colorlabel);
	
	void MainMenuLabelInit();
	void LoadMenuLabelInit();
	void DictionaryMainMenuLabelInit();
	void HelpMainMenuLabelInit();

	void MainMenuEngine(int UpDownSetting);
	void LoadEngine(int UpDownSetting, int LeftRightSetting);
	void DictionaryMenuEngine(int UpDownSetting);
	void HelpMenuEngine(int UpDownSetting);

	void SuggestionEngine(int SuggesstionSetting);

	SDL_Surface *GetLabelText1();
	SDL_Surface *GetLabelText2();
	SDL_Surface *GetLabelText3();
	SDL_Surface *GetLabelText4();
	SDL_Surface *GetLabelText5();
	SDL_Surface *GetLabelText6();
	SDL_Surface *GetLabelText7();
	SDL_Surface *GetLabelText8();
	SDL_Surface *GetLabelText9();
	SDL_Surface *GetLabelText10();

	SDL_Surface *GetHelpLabelText();
};

#endif //CMenu_H_INCLUDED