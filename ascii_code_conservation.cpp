
#include <iostream>
#include <string>
using namespace std;
int main(){
	
	char ch = 'A';
	string ascii;
	
	int result; 
	result = static_cast<int>(ch);
	cout << " original character : " << ch << endl;
	cout << " ascii code : " << result << endl;
	return 0;
}