#pragma once
#include "Service.h"
class UI {
private:
	void addZbor(Service& s);
	void citireZboruri(Service& s);
	void modificareZbor(Service& s);
	void stergereZbor(Service& s);
public:
	UI();
	void showUI(Service& s);
	~UI();
};