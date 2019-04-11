#include "Orar.h"

string COrar::materii[] = {
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

string COrar::zile_sapt[] = {
"Luni",
"Marit",
"Miercuri",
"Joi",
"Vineri"
};

COrar::COrar()
{
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 20; j++)
		{
			sapt[i].forma[j] = 'n';
			sapt[i].materia[j] = -1;
			sapt[i].oraInceput[j] = 0;
		}
	}
}

short COrar::stringEnum(const string& mat)
{
	if (mat == "GEA") return GEA;
	else if (mat == "ED") return ED;
	else if (mat == "ST") return ST;
	else if (mat == "CSA") return CSA;
	else if (mat == "DS") return DS;
	else if (mat == "Eng") return Eng;
	else if (mat == "OOP") return OOP;
	else if (mat == "KnC" ) return KnC;
	else if (mat == "Sport") return Sport;
}

void COrar::readOrar()
{
	short inceput;

	for (short i = 0; i < 5; i++)
	{
		bool continua = 1;
		cout << "\n~~" << zile_sapt[i] << "~~\n";
		while (continua)
		{
			cout << "Adaugi ceva? <0/1> ";
			cin >> continua;
			if (continua)
			{
				string mat;

				cout << " -> Ora de inceput a materiei: ";
				cin >> inceput;

				cout << " -> Ora de sfarsit a materiei: ";
				cin >> sapt[i].oraInceput[inceput];

				cout << " -> Numele materiei astfel: \n"
					<< " - GEA\n"
					<< " - ED\n"
					<< " - ST\n"
					<< " - CSA\n"
					<< " - DS\n"
					<< " - Eng\n"
					<< " - OOP\n"
					<< " - KnC \n"
					<< " - Sport\n";
				cin >> mat;
				
				sapt[i].materia[inceput]= stringEnum(mat);  

				cout << " -> Ce e? \n"
					<< " - l: laborator\n"
					<< " - c: curs\n"
					<< " - s: seminar\n";
				cin >> sapt[i].forma[inceput]; 
			}
		}
	}
}

void COrar::printOrar()
{
	for (short i = 0; i < 5; i++)
	{
		cout << "\n~~" << zile_sapt[i] << "~~\n";
		for (short j = 8; j < 21; j++)
		{
			if (sapt[i].oraInceput[j])
			{
				cout << j << " - " << sapt[i].oraInceput[j];

				if (sapt[i].forma[j] == 'c')
					cout << " curs: ";
				else
					if (sapt[i].forma[j] == 'l')
						cout << " laborator: ";
					else
						cout << " seminar: ";

				cout << materii[sapt[i].materia[j]] << '\n';
			}
		}
	}
}

short COrar::getMaterieComuna(const short& ziua, const short& ora)
{	
	return sapt[ziua].materia[ora];
}