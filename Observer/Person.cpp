#include "Person.hpp"

Person::Person(int age)
: age_(age)
{
}

void Person::incrementAge() {
    ++age_;
    notify(*this, "age");
}