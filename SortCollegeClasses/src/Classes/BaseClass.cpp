#include "BaseClass.h"
#include "../Headers.h"
BaseClass::BaseClass(const char* className, bool days[5], double start, double end) {
	this->className = className;
	this->days = (bool*)(malloc(sizeof(bool) * 5));
	for (int i = 0; i < 5; i++) {
		this->days[i] = days[i];
	}
	this->start = start;
	this->end = end;
	this->id = Id;
	Id++;
}

BaseClass::~BaseClass() {
	delete this->className;
	delete this->days;
}