#pragma once
#include<fstream>
#include<string>
#include "zbor.h"
#include<list>
using namespace std;

template <class T>class RepositoryFile
{
private:
	list<Zbor> elem;
	const char* fis;
public:
	RepositoryFile();
	RepositoryFile(const char* fileNume);
	void loadFromFile(const char* fileNume);
	~RepositoryFile();

};

template <class T> RepositoryFile<T>::RepositoryFile() {

}
template <class T> RepositoryFile<T>::RepositoryFile(const char*fileNume){
	fis = fileName;
	ifstream f(fileName);
	string linie;
	char* nume = new char[10];
	int nrLoc,nrZbor;
	while (!f.eof()) {
		f >> nume >> nrZbor>>nrLoc;
		if (nume != "") {
			Zbor z(nume,nrZbor,nrLoc);
			elem.push_back(z);
		}
	}
	delete[] nume;
	f.close();
}
template <class T> void RepositoryFile<T>::loadFromFile(const char* fileName)
{
	elem.clear();
	fis = fileName;
	ifstream f(fileName);
	char* nume = new char[10];
	int nrZbor,nrLoc;
	while (!f.eof()) {
		f >> nume >> nrZbor>>nrLoc;
		if (strcmp(nume, "") != 0) {
			Zbor z(nume, nrZbor, nrLoc );
			elem.push_back(z);
		}
	}
	delete[] nume;
	f.close();
}
template <class T> RepositoryFile<T>::~RepositoryFile() {

}