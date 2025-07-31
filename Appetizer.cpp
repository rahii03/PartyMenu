#include "Appetizer.h"

Appetizer::Appetizer(string name, string servingTemp, bool dipIncluded)
    : MenuItem(name, servingTemp), dipIncluded(dipIncluded) {}

void Appetizer::display() const {
    MenuItem::display();
    cout << "Dip Included: " << (dipIncluded ? "Yes" : "No") << endl;
}
