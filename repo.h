#ifndef REPO_H
#define REPO_H
#include "zbor.h"

#include <iostream>
using namespace std;

/*void showlist(list <int> T){
	list <int> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}
template <class T, list <int> T>
class Repo {
private:
     list T;
	int size;
public:
	Repo();
	Repo(const Repo<T, zbr>& r);
	~Repo();
	void addElem(T el);
	int getAll();*/

class Repo {
private:
	Zbor list[20];
	int n;
public:
	Repo();
	~Repo();
	void addZbor(Zbor& z);
	Zbor* getAll();
};








#endif