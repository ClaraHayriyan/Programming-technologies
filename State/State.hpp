#ifndef STATE_STATE_HPP
#define STATE_STATE_HPP

class TrafficLight;

class State {
public:
    virtual void handle(TrafficLight& light) =0;
};

#endif // STATE_STATE_HPP