#include <iostream>
using namespace std;
int main()
{
	int a,i;
	cin>>a;
	for (i=2; i<a;i++)
	{
		if(a%i==0)
		{
			cout <<"not a prime number:";
			break;
		}
	}
	if(a==i)
	{
		cout<<"Yes, it is a prime number:";
	}
	
}
