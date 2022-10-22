#ifndef CAudio_H_INCLUDED
#define CAudio_H_INCLUDED

#include <pspkernel.h>
#include <SDL/sdl.h>
#include <SDL/SDL_mixer.h>

class CAudio
{
private:
	Mix_Music *bgsound1;
	int music_chanel;

public:
	CAudio();
	~CAudio();

	Mix_Music *LoadMusic(const char *filepath);
	int PlayMusic(Mix_Music* sound, int loop);
	void StoppMusic();

	Mix_Music *GetBgsound1();
	int GetMusicChannel();
};

#endif //CAudio_H_INCLUDED