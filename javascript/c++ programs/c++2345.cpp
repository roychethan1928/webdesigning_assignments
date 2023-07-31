#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n,small,large;
	cout<<"enter the array size:";
	cin>>n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	small=a[0];
	large=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		small=a[i];
		if(a[i]>large)
		large=a[i];
		}
		cout<<"largest value is "<<large<<endl;
		cout<<"smallest value is"<<small<<endl;
		return 0;
	}