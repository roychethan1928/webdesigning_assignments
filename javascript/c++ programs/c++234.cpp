#include<iostream>
using namespace std;
int prime(int n)
{
	int factors;
	cout<<"prime numbers are...";
	for(int i=1;i<=n;i++)
	{
	factors=0;
	for(int j=1;j<=i;j++)
	{
	if(i%j==0)
	factors=factors+1;
	}
	if(factors<=2)
	cout<<i<<"\t";
}
}
int main()
{
	int n;
	cout<<"enter a integer value:";
	cin>>n;
	prime(n);
	return 0;
}
