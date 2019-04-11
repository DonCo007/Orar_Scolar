#include "Adresa.h"

void CAdresa::print_adresa()
{
	cout << "Adresa: str. "
		<< strada
		<< " "
		<< nr
		<< "; "
		<< oras
		<< " (Jud. "
		<< judet
		<< " )\n";
}

void CAdresa::read_adresa()
{
	cin.get();
	cout << "Numele strazii: ";
	std::getline(cin, strada);
	cout << "Numarul: ";
	cin >> nr;
	cin.get();
	cout << "Nume oras: ";
	std::getline(cin, oras);
	cout << "Nume judet: ";
	std::getline(cin, judet);
}