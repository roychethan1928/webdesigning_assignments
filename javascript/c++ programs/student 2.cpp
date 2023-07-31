#include<iostream>
using namespace std;
class student {
	public:
		double marks1,marks2;
		};
student createstudent(){
	student student;
	student.marks1=96.5;
	student.marks2=75.0;
	cout<<"marks 1="<<student.marks1<<endl;
	cout<<"marks 2="<<student.marks2<<endl;
	return student;
}
int main(){
student student1;
student1=createstudent();
return 0;	
}