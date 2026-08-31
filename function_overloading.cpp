
#include <iostream>
using namespace std;
class calculator {
	public:
	
	void add (int a,int b) {
		cout << "sum of two numbers" << a+b << endl;
	}

void add (int a,int b,int c) {
		cout << "sum of three numbers" << a+b+c << endl;
}

void add (double a, double b) {
		cout << " sum of decimal numbers" << a+b << endl;
}

};

int main(){
  calculator c;
  c.add(10,20);
  c.add (10,20,30);
  c.add (10.5 ,7.5);
  return 0;
}
  
		
		
		