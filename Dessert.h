#ifndef DESSERT_H
#define DESSERT_H

#include "MenuItem.h"

class Dessert : public MenuItem {
private:
    bool isSugarFree;

public:
    Dessert(string name, string servingTemp, bool isSugarFree);
    void display() const override;
};

#endif
