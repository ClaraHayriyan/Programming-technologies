#ifndef OBSERVER_OBSERVABLE_HPP
#define OBSERVER_OBSERVABLE_HPP

#include "Observer.hpp"

#include <memory>
#include <string>
#include <vector>

template<typename T>
class Observable {
private:
    using ObserverPtr = std::shared_ptr<Observer<T>>;

public:
    void notify(T& source, const std::string& fieldName);
    void subscribe(ObserverPtr observer);
    void unsubscribe(ObserverPtr observer);

private:
    std::vector<ObserverPtr> observers_;
};

#include "Observable.impl.hpp"

#endif // OBSERVER_OBSERVABLE_HPP