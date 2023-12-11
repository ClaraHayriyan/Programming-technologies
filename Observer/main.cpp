#include "Person.hpp"
#include "PersonObserver.hpp"

int main() {
    Person person(0);
    auto observer = std::make_shared<PersonObserver>();
    person.subscribe(observer);
    person.incrementAge();
    person.incrementAge();
    person.unsubscribe(observer);
    person.incrementAge();
}