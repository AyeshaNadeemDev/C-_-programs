#include <iostream>
using namespace std;
int main()
{
	int x,y,temp;
	cout<<"Enter the first number= ";
	cin>>x;
	cout<<"Enter the second number= ";
	cin>>y;
	if (x<y)
	{
		temp=x,x=y,y=temp;
	}
	if (x%y==0)
	{
		cout<<x<<"is divisible by"<<y;
	}
	else 
	{
		cout<<x<<"is not divisible by"<<y;
	}
	
}
