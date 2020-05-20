#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int* p=a;
	cout<<"You entered: "<<endl;
	int j=0;
	for( j=0;j<5;j++)
	{
		cout<<*p<<endl;
		p++;
	}
}
