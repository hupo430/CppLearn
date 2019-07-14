#include <iostream>
#include <string>

using namespace std;

namespace breath{

	class root{
	private:
		int aa;

	public:
		string bb;
		void setaa(int a){};
		int getaa(){};
		
	};	
	
	
}

void breath::root:setaa(int a){
	aa = a;
	count<<"root set aa = "<<a<<endl;
}

int breath::root:getaa(){
	
	cout<<"root get aa = "<<aa<<endl;
	return aa;         
}


int main(){
	
	cout<<"end main"<<endl;
	return 0;
}