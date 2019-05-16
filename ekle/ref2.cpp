#include <iostream>
using namespace std;
int referans(int &a){
	a=15;
	return a;
}
int main(){
	int a=10;
	cout << a << endl;
	referans(a);
	cout << "a nin yeni degeri " << a << endl;
	
	return 0;
}
