
#include <iostream>
using namespace std;

class parent {
	public:
	void showparent() {
		cout << "this is parent class" <<endl;
	}
};
int main(){
	parent p;
	p .showparent();
	return 0;
}