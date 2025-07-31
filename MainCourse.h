#ifndef MAINCOURSE_H
#define MAINCOURSE_H

#include "MenuItem.h"

class MainCourse : public MenuItem {
private:
    string sideDish;

public:
    MainCourse(string name, string servingTemp, string sideDish);
    void display() const override;
};

#endif
