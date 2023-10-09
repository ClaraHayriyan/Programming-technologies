#ifndef ADAPTER_ADAPTER_IMPL_HPP
#define ADAPTER_ADAPTER_IMPL_HPP

#include "Adapter.hpp"

template <typename T>
ListToStackAdapter<T>::ListToStackAdapter(std::list<T>& list)
: list_{list}
{
}

template <typename T>
void ListToStackAdapter<T>::push(const T& value) {
    list_.push_back(value);
}

template <typename T>
void ListToStackAdapter<T>::pop() {
    list_.pop_back();
}

template <typename T>
T& ListToStackAdapter<T>::top() {
    return list_.back();
}

template <typename T>
const T& ListToStackAdapter<T>::top() const {
    return list_.back();
}

#endif // ADAPTER_ADAPTER_IMPL_HPP