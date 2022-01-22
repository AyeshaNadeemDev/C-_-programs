#include <iostream>
using namespace std;
int main()
{
	int count=1;
	int prod=1;
	int value;
	cin>>value;
	while (count<=10){
	
	prod=count*value;
	cout << value <<"*"<< count << "="<< prod <<endl;
	count++;
}
	
}
