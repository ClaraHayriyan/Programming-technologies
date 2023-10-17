#ifndef ADAPTER_ADAPTER_HPP
#define ADAPTER_ADAPTER_HPP

#include <list>

template <typename T>
class ListToStackAdapter {
public:
    ListToStackAdapter(std::list<T>& list);
    void push(const T& value);
    void pop();
    T& top();
    const T& top() const;

private:
    std::list<T>& list_;
};

#include "Adapter.impl.hpp"

#endif // ADAPTER_ADAPTER_HPP