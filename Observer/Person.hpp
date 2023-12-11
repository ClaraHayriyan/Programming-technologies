#ifndef OBSERVER_PERSON_HPP
#define OBSERVER_PERSON_HPP

#include "Observable.hpp"

class Person : public Observable<Person> {
public:
    Person(int age);
    void incrementAge();

private:
    int age_;
};

#endif // OBSERVER_PERSON_HPP