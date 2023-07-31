#include<iostream>
using namespace std;
//base class
class electronicdevice
{
	public:
		//constructor of the base class
		electronicdevice()
		{
			cout<<"i am an electronic device\n\n";
		}
	};
	//derived class
	class computer:public electronicdevice
	{
		public:
			//constructor of the derived class
			computer()
			{
				cout<<"i am a computer.\n\n";
			}
	};
	int main()
	{
		//create object of the derived class
		computer obj;//constructor of base class and
		//derived class will be called
		return 0;
	}
		
		
