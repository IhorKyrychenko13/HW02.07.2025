#include <iostream>
#include "Tour.h"
#include "TravelAgency.h"

int main() {
    TravelAgency agency("Global Travel");
    Tour t1("Sea Breeze", "Spain, Barcelona", 1200, 7, "All Inclusive", 2500);
    Tour t2("Mountain Hike", "Ukraine, Carpathians", 800, 5, "Breakfast", 1000);
    Tour t3("Historic Tour", "Italy, Rome", 1500, 6, "Half Board", 2700);
    agency.addTour(t1);
    agency.addTour(t2);
    agency.addTour(t3);
    cout << "\nAll tours:\n";
    agency.showAll();
    cout << "\nSorted by direction:\n";
    agency.sortByDirection();
    agency.showAll();
    cout << "\nSorted by travel cost:\n";
    agency.sortByTravelCost();
    agency.showAll();
    cout << "\nSearch by 'Rome':\n";
    agency.findTourByDirection("Rome");
    cout << "\nDelete 'Sea Breeze':\n";
    agency.deleteTourByName("Sea Breeze");
    agency.showAll();
    return 0;
}