/*
Lesson 3.4 Sample
Pawelski
3/23/2021
This program allows you to build a burger.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome to the Better Burger Builder\n";
    cout << "Let's build your burger!\n\n";

    // Base Burger
    string weight, style, burger;
    burger = "";
    cout << "Do you want a 1/4 lb, 1/3 lb, or 1/2 burger?\n";
    cout << "Enter choice (1/4, 1/3, 1/2): ";
    cin >> weight;
    if (weight == "1/4") {
        burger += "You choose a 1/4 lb burger, ";
    }
    else if (weight == "1/3") {
        burger += "You choose a 1/3 lb burger, ";
    }
    else if (weight == "1/2") {
        burger += "You choose a 1/2 lb burger, ";
    }
    else {
        cout << "You entered something I did not recognize...\n";
        return 1;
    }

    cout << "Do you want medium or well?\n";
    cout << "Enter choice (medium, well): ";
    cin >> style;
    if (style == "medium") {
        burger += "cooked medium, ";
    }
    else if (style == "well") {
        burger += "cooked well, ";
    }
    else {
        cout << "You entered something I did not recognize...\n";
        return 1;
    }

    // Toppings
    string cheese;
    cout << "Do you want cheese?\n";
    cout << "Enter choice (yes/no): ";
    cin >> cheese;
    if (cheese == "yes") {
        cout << "American or Swiss?\n";
        cout << "Enter choice (american, swiss): ";
        cin >> cheese;
        if (cheese == "american") {
            burger += " with American cheese.";
        }
        else if (cheese == "swiss") {
            burger += " with Swiss cheese.";
        }
        else {
            cout << "You entered something I did not recognize...\n";
            return 1;
        }
    }
    else if (cheese == "no") {
        burger += " with no cheese.";
    }
    else {
        cout << "You entered something I did not recognize...\n";
        return 1;
    }

    // Report order
    cout << burger + "\nThank you and come again!\n";
    return 0;
}
