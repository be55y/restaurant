#ifndef HOSTESS_H
#define HOSTESS_H
#include <string>
#include <iostream>
using namespace std;

class Hostess
{
    public:
        Hostess();

        virtual ~Hostess();

        void takingMenu()
        {
            cout << "Hello and welcome to our restaurant 'The Blue Sea'.\nI will be your hostess today. Would you like a menu?" << endl;
            cout << "Y for yes, N for no" << endl;
            cout << "(N will exit the restaurant)" << endl;
            cin >> answer;
            if(answer == 'Y' || answer == 'y') cout << "Here you go. I will be back in a few minutes.\n" << endl;
            else
                {
                    cout << "No menu? Are you sure? Well, maybe next time. Have a nice day!" << endl;
                    exit(0);
                }

        }

        void takingOrder()
        {
            cout << "I'm back! What would you like to order?\n Just type the number of the meal!" << endl;
        }

    protected:

    private:
        char answer;
};

#endif // HOSTESS_H
