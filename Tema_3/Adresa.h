#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::cin;

class CAdresa
{
private:
	int nr;
	string oras;
	string judet;
	string strada;

public:
	string getOras()
	{
		return oras;
	}
	void print_adresa(); 
	void read_adresa();
	
};

