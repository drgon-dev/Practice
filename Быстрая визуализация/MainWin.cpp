#include "MainWin.h"
#include "Windows.h"

using namespace Быстраявизуализация;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MainWin);
    return 0;
}