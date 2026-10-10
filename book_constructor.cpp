

#include <iostream>
#include <string>
using namespace std;
class book {
	public :
	string name;
	int pages;
	float price;

    book() {
    	name = " unknown ";
    	pages = 0;
    	price = 0.0;
    }
    };
    
    int main(){
    book b1;
    
    cout << " enter a name : ";
    cin >> b1.name;
    cout << " enter a pages : ";
    cin >> b1. pages;
    cout << " enter a price : ";
    cin >> b1.price;
    
    cout << "name :  "  << b1. name  << endl;
    cout << "pages :  " << b1. pages  << endl;
    cout << "price :  " << b1.price  << endl;
    
    return 0;
    }
    
    	       
    	      