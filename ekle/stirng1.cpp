#include <iostream>
using namespace std;
int main(){
	char isimler1[5][8]={"Semra","Mustafa","Ceyhun","Asli","Leyla"};
	char isimler2[][8]={"Semra","Mustafa","Ceyhun","Asli","Leyla"};
	
	for(int i=0;i<5;i++){
		cout << i+1 << " "<< isimler1[i] << endl;
	}
	cout << endl << endl;
	for(int i=0;i<5;i++){
		cout << i+1 << " " << isimler2[i] << endl;
	}
	
	
	return 0;
}
