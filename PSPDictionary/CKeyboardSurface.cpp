#include "CKeyboardSurface.h"

CKeyboardSurface::CKeyboardSurface() {}
CKeyboardSurface::~CKeyboardSurface() {}

void CKeyboardSurface::LoadFont()
{
	fontkey = TTF_OpenFont("fonts/comic.ttf", 11);
	TTF_SetFontStyle(fontkey, TTF_STYLE_BOLD);

	fontword = TTF_OpenFont("fonts/comic.ttf", 9);
	TTF_SetFontStyle(fontkey, TTF_STYLE_NORMAL);

	fontsuggestion = TTF_OpenFont("fonts/comic.ttf", 10);
	TTF_SetFontStyle(fontkey, TTF_STYLE_BOLD);

	helpfontlabel = TTF_OpenFont("fonts/comic.ttf", 11);
	TTF_SetFontStyle(helpfontlabel, TTF_STYLE_NORMAL);
}


TTF_Font *CKeyboardSurface::GetFontKey() { return fontkey; }

TTF_Font *CKeyboardSurface::GetFontWord() { return fontword; }

TTF_Font *CKeyboardSurface::GetFontSuggestion() { return fontsuggestion; }

TTF_Font *CKeyboardSurface::GetFontHelp() {return helpfontlabel;}


void CKeyboardSurface::CloseFont()
{
	TTF_CloseFont(fontkey);
	TTF_CloseFont(fontword);
	TTF_CloseFont(fontsuggestion);
}