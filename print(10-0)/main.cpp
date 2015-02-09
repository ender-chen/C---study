#include <iostream>

using namespace std;

int main()
{
    int i=10;
    while(i >= 0)
    {
        cout << i<< " ";
        i--;
        if(i==-1)
        {
            cout << endl;
        }
    }


    for(int j=10; j>=0; j--)
        cout << j << " ";
        cout << endl;

    return 0;
}
