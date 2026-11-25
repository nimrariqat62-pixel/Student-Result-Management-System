
#include <iostream>
using namespace std;

int main() {
    int totaldays, years, months, remainingdays, days;

    cout << "Total number of days: ";
    cin >> totaldays;

    years = totaldays / 365;
    remainingdays = totaldays % 365;
    months = remainingdays / 30;
    days = remainingdays % 30;

    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Remaining Days: " << remainingdays << endl;

    cout << "Days: " << days << endl;

    return 0;
}
