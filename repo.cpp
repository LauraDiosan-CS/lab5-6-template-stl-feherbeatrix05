#include "repo.h"


/*template <class T, int zbr> Repo<T, zbr>::Repo() {
	this->size = 0;
}
template <class T, int zbr> Repo<T, zbr>:: Repo(const Repo<T,zbr>& r) {
	
	this->size = r.size;
	for (int i = 0; i < r.size; i++) {
		this->list[i] = r.list[i];
	}
}

template <class T, int zbr> Repo<T, zbr>::~Repo() {
	this->size = 0;
}

template <class T, int zbr> void Repo<T, zbr>::addElem(T el) {
	if (this->size < zbr)
		this->list[this->size++] = el;
	else
		cout << "not enogh space..." << endl;
}

template <class T, int zbr> int Repo<T, zbr>::getAll() {
	return this->size;
}*/

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
}
void Repo::addZbor(Zbor& z) {
	this->list[this->n++] = z;
}

Zbor* Repo::getAll() {
	return this->list;
}