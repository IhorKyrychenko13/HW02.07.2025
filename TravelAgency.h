#pragma once
#include "Tour.h"
#include "Array_Template.h"

class TravelAgency {
    char* name;
    int size;
    Tour* tours;

public:
    TravelAgency();
    TravelAgency(const char* _name);
    ~TravelAgency();
    void addTour(Tour obj);
    void showAll() const;
    void deleteTourByName(const char* name);
    void findTourByDirection(const char* direction) const;
    void sortByDirection();
    void sortByTravelCost();
};