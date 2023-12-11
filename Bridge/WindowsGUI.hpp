#ifndef BRIDGE_WINDOWS_GUI_HPP
#define BRIDGE_WINDOWS_GUI_HPP

#include "GUIPlatform.hpp"

class WindowsGUI : public GUIPlatform {
public:
    virtual void createWindow() override;
    virtual void renderButton() override;
    virtual void processInput() override;
    virtual void closeWindow() override;
};

#endif // BRIDGE_WINDOWS_GUI_HPP