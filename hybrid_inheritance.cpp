

#include  <iostream>
using namespace std;
class father {
	public:
	void showfather(){
	
		cout << "this is father class" << endl;
	}
};
  class son: public father {
  	public:
  	void showson(){
  		cout << "this is son class" << endl;
  	}
  };
   
   class daughter: public father {
   	public:
   	void showdaughter(){
   		cout << "this is daughter class" << endl;
   	}
   };
   
   class child: public son,public daughter{
   	 public:
   	 void showchild () {
   	 	cout << "this is child class" << endl;
   	 }
   };
   
   int main(){
   	father f;
   	son s;
   	daughter d;
   	child c;
   	
   	f.showfather();
   	c.showson();
   	c.showdaughter();
   	c.showchild();
   	
   	return 0;
   }