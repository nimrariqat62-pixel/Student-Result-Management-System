
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << setfill('_');

    cout << left << setw(12) << "Ali" << endl;
    cout << right << setw(12) << "Sharjeel" << endl;
    cout << left << setw(12) << "Usman" << endl;

    return 0;
}
