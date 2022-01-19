#include <iostream>
using namespace std;
int main ()
{
	int j,k,hcf;
	cout<<"Input the first number:";
	cin>>j;
	cout<< "Input the second number:";
	cin>>k;
	for(int i=1; i<= j && i<=k; i++)
	{
		if (j % i== 0 && k % i ==0)
		{
			hcf = i;
		}
	}
	cout << "the greatest common divisor is:"<< hcf <<endl;
	
}
