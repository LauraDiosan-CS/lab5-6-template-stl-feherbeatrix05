#ifndef REPO_H
#define REPO_H
#include "zbor.h"

#include <iostream>
#include <list> 
#include <iterator>
using namespace std;

/*void showlist(list <int> g){
	list <int> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}*/

template <class T> class Repo {
private:
     list<T> data;
public:
	Repo();
	~Repo();
	void addElem(T el);
	void deleteElem(T zbor);
	void modifyElem(T zbor, T newZbor);
	int update( T& vechi, T nou);
	list<T> getAll();

};


template <class T> Repo<T>::Repo() {

}

template <class T> Repo<T>::~Repo() {

}

template <class T> void Repo<T>::addElem(T el) {
	this->data.push_back(el);
}

template <class T> list<T> Repo<T>::getAll() {
	return this->data;
}

template <class T> void Repo<T>::deleteElem(T zbor) {
	this->data.remove(zbor);
}
template <class T> void Repo<T>::modifyElem(T zbor, T newZbor) {
	//zbor.setNrLoc(newdata);
	list <Zbor> ::iterator it=std::find(this->data.begin(), this->data.end(), zbor);
	if (it != this->data.end()) {
		(*it) = newZbor;
	}
}
template <class T>int Repo<T>::update( T& vechi, T nou)
{
	for (T el : data) {
	if (el == vechi) {
			el = nou;
			return 0;
		}
}
	return -1;
}
#endif




