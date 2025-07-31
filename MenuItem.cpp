#include "MenuItem.h"

MenuItem::MenuItem(string name, string servingTemp)
    : name(name), servingTemp(servingTemp) {}

void MenuItem::display() const {
    cout << "Dish Name: " << name << endl;
    cout << "Serving Temperature: " << servingTemp << endl;
}
