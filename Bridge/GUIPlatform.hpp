#ifndef BRIDGE_GUIPLATFORM_HPP
#define BRIDGE_GUIPLATFORM_HPP

class GUIPlatform {
public:
    virtual void createWindow() =0;
    virtual void renderButton() =0;
    virtual void processInput() =0;
    virtual void closeWindow() =0;
};

#endif // BRIDGE_GUIPLATFORM_HPP