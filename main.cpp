#include <iostream>
#include "Appetizer.h"
#include "MainCourse.h"
#include "Dessert.h"

int main() {
    Appetizer starter("Spring Rolls", "Hot", true);
    MainCourse mainDish("Grilled Chicken", "Hot", "Mashed Potatoes");
    Dessert sweet("Fruit Salad", "Cold", true);

    cout << "--- Appetizer ---" << endl;
    starter.display();

    cout << "\n--- Main Course ---" << endl;
    mainDish.display();

    cout << "\n--- Dessert ---" << endl;
    sweet.display();

    return 0;
}
