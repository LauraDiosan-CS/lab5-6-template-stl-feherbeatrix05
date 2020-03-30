#pragma once
#include<iostream>
#include<ostream>
using namespace std;

class Zbor {
private:
	char* nume;
	int nrZbor;
	int nrLoc;
public:
	Zbor();
	Zbor(char* nume, int nrZbor, int nrLoc);
	Zbor(const Zbor& z);
	~Zbor();
	void setNume(char* nume);
	void setNrZbor(int nrZbor);
	void setNrLoc(int nrLoc);
	char* getNume();
	int getNrZbor();
	int getNrLoc();
};
