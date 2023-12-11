#ifndef STATE_GREEN_LIGHT_HPP
#define STATE_GREEN_LIGHT_HPP

#include "State.hpp"

class TrafficLight;

class GreenLight : public State {
public:
    virtual void handle(TrafficLight& light) override;
};

#endif // STATE_GREEN_LIGHT_HPP