

#include <iostream>
using namespace std;
class number {
	int value;
	public:
	number (int v) {
		value = v;
	}
	number operator+(number obj) {
		return number (value +obj.value);
		
	}
	void show(){
		cout << "result = " << value << endl;
	}
};

int main(){
	number n1(10);
	number n2 (20);
number	n3 = n1+n2;
	n3.show();
	return 0;
}