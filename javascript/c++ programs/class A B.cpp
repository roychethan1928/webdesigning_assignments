#include<iostream>
using namespace std;
//forward declaration 
class classB;
class classA{
	public:
		//constructor to intialize numA to 12
		classA() : numA(12) {}
		private:
			int numA;
			friend int add(classA,classB);
	};
	class classB {
	public:
	//constructor to initialize numB to1
	private:
	int numB;
	//friend function declaration
	friend int add(classA,classB);
	};
	// acess members of both classes
	int add(classA objectA,classB objectB) {
		return objectA.numA+objectB.numB;
	}
	int main() {
	classA objectA;
	classB objectB;
	cout<<"sum:"<<add(objectA,objectB);
	return 0;
}