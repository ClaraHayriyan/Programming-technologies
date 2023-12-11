#include "App.hpp"
#include "WindowsGUI.hpp"
#include "LinuxGUI.hpp"

int main() {
    App windowsApp(std::make_shared<WindowsGUI>());
    App linuxApp(std::make_shared<LinuxGUI>());

    windowsApp.run();
    linuxApp.run();
}