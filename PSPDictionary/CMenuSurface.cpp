#include "CMenuSurface.h"

CMenuSurface::CMenuSurface() {}
CMenuSurface::~CMenuSurface() {}

void CMenuSurface::LoadFont()
{
	fontlabel = TTF_OpenFont("fonts/comic.ttf", 14);
	TTF_SetFontStyle(fontlabel, TTF_STYLE_BOLD);

	helpfontlabel = TTF_OpenFont("fonts/comic.ttf", 11);
	TTF_SetFontStyle(helpfontlabel, TTF_STYLE_NORMAL);
}

TTF_Font *CMenuSurface::GetFont()
{
	return fontlabel;
}

TTF_Font *CMenuSurface::GetHelpFont()
{
	return helpfontlabel;
}

void CMenuSurface::CloseFont()
{
	TTF_CloseFont(fontlabel);
	TTF_CloseFont(helpfontlabel);
}