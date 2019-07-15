#include "c_Class.h"

breath::CFatherBase::CFatherBase(){
	cout<<"this is CFatherBase builder"<<endl;
	vIntFb = 888;
}

breath::CFatherBase::~CFatherBase(){
	cout<<"this is CFatherBase destroyer"<<endl;
}


void breath::CFatherBase::fSet(int &a){
	vIntFb = a;
	cout<<"CFatherBase set vIntFb = "<<vIntFb<<endl;
}

int breath::CFatherBase::fGet(){

	cout<<"CFatherBase get vIntFb = "<<vIntFb<<endl;
	return vIntFb;         
}



Cchildbase::Cchildbase(){
	cb = "this is Cchildbase builder";
	vcb = 0;
	cout<<cb<<endl;
}

Cchildbase::~Cchildbase(){
	cout<<"this is Cchildbase distoreder"<<endl;
}

int Cchildbase::getaa(){
	cout<<"Cchildbase get aa ="<<breath::root::getaa()<<endl;
	return breath::root::getaa();
}







int main(){
	
	cout<<"end main"<<endl;
	breath::root *rt = new breath::root();
    cout<<rt->getaa()<<endl;
    rt->setaa(3);
    cout<<rt->getaa()<<endl;
	
	
	cout<<"====================="<<endl;
	
	Cchildbase ccb;
    ccb.setaa(55);
    cout<<"ccb.getaa() = "<<ccb.getaa()<<endl;
	
	Ccinherit cht;
	cout<<"cht.getaa() = "<<cht.getaa()<<endl;
	delete rt;
	return 0;
}