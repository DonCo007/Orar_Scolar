#pragma once

#include<iostream>
#include<fstream>

using std::cout;
using std::cin;

class CData
{
	short zi;
	short an;
	short luna;

public:
	void read();
	friend bool operator<(const CData&, const CData&) ;
	inline void printData()
	{
		cout << zi << "." << luna << "." << an << "\n";
	}
};

