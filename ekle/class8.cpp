#include <iostream>
using namespace std;
//Overloading
class Veri{
	public:
		void yaz(int i){
			cout << "Int yaz : " << i << endl;
		}
		void yaz(double d){
			cout << "Double yaz : " << d << endl;
		}
		void yaz(char* c){
			cout << "Char yaz : " << c << endl;
		}
};

int main(){
	Veri v;
	v.yaz(15);
	v.yaz(50.15);
	v.yaz("Merhaba");
	
	
	return 0;
}
