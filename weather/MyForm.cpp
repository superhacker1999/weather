#include "MyForm.h"
#include <Windows.h>
using namespace weather; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); // имя стартовой формы
	return 0;
}