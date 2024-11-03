#include <windows.h>

int main() {
	while (1) {
		int freg = rand() %1000;
		int dur = rand() % 100 ;
		HDC hdc = GetDC(0);
		int x = SM_CXSCREEN;
		int y = SM_CYSCREEN;
		int w = GetSystemMetrics(0);
		int h = GetSystemMetrics(1);
		BitBlt(hdc, rand() %1, 5, w, h, hdc, rand() % 1, rand() % -1, SRCINVERT);
		Beep(freg, dur);
		Sleep(10);
	}
}
