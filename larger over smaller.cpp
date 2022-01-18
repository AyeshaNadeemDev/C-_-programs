#include <iostream>
using namespace std;
int main()
{
	int a,b,max,min;
	cout<<"Enter the first number= ";
	cin>>a;
	cout<<"Enter the second number= ";
	cin>>b;
	max= (a>b) ? a:b;
	min= (a<b) ? a:b;
	if(max%min==0)
	{
		cout<<max<<"is divisible by"<<min;
	}
	else
	{
		cout<<max<<"is not divisible by"<<min;
	}
}
