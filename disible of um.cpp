#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a large number= ";
	cin>>a;
	cout<<"Enter a small number= ";
	cin>>b;
	if (a%b==0)
	{
		cout<<a<<"is divisible by"<<b;
	}
	else
	{
		cout<<a<<"is not a divisible by"<<b;
	}
}
