#ifndef CKeyboard_H_INCLUDED
#define CKeyboard_H_INCLUDED

#include "CKeyboardSurface.h"
#include <string>
#include <string.h>
using namespace std;

class CKeyboard
{
private:
	SDL_Surface *Surf_KeyABC, *Surf_KeyDEF, *Surf_KeyGHI, *Surf_KeyIKL, *Surf_KeyMNO, *Surf_KeyPQRS, *Surf_KeyTUV, *Surf_KeyWXYZ, *Surf_SpecialCharacters;
	SDL_Surface *Surf_IntellisenseKey; 
	SDL_Surface *Surf_KeySpace, *Surf_KeyChange, *Surf_KeyDelete, *Surf_KeyOK;
	
	SDL_Surface *Surf_Intelisense, *Surf_WrittenWord;
	SDL_Surface *Surf_HelpLabelText;

	SDL_Surface *Surf_KeyA, *Surf_KeyB, *Surf_KeyC, *Surf_KeyD, *Surf_KeyE, *Surf_KeyF, *Surf_KeyG, *Surf_KeyH, *Surf_KeyI, *Surf_KeyJ, *Surf_KeyK; 
	SDL_Surface *Surf_KeyL, *Surf_KeyM, *Surf_KeyN, *Surf_KeyO, *Surf_KeyP, *Surf_KeyQ, *Surf_KeyR, *Surf_KeyS, *Surf_KeyT, *Surf_KeyU, *Surf_KeyV; 
	SDL_Surface *Surf_KeyW, *Surf_KeyX, *Surf_KeyY, *Surf_KeyZ;

	SDL_Surface *Surf_KeyQuestion, *Surf_KeyDot, *Surf_KeyQuotes, *Surf_KeyNotation, *Surf_KeyComa, *Surf_KeyShift;

	SDL_Color markedtexcolor, unmarkedtextcolor, unmarkedkeycolor, unmarkedIntellisense;

	#define unmarkedtext 100; 
	#define unmakredkey 255;
	#define markedtext 0;


public:
	CKeyboard();
	~CKeyboard();

	void Init();
	SDL_Surface *DrawLabel(const char* labeltext, TTF_Font *fontlabel, SDL_Color colorlabel);

	void KeyboardMobileEngine(int UpDownSetting, int LeftRightSetting, char *intelisense, char *writtenword);
	void KeyboardQWERTYEngine(int UpDownSetting, int LeftRightSetting, char *writtenword);


//========================================================================================================
//	Keyboard Mobil:
//========================================================================================================
	SDL_Surface *GetKeyABC();				SDL_Surface *GetIntellisenseKey();				
	SDL_Surface *GetKeyDEF();				SDL_Surface *GetIntelisense();				
	SDL_Surface *GetKeyGHI();				
	SDL_Surface *GetKeyJKL();				
	SDL_Surface *GetKeyMNO();				
	SDL_Surface *GetKeyPQRS();				
	SDL_Surface *GetKeyTUV();				
	SDL_Surface *GetKeyWYZ();				
	SDL_Surface *GetSpecialCharacters();	
//--------------------------------------------------------------------------------------------------------


//========================================================================================================
//	Keyboard QWERTY:
//========================================================================================================
	SDL_Surface *GetKeyA();		SDL_Surface *GetKeyJ();		SDL_Surface *GetKeyS();
	SDL_Surface *GetKeyB();		SDL_Surface *GetKeyK();		SDL_Surface *GetKeyT();
	SDL_Surface *GetKeyC();		SDL_Surface *GetKeyL();		SDL_Surface *GetKeyU();
	SDL_Surface *GetKeyD();		SDL_Surface *GetKeyM();		SDL_Surface *GetKeyV();
	SDL_Surface *GetKeyE();		SDL_Surface *GetKeyN();		SDL_Surface *GetKeyW();
	SDL_Surface *GetKeyF();		SDL_Surface *GetKeyO();		SDL_Surface *GetKeyX();
	SDL_Surface *GetKeyG();		SDL_Surface *GetKeyP();		SDL_Surface *GetKeyY();
	SDL_Surface *GetKeyH();		SDL_Surface *GetKeyQ();		SDL_Surface *GetKeyZ();
	SDL_Surface *GetKeyI();		SDL_Surface *GetKeyR();

	SDL_Surface *GetKeyQuestion();	SDL_Surface *GetKeyDot();
	SDL_Surface *GetKeyQuotes();	SDL_Surface *GetKeyNotation();
	SDL_Surface *GetKeyComa();		SDL_Surface	*GetKeyShift();
//--------------------------------------------------------------------------------------------------------
	
	SDL_Surface *GetKeySpace();
	SDL_Surface *GetKeyChange();
	SDL_Surface *GetKeyDelete();
	SDL_Surface *GetKeyOK();
	SDL_Surface *GetWrittenWord();
	SDL_Surface *GetHelpLabelText();
};
#endif //CKeyboard_H_INCLUDED