#include "Facultate.h"


string CFacultate::materii[] = {
		"GEA",
		"ED",
		"ST",
		"CSA",
		"DS",
		"Eng",
		"OOP",
		"KnC",
		"Sport"
};

string CFacultate::zile_sapt[] = {
"Luni",
"Marit",
"Miercuri",
"Joi",
"Vineri"
};


void CFacultate::printStudentiGrupa(const short& nrGr)
{

	cout << "\n Cei " << grupe[nrGr - 1].nrStudenti << " studenti ai grupei sunt: \n";

	for (short i = 0; i < grupe[nrGr - 1].nrStudenti; i++)
	{
		grupe[nrGr - 1].studentiiGrupei[i].print();
		cout << '\n';
	}
}

bool CFacultate::CGrup::cauta(const string& nume)
{

	for (short i = 0; i < nrStudenti; i++)
	{
		if (studentiiGrupei[i].testNume(nume))
			return true;
	}
	return false;
}

CFacultate::CFacultate(short nr) :
	nrGrupe(nr)
{
	grupe = new CGrup[nr + 1];
}

CFacultate::~CFacultate()
{
	delete[] grupe;
}

void CFacultate::printStudentiAfara()
{
	cout << "\n Studentii din afara Craiovei sunt\n";

	for (short i = 0; i < nrGrupe; i++)
	{
		for (short j = 0; j < grupe[i].nrStudenti; j++)
		{
			if (grupe[i].studentiiGrupei[j].getOras() != "Craiova")
			{
				grupe[i].studentiiGrupei[j].printNume();
			}
		}
	}
}

short CFacultate::cautaStudent(const string& nume)
{
	for (short i = 0; i < nrGrupe; i++)
	{
		if (grupe[i].cauta(nume))
			return i + 1;
	}
	return -1;
}

void CFacultate::printMaterieComuna() {

	cout << "\nMateriile comune si grupele sunt: \n";

	struct materieComuna
	{
		short grupele[100];
		short nrG;
		void afisare()
		{
			for (unsigned i = 0; i < nrG; i++)
			{
				cout << " Grupa " << grupele[i] << '\n';
			}
			cout << '\n';
		}
	}mate;


	for (short ziua = 0; ziua < 5; ziua++)
	{
		for (short ora = 8; ora < 21; ora++)
		{
			for (short mat = 0; mat < 9; mat++)
			{
				mate.nrG = 0;

				for (short grupa = 0; grupa < nrGrupe; grupa++)
				{
					if (grupe[grupa].orarGrupa.getMaterieComuna(ziua, ora) == mat)
					{
						mate.grupele[mate.nrG++] = grupa;
					}
				}
				if (mate.nrG > 1)
				{
					cout << "Materia comuna: " << materii[mat] << '\n';
					cout << "Ziua : " << zile_sapt[ziua] << '\n';
					mate.afisare();
					cout << '\n';
				}
			}
		}
	}



}

void CFacultate::printStudentiData(const CData& data)
{
	for (unsigned gr = 0; gr < nrGrupe; gr++)
	{
		for (unsigned st = 0; st < grupe[gr].nrStudenti; st++)
		{
			if (grupe[gr].studentiiGrupei[st].getData() < data)
			{
				grupe[gr].studentiiGrupei[st].printNume();
			}
		}
	}
}