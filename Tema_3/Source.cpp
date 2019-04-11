#include"Facultate.h"


void main()
{
	short nrGp;

	cout << "Numarul de grupe: ";
	cin >> nrGp;
	CFacultate ACE(nrGp);

	short op = 9;

	while (op)
	{
		cout << "\n 0 -> Exit"
			<< "\n 1-> Afisare studenti grupa"
			<<"\n 2-> Adaugare"
			<<"\n 3-> Afisare studenti din afara Craiovei"
			<<"\n 4-> Orar student"
			<<"\n 5-> Afisare grupe cu materii comune"
			<<"\n 6-> Afisare studenti dupa data"
			<<'\n';

		cin >> op;

		switch (op)
		{
		case 1: 
		{
			system("cls");
			cout << "\n Numarul grupei (1,2,3...): ";
			cin >> nrGp;
			ACE.printStudentiGrupa(nrGp);
			break;
		}
		case 2:
		{
			system("cls");

			short op2;
			cout << "Adaugi student? <1>\nAdaugi orar? <2>\n";
			cin >> op2;
			if (op2 == 1)
			{
				cout << "\n Numarul grupei (1,2,3...): ";
				cin >> nrGp;
				ACE.addStudent(nrGp);
			}
			else
			{
				if (op2 == 2)
				{
					cout << "\n Numarul grupei (1,2,3...): ";
					cin >> nrGp;
					ACE.citesteOrar(nrGp);
				}
			}
			break;
		}
		case 3:
		{
			system("cls");
			ACE.printStudentiAfara();
			break;
		}
		case 4:
		{
			string nume;
			system("cls");
			cin.get();
		
			cout << "Numele complet al studentului: ";
			std::getline(cin, nume);
			short ret=ACE.cautaStudent(nume);
			if (ret==-1)
				cout << "Studentul nu exista!\n";
			else
				ACE.printOrarGrupa(ret);
			break;
		}
		case 5:
		{
			system("cls");
			ACE.printMaterieComuna();
			break;
		}
		case 6:
		{
			system("cls");
			CData data;
			data.read();
			ACE.printStudentiData(data);
			break;
		}
		default:
			break;
		}


	}

	system("pause");
}