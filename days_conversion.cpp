
#include <iostream>
using namespace std;
int main(){

	int totaldays ,years,months,days,remainingdays;
	cout << " total number of days : ";
	cin >> totaldays;
	years= totaldays/365;
	remainingdays= totaldays%365;
	months = remainingdays/30;
	days = remainingdays%30;
	
	cout << " years : " << years << endl;
	cout << " months : " << months << endl;
	cout << " remainingdays : " << remainingdays << endl;
	cout << "  days : " << days << endl;
	return 0;
}
	
	
	
	