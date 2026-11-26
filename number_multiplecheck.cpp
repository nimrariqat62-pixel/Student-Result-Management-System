#include <iostream>
using namespace std;
int main(){
	int num;
	cout << " enter a number : ";
	cin >> num;
	
	if(num%5==0 || num%9==0)
	{
		cout << " num is multiple 5 or 9 : ";
	}
	else 
	{ 
	cout << " num is not multiple 5 or 9 : ";
	}
	return 0;
}
	
