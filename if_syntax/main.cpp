#include <iostream>

using namespace std;

/*int main()
{
    int currVal = 0, val = 0;

    if (cin >> currVal)
    {
        int num = 1;
        val = currVal;

        while(cin >> currVal)
        {
            if (currVal == val)
            {
                num++;
            }
            else
            {


                cout << val << "cont is" << num << endl;
                val = currVal;
                num = 1;
            }
        }
        cout << val << "occurs"<< num << "times" << endl;
    }
    return 0;
}*/

int main()
{
    int currVal = 0, val = 0;
    if (cin >> currVal)
    {
        int cnt = 1;
        while(cin >> val)
        {
            if(val == currVal)
            {
                ++cnt;
            }
            else
            {
                cout << currVal << "Occurs" << cnt << "times" << endl;
                currVal = val;
                cnt = 1;
            }

        }
        cout << currVal << "occurs" << cnt << "times" << endl;
    }
    return 0;
}
