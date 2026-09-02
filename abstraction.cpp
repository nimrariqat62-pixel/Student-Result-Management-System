
#include <iostream>
using namespace std;
class animal {
	public:
	virtual void sound() =0;
	
};
class cat: public animal {
	public:
	void sound() {
		cout << "cat says meow" << endl;
	}
};

int main(){
	cat c;
	c.sound();
	return 0;
}