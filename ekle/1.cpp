#include <iostream>
using namespace std;

void degistir(int *p1){
	*p1 = 20;
	cout << *p1 << endl;
	
}

int main(){
	int a=10;
	int *p1=&a;
	cout <<  a << endl;
	degistir( p1);
	cout << "a nin yeni degeri : " << a << endl;
	
	return 0;
}
