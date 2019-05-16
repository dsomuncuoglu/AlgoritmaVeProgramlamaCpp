#include <iostream>
using namespace std;
double vals[]={10.1,12.6,33.1,24.1,50.0};
double &setValues(int i){
	return vals[i];
}
int main(){
	cout << "Deger degismeden once" << endl;
	for(int i=0;i<5;i++){
		cout << "vals["<<i<<"] =";
		cout << vals[i] << endl;
	}
	setValues(1)=20.5;
	setValues(3)=70.8;
	cout << endl;
	
	cout << "Deger degistikten sonra" << endl;
	for(int i=0;i<5;i++){
		cout <<"vals["<<i<<"] =";
		cout << vals[i] << endl;
	}
	
	
	
	return 0;
}
