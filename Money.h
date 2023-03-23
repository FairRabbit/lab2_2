#pragma once
#include<iostream>
#include<string>
using namespace std;

//attributes(money values)
class attributes {
public:

	//friendly function
	friend long GetR(attributes& attr);
	friend unsigned char GetP(attributes& attr);
	friend void SAttr(attributes& attr, long rub, unsigned char pen);

	//constructor
	attributes();
private:

	//fields(money)
	long rub;
	unsigned char pen;
};

//money
class money {
public:
	//constructor
	money(long rub, unsigned char pen);
	money();
	//getter and setter
	void GetMoney();
	void SetMoney();
	//operation
	//addition
	money operator+(money& m);
	bool operator>(money& m);
	bool operator>=(money& m);
	bool operator<(money& m);
	bool operator<=(money& m);
	bool operator==(money& m);
	bool operator!=(money& m);
private:
	attributes attr;
};

//friendly function (realization)
long GetR(attributes& attr);
unsigned char GetP(attributes& attr);
void SAttr(attributes& attr, long rub, unsigned char pen);
