#include <iostream>
#include "Food.h"
#include "Hostess.h"
#include "Customer.h"

using namespace std;

int main()
{
    Food f;
    Hostess h;
    Customer c;
    h.takingMenu();
    f.printMenu();
    h.takingOrder();
    c.orderingMain();
    return 0;
}
