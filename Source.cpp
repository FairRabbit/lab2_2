#include<iostream>
#include<string>
#include"Money.h"
using namespace std;
//class atribute {
//public:
//
//	long rub;
//	unsigned char pen;
//	void SetM() {
//		rub = rub + pen / 100;
//		pen = pen % 100;
//	}
//};

//class money {
//public:
//	money() {
//		attr.rub = 0;
//		attr.pen = 0;
//	}
//	money(long rub, unsigned char pen) {
//		this->attr.rub = rub + pen/100;
//		this->attr.pen = pen%100;
//	}
//	money(const money& dengi) {
//		this->attr.rub = dengi.attr.rub;
//		this->attr.pen = dengi.attr.pen;
//	}
//	void GetMoney() {
//		cout << to_string(attr.rub) +'.' + to_string(attr.pen) << endl;
//	}
//	money operator+(const money &dengi) {
//		money summ;
//		summ.attr.rub = this->attr.rub + dengi.attr.rub;
//		summ.attr.pen = this->attr.pen + dengi.attr.pen;
//		summ.attr.SetM();
//		return summ;
//	}
//	bool operator>(const money &dengi) {
//		if (this->attr.rub > dengi.attr.rub) {
//			return true;
//		}
//		else if (this->attr.rub == dengi.attr.rub && this->attr.pen >= dengi.attr.pen) {
//			return true;
//		}
//		else return false;
//	}
//	bool operator<(const money &dengi) {
//		if (this->attr.rub > dengi.attr.rub) {
//			return false;
//		}
//		else if (this->attr.rub == dengi.attr.rub && this->attr.pen >= dengi.attr.pen) {
//			return false;
//		}
//		else return true;
//	}
//	bool operator>=(const money& dengi) {
//		if (this->attr.rub > dengi.attr.rub) {
//			return true;
//		}
//		else if (this->attr.rub == dengi.attr.rub && this->attr.pen >= dengi.attr.pen) {
//			return true;
//		}
//		else return false;
//	}
//	bool operator<=(const money& dengi) {
//		if (this->attr.rub > dengi.attr.rub) {
//			return false;
//		}
//		else if (this->attr.rub == dengi.attr.rub && this->attr.pen >= dengi.attr.pen) {
//			return false;
//		}
//		else return true;
//	}
//	bool operator==(const money& dengi) {
//		return this->attr.rub == dengi.attr.rub && this->attr.pen == dengi.attr.pen;
//	}
//	bool operator!=(const money& dengi) {
//		return !(this->attr.rub == dengi.attr.rub && this->attr.pen == dengi.attr.pen);
//	}
//	atribute attr;
//private:
//	
//};



//class attributes {
//public:
//	//friendly function
//	friend long GetR(attributes& attr);
//	friend unsigned char GetP(attributes& attr);
//	friend void SAttr(attributes& attr, long rub, unsigned char pen);
//	
//
//	attributes() {
//		rub = 0;
//		pen = 0;
//	}
//private:
//
//	long rub;
//	unsigned char pen;
//};
//
//
//class money {
//public:
//
//	money(long rub, unsigned char pen) {
//		SAttr(attr, rub, pen);
//	}
//	money() {
//	}
//
//	void GetMoney() {
//		(int)GetP(attr) > 9 ? cout << GetR(attr) << '.' << (int)GetP(attr) << endl : cout << GetR(attr) << ".0" << (int)GetP(attr) << endl;
//	}
//	void SetMoney() {
//		long rub; int pen;
//		cout << "введите сумму: ";
//		cin >> rub >> pen;
//		SAttr(attr, (long)rub, (unsigned char)pen);
//	}
//
//	money operator+(money& m) {
//		long rub_s; unsigned char pen_s;
//		rub_s = GetR(this->attr) + GetR(m.attr);
//		pen_s = GetP(this->attr) + GetP(m.attr);
//		money summ(rub_s, pen_s);
//		return summ;
//	}
//	bool operator>(money& m) {
//		if (GetR(this->attr) > GetR(m.attr)) {
//			return true;
//		}
//		else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) > GetP(m.attr)) {
//			return true;
//		}
//		else return false;
//	}
//	bool operator>=(money& m) {
//		if (GetR(this->attr) > GetR(m.attr)) {
//			return true;
//		}
//		else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) >= GetP(m.attr)) {
//			return true;
//		}
//		else return false;
//	}
//	bool operator<(money& m) {
//		if (GetR(this->attr) < GetR(m.attr)) {
//			return true;
//		}
//		else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) < GetP(m.attr)) {
//			return true;
//		}
//		else return false;
//	}
//	bool operator<=(money& m) {
//		if (GetR(this->attr) < GetR(m.attr)) {
//			return true;
//		}
//		else if (GetR(this->attr) == GetR(m.attr) && GetP(this->attr) <= GetP(m.attr)) {
//			return true;
//		}
//		else return false;
//	}
//	bool operator==(money& m) {
//		return GetR(this->attr) == GetR(m.attr) && GetP(this->attr) == GetP(m.attr);
//	}
//	bool operator!=(money& m) {
//		return !(GetR(this->attr) == GetR(m.attr) && GetP(this->attr) == GetP(m.attr));
//	}
//private:
//	attributes attr;
//};


int main() {
	setlocale(LC_ALL, "ru");

	money m(12, 50);
	money q;
	q.GetMoney();
	q.SetMoney();
	q.GetMoney();
	(m + q).GetMoney();
	cout << (m > q) << endl;
	m.SetMoney();
	cout << (m >= q);


	return 0;
}

//long GetR(attributes& attr) {
//	return attr.rub;
//}
//unsigned char GetP(attributes& attr) {
//	return attr.pen;
//}
//void SAttr(attributes& attr, long rub, unsigned char pen) {
//	attr.rub = rub + pen / 100;
//	attr.pen = pen % 100;
//}

