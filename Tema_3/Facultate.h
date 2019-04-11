#include"Student.h"
#include"Data.h"
#include"Orar.h"

class CFacultate
{

	class CGrup
	{
		COrar orarGrupa; 
		CStudent studentiiGrupei[35]; 
		int nrStudenti; 
		friend class CFacultate;
	public:
		CGrup() {
			nrStudenti = 0;
		}
		bool cauta(const string&);
	};

	CGrup *grupe; 
	short nrGrupe;

	static string materii[10];
	static string zile_sapt[6];

public:
	CFacultate(short = 0);
	inline void citesteOrar(const short& nrGrupa)
	{
		cout << "Orarul grupei "<<nrGrupa<<" este:\n";
		grupe[nrGrupa - 1].orarGrupa.readOrar();
	}
	inline void addStudent(const short& nrGrupa)
	{
	
		grupe[nrGrupa - 1].studentiiGrupei[grupe[nrGrupa - 1].nrStudenti++].read();
	}
	inline void printOrarGrupa(const short& nrGr) {

		grupe[nrGr-1].orarGrupa.printOrar();
	}
	void printStudentiGrupa(const short&);			
	void printStudentiAfara();
	short cautaStudent(const string&);
	void printMaterieComuna();
	void printStudentiData(const CData&);
	~CFacultate();
	
};

