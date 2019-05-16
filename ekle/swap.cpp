#include <iostream>
void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
using namespace std;
int main(){
	int a=100,b=200;
	
	cout << "a :" << a << " b :" <<b << endl;
	swap(a,b);
	cout <<"Yeni a: " <<a << " Yeni b : "<< b << endl;
	
	
	
	return 0;
}
