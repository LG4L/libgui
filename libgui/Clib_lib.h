#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

LRESULT CALLBACK Windowproc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Window
{
public:
	Window();
	Window(const Window&) = delete;
	Window& operator =(const Window&) = delete;;
		~Window();


	bool ProcessMessages();
	void Show(); // Afficher 
	void Hide(); // Cacher
private:
	HINSTANCE m_hInstance;
	HWND m_hWnd;
	bool m_visible;
};
