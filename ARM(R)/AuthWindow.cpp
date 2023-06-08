#include "AuthWindow.h"
#include "Windows.h"

using namespace ARMR;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew AuthWindow);
    return 0;
}


