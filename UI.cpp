#include "UI.h"
#include <iostream>
using namespace std;

UI::UI() {

}
void UI::addZbor(Service& s) {
	int n;
	cout << " Dati nr de zboruri";
	cin >> n;
	for (int i = 0;i < n;i++) {
		char nume[100];
		int nrZbor, nrLoc;
		cout << "Dati numele clientului ";
		cin >> nume;
		cout << "Dati numarul zborului";
		cin >> nrZbor;
		cout << "Dati numarul locului ";
		cin >> nrLoc;
		s.addZbor(nume, nrZbor, nrLoc);
	}
}

void UI::citireZboruri(Service& s) {
	list<Zbor> zboruri = s.getZboruri();
	list <Zbor> ::iterator it;
	for (it = zboruri.begin(); it != zboruri.end(); ++it) {
			cout << " Nume " << (*it).getNume() << endl;
			cout << " Numar zbor " << (*it).getNrZbor() << endl;
			cout << " Numar loc" << (*it).getNrLoc() << endl;
			cout << "=================" << endl;
		}
}
	
	void UI::modificareZbor(Service& s) {
		char nume[100];
		int nrZbor,nrLoc, newNrLoc;
		cout << "Nume cautat " << endl;
		cin >> nume;
		cout << "Zbor cautat" << endl;
		cin >> nrZbor;
		cout << "Numar loc   " << endl;
		cin >> nrLoc;
		cout << "Numar loc  nou  " << endl;
		cin >> newNrLoc;
		s.modifyZbor(nume, nrZbor,nrLoc, newNrLoc);
	}


	void UI:: stergereZbor(Service& s) {
	int nrZbor;
	cout << "Numarul zborului pe care doriti sa o stergeti ";
	cin >> nrZbor;
    s.deleteZbor(nrZbor);
}

	void UI:: showUI(Service& s)
{
	int op = 0;
	while (op != 5) {
		cout << "1. Citire zbor " << endl;
		cout << "2. Afisarea tuturor zborurilor " << endl;
		cout << "3. Modificare numar loc " << endl;
		cout << "4. Stergere zbor " << endl;
		cout << "5. Iesire " << endl;
		cout << "Alegeti optiunea ";
		cin >> op;
		switch (op) {
		case 1: {addZbor(s); break; }
		case 2: {citireZboruri(s); break; }
		case 3: {modificareZbor(s); break; }
		case 4: {stergereZbor(s); break; }
		}
	}
}
	UI::~UI(){
	}