#include <iostream>
using namespace std;
int main()
{
	int a,b,fact;
	char ch;
	do
	{
		cout<<"Enter value:";
		cin>>a;
		fact=1;
		b=1;
		while(b<=a)
		{
			fact=fact*b;
			cout<<b<<"X";
			b++;
		}
		cout<<"\n"<<"\nFactorial is "<<fact;
		cout<<"\n"<<"\n Do you want to ontinue:";
		cin>>ch;
	}
	while (ch=='y');
}
