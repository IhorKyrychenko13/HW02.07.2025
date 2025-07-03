#include "Tour.h"
Tour::Tour() {
    name = new char[10] {"undefined"};
    direction = new char[10] {"undefined"};
    food = new char[10] {"undefined"};
    pricePerDay = 0;
    days = 0;
    travelCost = 0;
}
Tour::Tour(const char* _name, const char* _direction, float _pricePerDay, int _days, const char* _food, float _travelCost) {
    name = new char[strlen(_name) + 1];
    strcpy_s(name, strlen(_name) + 1, _name);
    direction = new char[strlen(_direction) + 1];
    strcpy_s(direction, strlen(_direction) + 1, _direction);
    food = new char[strlen(_food) + 1];
    strcpy_s(food, strlen(_food) + 1, _food);
    pricePerDay = _pricePerDay;
    days = _days;
    travelCost = _travelCost;
}
Tour::Tour(const Tour& obj) {
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);

    direction = new char[strlen(obj.direction) + 1];
    strcpy_s(direction, strlen(obj.direction) + 1, obj.direction);

    food = new char[strlen(obj.food) + 1];
    strcpy_s(food, strlen(obj.food) + 1, obj.food);

    pricePerDay = obj.pricePerDay;
    days = obj.days;
    travelCost = obj.travelCost;
}
Tour& Tour::operator=(const Tour& obj) {
    if (this != &obj) {
        delete[] name;
        delete[] direction;
        delete[] food;
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        direction = new char[strlen(obj.direction) + 1];
        strcpy_s(direction, strlen(obj.direction) + 1, obj.direction);
        food = new char[strlen(obj.food) + 1];
        strcpy_s(food, strlen(obj.food) + 1, obj.food);
        pricePerDay = obj.pricePerDay;
        days = obj.days;
        travelCost = obj.travelCost;
    }
    return *this;
}
Tour::~Tour() {
    delete[] name;
    delete[] direction;
    delete[] food;
}
const char* Tour::getName() const { return name; }
const char* Tour::getDirection() const { return direction; }
float Tour::getPricePerDay() const { return pricePerDay; }
int Tour::getDays() const { return days; }
const char* Tour::getFood() const { return food; }
float Tour::getTravelCost() const { return travelCost; }
float Tour::getTotalCost() const {
    return (pricePerDay * days) + travelCost;
}
void Tour::show() const {
    cout << "Tour: " << name << endl;
    cout << "Direction: " << direction << endl;
    cout << "Price per day: " << pricePerDay << " UAH" << endl;
    cout << "Days: " << days << endl;
    cout << "Food: " << food << endl;
    cout << "Travel cost: " << travelCost << " UAH" << endl;
    cout << "Total cost: " << getTotalCost() << " UAH\n\n";
}