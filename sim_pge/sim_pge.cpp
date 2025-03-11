
#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

// screen dimensions
const int HRES = 640;
const int VRES = 480;
const int SCALING = 2;

class Example : public olc::PixelGameEngine
{
public:
	Example()
	{
		sAppName = "verilator_pge";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame

    if (GetKey(olc::Key::ESCAPE).bPressed || GetKey(olc::Key::Q).bPressed) {
      return false;
    }
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand()% 255));	
		return true;
	}
};


int main()
{
	Example demo;
	if (demo.Construct(HRES, VRES, SCALING, SCALING))
		demo.Start();

	return 0;
}
