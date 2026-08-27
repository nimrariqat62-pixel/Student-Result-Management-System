

#include <iostream>
using namespace std;

class bts {
	public :
	string btscolor;
	int btsspeed;
	
	bts() {
		btscolor = "purple";
		btsspeed =  190  ;
	}
};


int main(){
		bts b1;
		cout <<  b1.btscolor << endl;
		cout << b1.btsspeed << endl;
		
		return 0;
}
		
