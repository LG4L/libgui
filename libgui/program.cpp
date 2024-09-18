#include "iostream"
#include "Clib_lib.h"

int main()
{
	std::cout << "creating windows /n";

	Window* pWindow = new Window();

	bool running = true;
	while (running)
	{
		if (!pWindow->ProcessMessages())
		{
			std::cout << "closing Window/n";
			running = false;
		}

		Sleep(10);
	}
	delete pWindow;

	return 0;
}
