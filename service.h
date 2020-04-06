#pragma once
#include "repo.h"

class Service {
private:
	Repo<Zbor> r;
public:
	Service();
	~Service();
	void addZbor( char* nume, int nrZbor, int nrLoc);
	void modifyZbor(char* nume, int nrZbor,int nrLoc, int newNrLoc);
	void deleteZbor(int nrZbor);
	list<Zbor> getZboruri();
};
