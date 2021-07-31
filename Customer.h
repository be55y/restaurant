#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

using namespace std;


class Customer
{
    public:
        Customer();
        virtual ~Customer();

        void orderingMain()
        {
            cout << "*For the main course, I would like... ";
            cin >> main;
            checkingMain(main);
        }

        void checkingMain(int main)
        {
            while(getchar())
            {
                if(main < 1 || main > 5)
                {
                    cout << "*Whoops, there is no such meal with this number! Let me try again: ";
                    cin >> main;
                }
                else cout << "*Yeah, I would like that!" << endl;
            }

        }

    protected:

    private:
        int main;
        int second;
        int dessert;
};

#endif // CUSTOMER_H
