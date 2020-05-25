#include<iostream>
using namespace std;
bool prime(int n)
{
	int i=2;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout<<"Enter a positive integer: ";
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(prime(i))
		{
			int r=n-i;
			if(prime(r))
			{
				cout<<endl<<n<<"="<<i<<"+"<<r;
			}
		}
	}
}
