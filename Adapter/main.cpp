#include "Adapter.hpp"

#include <algorithm> // std::copy
#include <iostream>
#include <iterator>
#include <string>

template <typename T>
void print(const std::list<T>& list, const std::string& message) {
    std::cout << message << ": ";
    std::copy(std::cbegin(list), std::cend(list), std::ostream_iterator<T>(std::cout, " "));
    std::cout << std::endl;
}

int main() {
    std::list myList{1, 2, 3, 4};
    ListToStackAdapter stack{myList};
    print(myList, "initial list");
    stack.pop();
    print(myList, "list after popping");
    stack.push(5);
    print(myList, "list after pushing 5");
    std::cout << "the top element is " << stack.top() << std::endl;
}