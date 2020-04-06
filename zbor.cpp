#include "zbor.h"
#include<string.h>
#include<ostream>
#include<iostream>
using namespace std;

Zbor::Zbor() {
	this->nume = NULL;
	this->nrZbor = 0;
	this->nrLoc = 0;

}

Zbor::Zbor(char* nume, int nrZbor, int nrLoc) {
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->nrZbor= nrZbor;
	this->nrLoc = nrLoc;

}

Zbor::Zbor(const Zbor& z) {
	this->nume = new char[strlen(z.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(z.nume), z.nume);
	this->nrZbor = z.nrZbor;
	this->nrLoc= z.nrLoc;

}

Zbor::~Zbor() {
	if (this->nume) {
		//delete[] this->nume;
		this->nume = NULL;
	}
}

char* Zbor::getNume() {
	return this->nume;
}

int Zbor::getNrZbor() {
	return this->nrZbor;
}

int Zbor::getNrLoc() {
	return this->nrLoc;
}


void Zbor::setNume(char* nume)
{
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];

	strcpy_s(this->nume, strlen(nume) + 1, nume);
}

void Zbor::setNrZbor(int nrZbor) {
	this->nrZbor = nrZbor;
}

void Zbor::setNrLoc(int nrLoc) {
	this->nrLoc = nrLoc;
}