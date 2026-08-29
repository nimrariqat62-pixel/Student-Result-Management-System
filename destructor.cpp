

#include <iostream>
using namespace std;

class nimra {
	public:
	string name;
	int age;
	
   nimra() {
   	name = "nimra";
   	age = 18 ;
   } 
   ~nimra() {
   	cout << "destruction called" << endl;
   }
};
int main() {
	nimra n1;
	return 0;
}