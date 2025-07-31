#ifndef APPETIZER_H
#define APPETIZER_H

#include "MenuItem.h"

class Appetizer : public MenuItem {
private:
    bool dipIncluded;

public:
    Appetizer(string name, string servingTemp, bool dipIncluded);
    void display() const override;
};

#endif
