#include <iostream>
using namespace std;
int main(){
	string kelime[]={"Berkay","Deniz","Hasan"};
	cout << kelime  << endl;
	string *p1=kelime;
	cout << *(p1+1) << endl;
    cout << p1[1];	
	
	return 0;
}
