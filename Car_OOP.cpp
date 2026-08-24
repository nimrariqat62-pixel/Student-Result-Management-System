

#include <iostream>
using namespace std;
int main(){
	
	class car {
		public:
		string color;
		int speed;
		void drive() {
			cout << "car is driving";
		}
	};
	car c1;
	c1.color = "Red";
	c1.speed = 100;
	 cout << c1.color << endl;
	 cout << c1.speed << endl;
	 
	 c1.drive();
	 return 0;
}
