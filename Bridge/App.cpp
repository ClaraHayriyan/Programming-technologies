#include "App.hpp"

App::App(std::shared_ptr<GUIPlatform> platform)
: platform_(platform)
{
}

void App::run() {
    platform_->createWindow();
    platform_->renderButton();
    platform_->processInput();
    platform_->closeWindow();
}