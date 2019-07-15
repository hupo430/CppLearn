#ifndef _C_CLASS_H
#define _C_CLASS_H

#include <iostream>
#include <string>

using namespace std;



namespace breath{

	class CFatherBase{
	private:
		int vIntFb;
		
	public:
		string vStrFb;
		void fSet(int &);
		int fGet();
		int fMath(int &);
		CFatherBase();
		~CFatherBase();
		
	};	
}



class CChild:public breath::CFatherBase{

public:
	CChildBase();
	~CChildBase();
	#int fMath(int &);#test use father function
	int fGet(); #test overwrite
	void fSetCd(int &); 
private:
	string vStrCd;
	int vCd;
	
};

#endif