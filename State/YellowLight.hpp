#ifndef STATE_YELLOW_LIGHT_HPP
#define STATE_YELLOW_LIGHT_HPP

#include "State.hpp"

class TrafficLight;

class YellowLight : public State {
public:
    virtual void handle(TrafficLight& light) override;
};

#endif // STATE_YELLOW_LIGHT_HPP