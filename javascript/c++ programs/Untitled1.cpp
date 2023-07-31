#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter two numbers to be operated with arithmetic operators:";
	cin>>num1>>num2;
	cout<<endl;
	cout<<"num1+num2="<<num1+num2<<endl;
	cout<<"num1*num2="<<num1*num2<<endl;
	cout<<"num1-num2="<<num1-num2<<endl;
	if(num2!=0)
	cout<<"num1/num2="<<num1/num2<<endl;
	else
	cout<<"num2 is not non zero division is not defined,"<<endl;
	getch()
}
