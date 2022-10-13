// Date 8/10/22

/* Sample Output
Enter Value : 5
54321
 4321
  321
   21
    1
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
        j=n-i;
        while (j>=1)
        {
            cout<<" ";
            j--;
        }
        
        j = 1;
        while (j < i)
        {
            cout << j;
            j++;
        }

        j=i;
        while (j>=1)
        {
            cout<<j;
            j--;
        }
        

        cout << endl;
    }

    return 0;

    // coded by Tejas
}
