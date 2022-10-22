#ifndef CMenuSurface_H_INCLUDED
#define CMenuSurface_H_INCLUDED

#include <pspkernel.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

class CMenuSurface
{
private:
		TTF_Font *fontlabel, *helpfontlabel;
public:
	CMenuSurface();
	~CMenuSurface();
	void LoadFont();
	void CloseFont();

	TTF_Font *GetFont();
	TTF_Font *GetHelpFont();
};

#endif //CMenuSurface_H_INCLUDED