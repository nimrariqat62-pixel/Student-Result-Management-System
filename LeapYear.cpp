
#include <iostream>
using namespace std;
int main(){
	int year;
	cout << " enter a year : ";
	cin >> year;
	if(year%4==0)
	{
		cout << " this is a leap year " << endl;
	}
	else if(year%4!=0)
	{
		cout << " this is not leap year "<< endl;
	}
	return 0;
}