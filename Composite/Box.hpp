#ifndef COMPOSITE_BOX
#define COMPOSITE_BOX

#include "Component.hpp"

#include <vector>

class Box : public Component {
public:
    void addComponent(Component*);
    int getPrice() override;

private:
    std::vector<Component*> components_;
};

#endif // COMPOSITE_BOX