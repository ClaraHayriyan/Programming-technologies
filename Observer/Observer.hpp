#ifndef OBSERVER_OBSERVER_HPP
#define OBSERVER_OBSERVER_HPP

#include <string>

template<typename T>
class Observer {
public:
    virtual void fieldChanged(T& source, const std::string& fieldName) =0;
};

#endif // OBSERVER_OBSERVER_HPP