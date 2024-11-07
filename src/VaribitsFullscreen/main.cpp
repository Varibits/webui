#include "webui.hpp"
#include <iostream>

int main()
{
    webui::window VaribitsUI;
    VaribitsUI.set_kiosk(true);
    VaribitsUI.show("http://localhost");
    webui::wait();
    return 0;
}

#ifdef _WIN32
// Release build
int WINAPI
    wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nShowCmd) {
    return main();
}
#endif
