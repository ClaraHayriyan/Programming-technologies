#ifndef BRIDGE_APP_HPP
#define BRIDGE_APP_HPP

#include "GUIPlatform.hpp"

#include <memory>

class App {
public:
    App(std::shared_ptr<GUIPlatform>);
    void run();
    
private:
    std::shared_ptr<GUIPlatform> platform_;
};

#endif // BRIDGE_APP_HPP