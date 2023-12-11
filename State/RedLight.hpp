#ifndef STATE_RED_LIGHT_HPP
#define STATE_RED_LIGHT_HPP

#include "State.hpp"

class TrafficLight;

class RedLight : public State {
public:
    virtual void handle(TrafficLight& light) override;
};

#endif // STATE_RED_LIGHT_HPP