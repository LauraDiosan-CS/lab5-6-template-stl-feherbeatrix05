#include "service.h"
#include<iostream>
#include<string>
using namespace std;

Service::Service(){
}

Service::~Service() {
}
void Service::addZbor( char* nume, int nrZbor, int nrLoc) {
	Zbor z(nume, nrZbor, nrLoc);
	this->r.addElem(z);
}
void Service:: modifyZbor(char* nume, int nrZbor,int nrLoc, int newNrLoc) {
	//Zbor zbor;
	/*list<Zbor> zboruri = this->r.getAll();
	list <Zbor> ::iterator it;
	for (it = zboruri.begin(); it != zboruri.end(); ++it) {
		if (strcmp((*it).getNume(), nume) == 0 && it->getNrZbor() == nrZbor && it->getNrLoc()) {
			it->setNrLoc(newNrLoc);
			//zbor = *it;
			cout << " ** Nume: " << (*it).getNume()<<"  numar loc : "<<(*it).getNrLoc()<<endl;
	    }
	}*/
	//r.modifyElem(zbor, newNrLoc);
	Zbor oldZbor(nume,nrZbor,nrLoc);
	Zbor newZbor(nume, nrZbor, newNrLoc);
	r.update(oldZbor, newZbor);
}

void Service::deleteZbor(int nrZbor) {
	Zbor zbor;
	list<Zbor> zboruri = r.getAll();
	list <Zbor> ::iterator it;
	for (it = zboruri.begin(); it != zboruri.end(); ++it) {
		
		if ((*it).getNrZbor() == nrZbor) {
			zbor = *it;
		}
	}
	r.deleteElem(zbor);
	
}

list<Zbor> Service::getZboruri() {
	return r.getAll();
}
