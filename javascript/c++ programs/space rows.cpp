#include<iostream>
using namespace std;
int main() {
	int space, rows;
	cout<<"enter number of rows:";
	cin>>rows;
	for(int i =1,k = 0; i<=rows; ++i,k = 0){
		for(space = 1; space <=rows-1; ++space){
			cout<<" ";
		}
		while(k != 2*i-1){
			cout<<"*";
			++k;
		}
		cout<<endl;
	}
	return 0;
}