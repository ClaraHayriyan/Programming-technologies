#include "Singleton.hpp"

#include <iostream>

int main() {
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    std::cout << "Instance count: " << Singleton::count << std::endl;
}