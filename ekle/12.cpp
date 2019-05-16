#include <iostream>
using namespace std;
int ekok(int a,int b){
	int ekok;
	for(int i=1;i<a*b;i++){
		if(i%a==0 && i%b==0){
			return i;
			
		}
	}
}
int ebob(int a,int b){
	int enb;
	if(a>b){
		enb=a;
	}
	else{
		enb=b;
	}
	for(enb;enb>0;enb--){
		if(a%enb==0 && b%enb==0){
			return enb;
		}
	}
}
int main(){
	int a1,a2;
	cout << "Birinci sayiyi girin=";
	cin >> a1;
	cout << "ikinci sayiyi girin=";
	cin >> a2;
	cout << "Ekok=" << ekok(a1,a2) << endl;
	cout << "Ebob=" << ebob(a1,a2) << endl;
	cout << "(a1*a2)/ekok(a1,a2) = Ebob "<< (a1*a2)/ekok(a1,a2);
}
