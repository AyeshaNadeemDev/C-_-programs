#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a="Ayesha Nadeem \nComputer Engineer \n";
	string b="Hira Aslam \nComputer Engineer \n" ;
	string c="Usman Tahir \nComputer Engineer \n";
	string A="She is good but need to change herselfin some points.\n";
	string B="She is very talented and my drama queen.\n";
	string C="He is good but do not care himself only care others.\n";
	string d;
	string x;
	do
	{
	cout<<"\nEnter the roll no= ";
	cin>>d;
	if (d=="CE-2019-27")
	{
		cout<<a;
		cout<<A;
		
	}
	if (d=="CE-2019-37")
	{
		cout<<b;
		cout<<B;
	}
	if (d=="CE-2019-34")
	{
		cout<<c;
		cout<<C;
	}
	cout<<"\nDo you want to run loop again (y/n)=  ";
	cin>>x;
    }while(x=="y");
    return 0;
}


