// Date 11/10/22

#include<iostream>
using namespace std;

int count=0;

struct hashtable
{
	int data,status;
}ht[10];

void intiHT()
{
	int i;
	for ( i = 0; i < 10; i++)
		ht[i].status=1;
}

void addData()
{
	int data, key, i;
	if (count!=0)
	{
		cout<<"\nEnter Data";
		cin>>data;
		key=data%10;
		if (ht[key].status==1)
		{
			ht[key].data=data;
			ht[key].status=0;
			cout<<"Data added to table";
			count++;
		}
		else
		{
			for ( i = 0; i < 10; i++)
			{
				key=(key+1)%10;
				if (ht[key].status==1)
				{
					ht[key].data
				}
				
			}
			
		}
		
		
	}
}



int main()
{
	int n;
	cout<<"Enter Value : ";
	cin>>n;

	return 0;
// coded by Tejas
}