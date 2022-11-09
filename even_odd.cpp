//program of even odd
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\n Enter number :";
	cin>>num;
	
	if(num==0)
	{
		cout<<num<<" is neither even nor odd";
	}
	else if(num%2==0)
	{
		cout<<num<<"is even number";
	}
	else
	{
		cout<<num<<" is odd number";
	}
	
	
	return 0;
}
