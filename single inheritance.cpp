

#include <iostream>
using namespace std;
class parent {
	public:
	void showparent() {
		cout <<"this is parent class" << endl;
	}
};
class child: public parent{
public:
void showchild(){
	cout << "this is child class" << endl;
}
};
int main(){
	parent p;
	child c;
	p.showparent();
	c.showchild();
	return 0;
}