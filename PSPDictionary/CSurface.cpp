#include "CSurface.h"

CSurface::CSurface(){}
CSurface::~CSurface(){}

SDL_Surface *CSurface::LoadSurface(const char *filepath)
{
	SDL_Surface *Surf_Temp = NULL;
	SDL_Surface *Surf_Return = NULL;

	if((Surf_Temp = IMG_Load(filepath)) == NULL)
		{
			pspDebugScreenInit();
			pspDebugScreenPrintf("No image loaded");			
			return NULL;
		}
	Surf_Return = SDL_DisplayFormat(Surf_Temp);
	SDL_FreeSurface(Surf_Temp);

	return Surf_Return;
}

void CSurface::DrawSurface(SDL_Surface *Surf_Src, SDL_Surface *Surf_Dest)
{
	SDL_BlitSurface(Surf_Src, NULL, Surf_Dest, NULL);
}

void CSurface::DrawIntro(SDL_Surface *Surf_Src, SDL_Surface *Surf_Dest, float time)
{
	SDL_BlitSurface(Surf_Src, NULL, Surf_Dest, NULL);
	SDL_Flip(Surf_Dest);
	sceKernelDelayThread(time*1000*1000);
}

void CSurface::DrawSurface(SDL_Surface *Surf_Src, SDL_Surface *Surf_Dest, int sx, int sy, int sh, int sw, int dx, int dy, int dh, int dw)
{	
	SDL_Rect Surf_RSrc;
	Surf_RSrc.x = sx;
	Surf_RSrc.y = sy;
	Surf_RSrc.h = sh;
	Surf_RSrc.w = sw;

	SDL_Rect Surf_RDest; 
	Surf_RSrc.x = dx;
	Surf_RSrc.y = dy;
	Surf_RSrc.h = dh;
	Surf_RSrc.w = dw;

	SDL_BlitSurface(Surf_Src, &Surf_RSrc, Surf_Dest, &Surf_RDest);
}


void CSurface::DrawLabel(SDL_Surface *Surf_SrcText, SDL_Surface *Surf_DestText, int posx, int posy)
{
	SDL_Rect Surf_RSrc;
	Surf_RSrc.x = posx;
	Surf_RSrc.y = posy;

	SDL_BlitSurface(Surf_SrcText, NULL, Surf_DestText, &Surf_RSrc);
	SDL_FreeSurface(Surf_SrcText);
}