#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1, item2;
    int sum = 1;
    cin >> item1;

    while(cin >> item2)
    {
        if (item1.isbn() == item2.isbn())
        {
            sum++;
        }
        else{
            cout << item1.isbn() <<" is " << sum << " items";
            sum = 1;
            item1 = item2;
        }

    }

    cout << item1.isbn() << "There's " << sum << " items";
    return 0;

}
