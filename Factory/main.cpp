#include "RoadLogistics.hpp"
#include "SeaLogistics.hpp"

int main() {
    RoadLogistics roadLogistics;
    SeaLogistics seaLogistics;

    roadLogistics.planDeivery();
    seaLogistics.planDeivery();

    return 0;
}