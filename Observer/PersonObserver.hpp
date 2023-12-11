#ifndef OBSERVER_PERSON_OBSERVER_HPP
#define OBSERVER_PERSON_OBSERVER_HPP

#include "Observer.hpp"
#include "Person.hpp"

class PersonObserver : public Observer<Person> {
public:
    void fieldChanged(Person&, const std::string& fieldName) override;

private:
    int age_;
};

#endif // OBSERVER_PERSON_OBSERVER_HPP