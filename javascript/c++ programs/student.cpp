#include<iostream>
using namespace std;
class student {
	public:
		double marks;
		student(double m){
			marks=m;
		}
	};
	void calculateaverage(student s1, student s2){
		double average =(s1.marks + s2.marks)/2;
		cout<<"average marks="<<average<<endl;
		}
		int main(){
		student student1(88.0),student2(56.0);
		calculateaverage(student1,student2);
		return 0;
	}
		
		