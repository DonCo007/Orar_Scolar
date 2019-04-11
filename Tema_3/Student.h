#include "Adresa.h"
#include"Data.h"

class CStudent 
{
	string nume;
	CData dataNasterii;
	CAdresa adresa;

public:
	void read(); 
	void print();
	inline string getOras() {
		return adresa.getOras();
	}
	inline void printNume() {
		cout << nume << '\n';
	}
	bool testNume(const string& n) const
	{
		return n == nume ? 1 : 0;
	}
	inline CData getData()
	{
		return dataNasterii;
	}
};

