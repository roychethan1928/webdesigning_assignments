#include<iostream>
using namespace std;
class test{
	public:
		//user-defined constructor
		test(){cout<<"\nconstructor executed";}
		//user-defined destructor
		~test(){cout<<"\ndestructor executed";}
		};
		main()
		{
		test t;
		return 0;
		}
