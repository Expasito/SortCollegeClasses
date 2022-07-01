#pragma once
class BaseClass
{
	int Id = 0;
public:
	unsigned int id;
	const char* className;
	bool* days;
	double start;
	double end;
	BaseClass(const char*, bool[5], double, double);
	~BaseClass();

private:


};

