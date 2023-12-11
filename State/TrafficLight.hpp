#ifndef STATE_TRAFFIC_LIGHT_HPP
#define STATE_TRAFFIC_LIGHT_HPP

#include <memory>

class State;

class TrafficLight {
public:
    TrafficLight(std::shared_ptr<State> state);
    void setState(std::shared_ptr<State> state);
    void request();

private:
    std::shared_ptr<State> state_;
};

#endif // STATE_TRAFFIC_LIGHT_HPP