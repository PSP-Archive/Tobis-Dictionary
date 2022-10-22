#ifndef CKeyboardSurface_H_INCLUDED
#define CKeyboardSurface_H_INCLUDED

#include <pspkernel.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

class CKeyboardSurface
{
private:
		TTF_Font *fontkey, *fontword, *fontsuggestion, *helpfontlabel;
public:
	CKeyboardSurface();
	~CKeyboardSurface();
	void LoadFont();
	void CloseFont();

	TTF_Font *GetFontKey();
	TTF_Font *GetFontWord();
	TTF_Font *GetFontSuggestion();
	TTF_Font *GetFontHelp();
};

#endif //CKeyboardSurface_H_INCLUDED