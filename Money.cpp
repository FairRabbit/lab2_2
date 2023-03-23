#include "Money.h"

//friendly function
long GetR(attributes& attr) {
	return attr.rub;
}
unsigned char GetP(attributes& attr) {
	return attr.pen;
}
void SAttr(attributes& attr, long rub, unsigned char pen) {
	attr.rub = rub + pen / 100;
	attr.pen = pen % 100;
}

//attributes
attributes::attributes() {
	rub = 0;
	pen = 0;
}

//money
//constructor
money::money(long rub, unsigned char pen) {
	SAttr(attr, rub, pen);
}
money::money() {
}
//getter and setter
void money::GetMoney() {
	(int)GetP(attr) > 9 ? cout << GetR(attr) << '.' << (int)GetP(attr) << endl : cout << GetR(attr) << ".0" << (int)GetP(attr) << endl;
}
void money::SetMoney() {
	long rub; int pen;
	cout << "введите сумму: ";
	cin >> rub >> pen;
	SAttr(attr, (long)rub, (unsigned char)pen);
}
//operation
money money::operator+(money& m) {
	long rub_s; unsigned char pen_s;
	rub_s = GetR(this->attr) + GetR(m.attr);
	pen_s = GetP(this->attr) + GetP(m.attr);
	money summ(rub_s, pen_s);
	return summ;
}
bool money::operator>(money& m) {
	if (GetR(this->attr) > GetR(m.attr)) {
		return true;
	}
	else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) > GetP(m.attr)) {
		return true;
	}
	else return false;
}
bool money::operator>=(money& m) {
	if (GetR(this->attr) > GetR(m.attr)) {
		return true;
	}
	else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) >= GetP(m.attr)) {
		return true;
	}
	else return false;
}
bool money::operator<(money& m) {
	if (GetR(this->attr) < GetR(m.attr)) {
		return true;
	}
	else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) < GetP(m.attr)) {
		return true;
	}
	else return false;
}
bool money::operator<=(money& m) {
	if (GetR(this->attr) < GetR(m.attr)) {
		return true;
	}
	else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) <= GetP(m.attr)) {
		return true;
	}
	else return false;
}
bool money::operator==(money& m) {
	return GetR(this->attr) == GetR(m.attr) && GetP(this->attr) == GetP(m.attr);
}
bool money::operator!=(money& m) {
	return !(GetR(this->attr) == GetR(m.attr) && GetP(this->attr) == GetP(m.attr));
}