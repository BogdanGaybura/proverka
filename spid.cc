#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, Hinstance hPrevInstance,
				   LPSR lpCmdLine, int nCmdShow)
{
if (MessageBox(NULL, "Hello, world!", "Hello from Message Box",
	MB_OKCANCEL)==IDOK)
	MessageBox(NULL, "Pressed OK", "Hello from Message Box",MB_OK);
		return 0;
}