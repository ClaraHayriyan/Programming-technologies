#include "Observable.hpp"

#include <algorithm>

template<typename T>
void Observable<T>::notify(T& source, const std::string& fieldName) {
    for(auto& ob : observers_)
        ob->fieldChanged(source, fieldName);
}

template<typename T>
void Observable<T>::subscribe(ObserverPtr observer) {
    observers_.push_back(observer);
}

template<typename T>
void Observable<T>::unsubscribe(ObserverPtr observer) {
    observers_.erase(std::remove(observers_.begin(), observers_.end(), observer), observers_.end());
}