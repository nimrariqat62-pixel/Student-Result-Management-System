

#include <iostream>
using namespace std;
class student {
	  private:
	  int marks;
	  public:
	  void setmarks(int m) {
	  	 marks = m;
	  
	  }
	  void showmarks() {
	  	cout << marks << endl;
	  }
};
	  
int main(){
	student  m;
	
	m.setmarks(7);
	m.showmarks();
	return 0;
}
	