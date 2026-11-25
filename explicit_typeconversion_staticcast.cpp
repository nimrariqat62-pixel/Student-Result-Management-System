#include <iostream>
using namespace std;
int main(){
	int celciustemp= 37;
	double result;
	result = static_cast<double>(celciustemp);
	cout << " original celciustemp : " << celciustemp << endl;
	cout << " converted celciustemp : " << celciustemp << endl;
	return 0;
}