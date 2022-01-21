clude <iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum,avg,max,min;
	cout<<"Marks of first subject= ";
	cin>>a;
	cout<<"Marks of second subject= ";
	cin>>b;
	cout<<"Marks of third subject= ";
	cin>>c;
	cout<<"Marks of fourth subject= ";
	cin>>d;
	sum=a+b+c+d;
	cout<<"Sum is= "<<sum<<endl;
	avg=sum/4;
	cout<<"Average is= "<<avg<<endl;
	if(a>=b&&a>=c&&a>=d)
	{
		cout<<"Greatest number is "<<a<<endl;
	}
	if(b>=a&&b>=c&&b>=d)
	{
		cout<<"Greatest number is "<<b<<endl;
	}
	if(c>=a&&c>=b&&c>=d)
	{
		cout<<"Greatest number is "<<c<<endl;
	}
	if(d>=a&&d>=b&&d>=c)
	{
		cout<<"Greatest number is "<<d<<endl;	
	}
	if(a<b&&a<c&&a<d)
	{
		cout<<"Smallest number is "<<a<<endl;
	}
	if(b<a&&b<c&&b<d)
	{
		cout<<"Smallest number is "<<b<<endl;
	}
	if(c<a&&c<b&&c<d)
	{
		cout<<"Smallest number is "<<c<<endl;
	}
	if(d<a&&d<b&&d<c)
	{
		cout<<"Smallest number is "<<d<<endl;
	}
}
