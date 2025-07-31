#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>
using namespace std;

class MenuItem {
private:
    string name;
    string servingTemp;

public:
    MenuItem(string name, string servingTemp);
    virtual void display() const;
};

#endif
