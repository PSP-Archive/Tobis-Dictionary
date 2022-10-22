#ifndef CSurface_H_INCLUDED
#define CSurface_H_INCLUDED

#include <pspkernel.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

class CSurface
{
private:

public:
	CSurface();
	~CSurface();

	SDL_Surface *LoadSurface(const char *filepath);
	void DrawSurface(SDL_Surface *Surf_Src, SDL_Surface *Surf_Dest);
	void DrawIntro(SDL_Surface *Surf_Src, SDL_Surface *Surf_Dest, float time);
	void DrawSurface(SDL_Surface *Surf_Src, SDL_Surface *Surf_Dest, int sx, int sy, int sh, int sw, int dx, int dy, int dh, int dw);
	void DrawLabel(SDL_Surface *Surf_SrcText, SDL_Surface *Surf_DestText, int posx, int posy);
};

#endif //CSurface_H_INCLUDED