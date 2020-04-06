#include<iostream>
#include<ostream>
#include<string>
#include "zbor.h"
#include "repo.h"
#include "service.h"
#include "teste.h"
#include "UI.h"
using namespace std;

int main(){
	testAddZbor();
	testGetZboruri();
	testDeleteZbor();
	testModifyZbor();
	cout << "all  tests are good "<<endl;
	Service s;
	UI u;
	u.showUI(s);
	
		
			
		
}

	