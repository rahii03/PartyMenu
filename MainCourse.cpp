#include "MainCourse.h"

MainCourse::MainCourse(string name, string servingTemp, string sideDish)
    : MenuItem(name, servingTemp), sideDish(sideDish) {}

void MainCourse::display() const {
    MenuItem::display();
    cout << "Side Dish: " << sideDish << endl;
}
