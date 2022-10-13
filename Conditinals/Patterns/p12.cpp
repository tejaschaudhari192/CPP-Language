//Date : 7/10/22
/*
 Sample output
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    char ch='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j<=n)
        {
            cout<<ch;
            j++;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}