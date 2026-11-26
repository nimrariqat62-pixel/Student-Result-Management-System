#include <iostream>
using namespace std;
int main(){
	
	char ch;
	
	cout << " enter a character : ";
	cin >> ch;
	
	if(ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u')
	{
		cout << " this is vowel : ";
	}
	
	else 
	{
		cout << " not a vowel : ";
	}

	return 0;
}