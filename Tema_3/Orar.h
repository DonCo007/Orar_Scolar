#include<string>
#include<iostream>
using namespace std;

class COrar
{
	enum materii
	{
		GEA,
		ED,
		ST,
		CSA,
		DS,
		Eng,
		OOP,
		KnC,
		Sport
	}; 
	struct zi {
		short oraInceput[20];
		short materia[20];
		char forma[20];
	}sapt[5];

public:
	static string materii[10];
	static string zile_sapt[6];

	COrar();
	short stringEnum(const string&);
	void readOrar();
	void printOrar();
	short getMaterieComuna(const short&,const short&);
};

