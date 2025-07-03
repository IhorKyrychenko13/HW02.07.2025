#include "TravelAgency.h"
TravelAgency::TravelAgency() {
    name = new char[10] {"undefined"};
    size = 0;
    tours = nullptr;
}
TravelAgency::TravelAgency(const char* _name) {
    name = new char[strlen(_name) + 1];
    strcpy_s(name, strlen(_name) + 1, _name);
    size = 0;
    tours = nullptr;
}
TravelAgency::~TravelAgency() {
    delete[] name;
    delete[] tours;
}
void TravelAgency::addTour(Tour obj) {
    addItemBack(tours, size, obj);
}
void TravelAgency::showAll() const {
    cout << "Travel Agency: " << name << endl;
    for (int i = 0; i < size; i++) {
        tours[i].show();
    }
}
void TravelAgency::deleteTourByName(const char* _name) {
    myRemoveIf(tours, size, [=](Tour t) {
        return strcmp(t.getName(), _name) == 0;
        });
}
void TravelAgency::findTourByDirection(const char* _dir) const {
    for (int i = 0; i < size; i++) {
        if (strstr(tours[i].getDirection(), _dir)) {
            tours[i].show();
        }
    }
}
void TravelAgency::sortByDirection() {
    sort_if<Tour>(tours, size, [](Tour a, Tour b) {
        return strcmp(a.getDirection(), b.getDirection()) > 0;
        });
}
void TravelAgency::sortByTravelCost() {
    sort_if<Tour>(tours, size, [](Tour a, Tour b) {
        return a.getTravelCost() > b.getTravelCost();
        });
}