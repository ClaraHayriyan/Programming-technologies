#ifndef BUILDER_HOUSE_HPP
#define BUILDER_HOUSE_HPP

#include <string>

class House {
public:
    void setWalls(std::string);
    void setDoors(std::string);
    void setRoof(std::string);

    void printProperties() const;

private:
    std::string walls_;
    std::string doors_;
    std::string roof_;
};

#endif // BUILDER_HOUSE_HPP