#ifndef BRIDGE_LINUX_GUI_HPP
#define BRIDGE_LINUX_GUI_HPP

#include "GUIPlatform.hpp"

class LinuxGUI : public GUIPlatform {
public:
    virtual void createWindow() override;
    virtual void renderButton() override;
    virtual void processInput() override;
    virtual void closeWindow() override;
};

#endif // BRIDGE_LINUX_GUI_HPP