#include <iostream>
using namespace std;
int main(){
	int a=10;
//	int &ref=a;
	int &ref;
	
	&ref = a;
	

	ref=15;
	cout << "a nin yeni degeri-" << a;
	
	
	return 0;
}
