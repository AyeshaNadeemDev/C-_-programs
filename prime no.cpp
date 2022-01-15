#include <iostream>
using namespace std;
int main()
{
	int a,b,i,j,k;
	cout<<"Enter any number:";
	cin>>a;
	b=2;
	while (b<=a)
	{
		i=1;
		j=2;
		while(j<b)
		{ 
				if(b%j==0)
			{
			i=0;
			break;
			}
			j++;
	   }
		if (i==1)
		{
			cout<< b <<endl;
		}
	
		b++;
	}
}
