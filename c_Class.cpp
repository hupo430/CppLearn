#include "c_Class.h"




void breath::root::setaa(int a){
	aa = a;
	cout<<"root set aa = "<<a<<endl;
	}

int breath::root::getaa(){

cout<<"root get aa = "<<aa<<endl;
return aa;         
}

int main(){
	
	cout<<"end main"<<endl;
	breath::root *rt = new breath::root();
    cout<<rt->getaa()<<endl;
    rt->setaa(3);
    cout<<rt->getaa()<<endl;
	delete rt;
	return 0;
}