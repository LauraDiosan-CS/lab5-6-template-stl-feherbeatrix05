#include<iostream>
#include<ostream>
#include<string>
#include "teste.h"
#include "service.h"
#include<assert.h>
using namespace std;

void testAddZbor() {
	cout << "Testing addZbor" << endl;
	char nume1[100] = "Maria";
	char nume2[100] = "Ana";
	char nume3[100] = "Mihai";
	Service s;
	s.addZbor(nume1, 9, 21);
	s.addZbor(nume2, 10, 14);
	s.addZbor(nume3, 15, 45);

	assert(s.getZboruri().size()==3);
}

void testGetZboruri() {
	cout << "Testing getZboruri" << endl;
	char nume1[100] = "Maria";
	char nume2[100] = "Ana";
	char nume3[100] = "Mihai";
	Service s;
	s.addZbor(nume1, 9, 21);
	s.addZbor(nume2, 10, 14);
	s.addZbor(nume3, 15, 45);
	list<Zbor> zboruri = s.getZboruri();
	list <Zbor> ::iterator it=zboruri.begin();
	assert(strcmp((*it).getNume(), nume1) == 0);
	std::advance(it, 1);
	assert(strcmp((*it).getNume(), nume2) == 0);
	std::advance(it, 1);
	assert(strcmp((*it).getNume(), nume3) == 0);

}
void testDeleteZbor() {
	cout << "Testing deleteZbor" << endl;
	char nume1[100] = "Maria";
	char nume2[100] = "Ana";
	char nume3[100] = "Mihai";
	Service s;
	s.addZbor(nume1, 9, 21);
	s.addZbor(nume2, 10, 14);
	s.addZbor(nume3, 15, 45);
	assert(s.getZboruri().size() == 3);
	s.deleteZbor(9);
	assert(s.getZboruri().size() == 2);

}

void testModifyZbor() {
	cout << "Testing modifyZbor" << endl;
	char nume1[100] = "Maria";
	char nume2[100] = "Ana";
	char nume3[100] = "Mihai";
	Service s;
	s.addZbor(nume1, 9, 21);
	s.addZbor(nume2, 10, 14);
	s.addZbor(nume3, 15, 45);
	s.modifyZbor(nume1, 9,21, 40);
	list <Zbor> ::iterator it = s.getZboruri().begin();
	advance(it, 0);
   // assert((*it).getNrLoc() == 40);
}
