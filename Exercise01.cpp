#include <iostream>
#include "Item.h"
using namespace std;

// DO NOT CHANGE THIS CODE

int main() {
    Item myItem;
    myItem.display();
    Item myItem2(100, 1000);
    myItem2.setDiscount(20);
    myItem2.display();
    //destructor called appears twice bc there are 2 items
    return 0;
}

// DO NOT CHANGE ABOVE CODE

