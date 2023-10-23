#ifndef COMPOSITE_ITEM
#define COMPOSITE_ITEM

#include "Component.hpp"

class Item : public Component {
public:
    explicit Item(int price);
    int getPrice() override;
    
private:
    int price_;
};

#endif // COMPOSITE_ITEM