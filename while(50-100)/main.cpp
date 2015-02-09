#include <iostream>

using namespace std;

int main()
{
    int i=50;
    int sum = 0;
    while(i<=100)
    {
        sum = i+sum;
        i++;
    }


    cout<<"sum of 50 to 100 inclusive is "<< sum <<endl;
    int sum2 = 0;
    for(int j=50; j<=100; j++)
    {
        sum2 += j;
    }
    cout<<"sum of 50 to 100 inclusive is "<< sum2 <<endl;
    return 0;
}
