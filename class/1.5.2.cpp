#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    /*Sales_item item1, item2;
    int sum = 0;
    cin>>item1;
    while(cin>>item2)
    {
        if(item1.isbn() == item2.isbn())
        {
            sum++;
        }
        else
        {
            cout<< item2.isbn() <<" is "<< sum << endl;
            item1.isbn() = item2.isbn();
        }


    }*/
    int data1, data2;
    int sum = 1;

    cin >> data1;
    while(cin >> data2)
    {
        if (data1 == data2)
        {
            sum++;
        }
        else
        {
            cout << data1 << " count is " << sum << endl;
            sum = 1;
            data1 = data2;
        }


    }
    cout << data1 << " count is " << sum << endl;


}
