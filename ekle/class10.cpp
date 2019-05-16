#include <iostream>
using namespace std;

class Mesafe{
	private:
		int feet,inc;
	public:
		Mesafe(){
			feet=0;
			inc=0;
		}
		Mesafe(int f,int i){
			feet=f;
			inc=i;
		}
		void mesafeGoster(){
			cout << "Feet : " << feet << endl << "Inc : " << inc << endl << endl;
		}
		Mesafe operator-(){
			feet=-feet;
			inc=-inc;
			return Mesafe(feet,inc);
		}
};




int main(){
	Mesafe M1(10,-11),M2(-15,16);
	-M1;
	M1.mesafeGoster();
	-M2;
	M2.mesafeGoster();
	
	
	
	
	
	return 0;
}
