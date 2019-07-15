#include "c_Class.h"



Ccinherit::Ccinherit(){
	cb = "this is Ccinherit builder";
	vcb = 88;
	cout<<cb<<"vcb ="<<vcb<<endl;
}

Ccinherit::~Ccinherit(){
	cout<<"this is Ccinherit distoreder"<<endl;
}

int Ccinherit::getaa(){
	cout<<"Ccinherit get aa ="<<vcb<<endl;
	return vcb;
}