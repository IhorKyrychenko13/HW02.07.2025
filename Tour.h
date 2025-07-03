#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Tour {
    char* name;
    char* direction;
    float pricePerDay;
    int days;
    char* food;
    float travelCost;

public:
    Tour();
    Tour(const char* _name, const char* _direction, float _pricePerDay, int _days, const char* _food, float _travelCost);
    Tour(const Tour& obj);
    Tour& operator=(const Tour& obj);
    ~Tour();
    const char* getName() const;
    const char* getDirection() const;
    float getPricePerDay() const;
    int getDays() const;
    const char* getFood() const;
    float getTravelCost() const;
    float getTotalCost() const;
    void show() const;
};