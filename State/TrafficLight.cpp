#include "TrafficLight.hpp"
#include "State.hpp"

TrafficLight::TrafficLight(std::shared_ptr<State> state)
: state_(state)
{
}

void TrafficLight::setState(std::shared_ptr<State> state) {
    state_ = state;
}

void TrafficLight::request() {
    state_->handle(*this);
}