#include<iostream>
using namespace std;
int main()
{
	int response;
	double temper;
	cout<<"\ntype 1 to convert fahrenheit to celsius,"<<"\n 2 to convert celsius to fahrenheit:";
	cin>>response;
	if(response==1)
	{
	cout<<"enter temperature in fahrenheit:";
	cin>>temper;
	cout<<"in celsius that's"<<5.0/9.0*(temper-32.0);
	}
	else
	{
	cout<<"enter temperature in celsius:";
	cin>>temper;
	cout<<"in fahrenheit that's"<<9.0/5.0*temper+32.0;
	}
	cout<<endl;
	return 0;
	}