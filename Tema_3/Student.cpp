#include "Student.h"

void CStudent::read()
{
  adresa.read_adresa();
	cout << " Numele studentului: ";
	std::getline(cin, nume);
	dataNasterii.read();
}

void CStudent::print() 
{
	cout << "Nume: " << nume << '\n';
	adresa.print_adresa();
	cout << "Data nasterii: ";
	dataNasterii.printData();
}