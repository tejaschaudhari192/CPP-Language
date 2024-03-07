// Date : 9/10/22

#include <iostream>
using namespace std;

int main()
{
    //starting point as sp and ending point as ep
    int sp, ep, rem, n, count = 0, flag = 0, i;
    cout << "Enter Starting point : ";
    cin >> sp;
    cout << "Enter Ending point : ";
    cin >> ep;

    for (i = sp; i <= ep; i++)
    {
        n = i;
        flag = 0;
        while (n > 0)
        {
            rem = n % 10;
            n = n / 10;

            if (rem == 0)
            {
                flag = 1;
                continue;
            }

            if (i % rem == 0)
                count += 1;
            else
                flag = 1;
        }
        if (flag == 0)
            cout << i << ",";
    }

    return 0;

    // coded by Tejas
}
