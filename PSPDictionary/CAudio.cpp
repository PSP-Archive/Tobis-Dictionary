#include "CAudio.h"

CAudio::CAudio(){}
CAudio::~CAudio(){}

Mix_Music *CAudio::LoadMusic(const char *filepath)
{
	if((bgsound1=Mix_LoadMUS(filepath))==NULL)
	{
		pspDebugScreenInit();
		pspDebugScreenPrintf("unable to load audio");
	}
}

int CAudio::PlayMusic(Mix_Music* sound, int loop)
{
	if((music_chanel = Mix_PlayMusic(sound, loop))==-1)
	{
		pspDebugScreenInit();
		pspDebugScreenPrintf("unable to play audio");
	}
	return music_chanel;
}

Mix_Music *CAudio::GetBgsound1() { return bgsound1; }
int CAudio::GetMusicChannel() { return music_chanel; }