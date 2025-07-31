#include "Dessert.h"

Dessert::Dessert(string name, string servingTemp, bool isSugarFree)
    : MenuItem(name, servingTemp), isSugarFree(isSugarFree) {}

void Dessert::display() const {
    MenuItem::display();
    cout << "Sugar Free: " << (isSugarFree ? "Yes" : "No") << endl;
}
