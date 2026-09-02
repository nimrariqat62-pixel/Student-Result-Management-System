
#include <iostream>
using namespace std;
class bankaccount {

private :
int balance;
public:

void setbalance(int b) {
	if (b>=20) {
	balance = b;
}
}
  int getbalance(){
	return balance;
}
};

int main(){
	bankaccount  b;
	b.setbalance(30);
	cout << b.getbalance() << endl;
	return 0;
}