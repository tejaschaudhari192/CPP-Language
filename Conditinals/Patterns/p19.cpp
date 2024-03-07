// Date 8/10/22

/* Sample Output
Enter Value : 5
*****
****
***
**
*

 */
 
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter Value : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        j = n - i;
        while (j >= 0)
        {
            cout << "*";
            j--;
        }

        cout << endl;
    }

    return 0;

    // coded by Tejas
}
