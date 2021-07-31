#ifndef FOOD_H
#define FOOD_H
#define DS 3
#define FC 5
#define SC 5
#include <iostream>
using namespace std;

class Food
{
    public:
        Food();
        virtual ~Food();

        void printMenu()
        {
            firstCourseMenu();
            secondCourseMenu();
            dessertMenu();
        }

        void firstCourseMenu()
        {
            cout << "---First course---" << endl;
            for(int i = 0; i < FC; i++)
            {
                cout << i+1 << ". " << firstCourse[i] << endl;
            }
        }

        void secondCourseMenu()
        {
            cout << "\n---Second course---" << endl;
            for(int i = 0; i < SC; i++)
            {
                cout << i+1 << ". " <<  secondCourse[i] << endl;
            }
        }

        void dessertMenu()
        {
            cout << "\n---Desserts---" << endl;
            for(int i = 0; i < DS; i++)
            {
                cout << i+1 << ". " <<  dessert[i] << endl;
            }
        }


    protected:

    private:
        string firstCourse[FC] = {"Chickpea soup", "Chilli", "Mushroom soup", "Beef soup", "Chefs special"};
        string secondCourse[SC] = {"Grilled steak", "Pancakes with bananas and chocolate", "Salad with tuna", "Dumplings with onions", "Fried salmon"};
        string dessert[DS] = {"Strawberry ice cream", "Apple pie", "Macaroons"};
};

#endif // FOOD_H
