#ifndef CAnimation_H_INCLUDED
#define CAnimation_H_INCLUDED

class CAnimation
{
	CAnimation();
	~CAnimation();

	int frame;

	void clippingSprite(int x, int y);
	void Animation(int frame);

	int Getframe();
};

#endif //CAnimation_H_INCLUDED