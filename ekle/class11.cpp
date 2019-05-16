#include <iostream>
using namespace std;

class Mesafe{
	private:
		int feet,inc;
	public:
		Mesafe(int f,int i){
			feet=f;
			inc=i;
		}
		void mesafeGoster(){
			cout << "Feet : "<< feet <<endl;
			cout << "Inc : " << inc <<endl;
		}
		Mesafe operator-(){
			feet=-feet;
			inc=-inc;
			return Mesafe(feet,inc);
		}
		bool operator<(const Mesafe& b){
			if(feet<b.feet){
				return true;
			}
			else{
				return false;
			}
		}
		bool operator==(const Mesafe& b){
			if(feet==b.feet){
				return true;
			}
			else{
				return false;
			}
		}
};




int main(){
	Mesafe m1(-21,-11),m2(-11,15);
	-m1;
	m1.mesafeGoster();
	-m2;
	m2.mesafeGoster();
	
	if(m1<m2){
		cout << "m1 m2 den kucuktur.";
	}
	else if(m1==m2){
		cout << "m1 m2 ye esittir.";
	}
	else{
		cout << "m1 m2 den buyuktur";
	}
	
	
	
	return 0;
}
