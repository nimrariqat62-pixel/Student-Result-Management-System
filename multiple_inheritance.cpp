

#include <iostream>
using namespace std;
class father {
	public:
	void showfather() {
		cout << "this is father class" << endl;
	}
};
  class mother {
  	public:
  	void showmother() {
  		cout << "this is mother class" << endl;
  	}
  };
   
   class child: public father,public mother {
   	public:
   	void showchild() {
   		cout << "this is child class" << endl;
   	}
   };
   
   int main(){
   	father f;
   	mother m;
   	child c;
   	
   	c.showfather();
   	c.showmother();
   	c.showchild();
   	
   	return 0;
   }
  		