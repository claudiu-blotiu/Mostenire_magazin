#include"Angajat.h"

class Clienti:public Magazin
{
private:

	string nume_C = "";
	int nr_articole = 1;
	int total_plata = 1;

public:

	Clienti()
	{

	}

	Clienti(string,int,int);

	Clienti(const Clienti& crew);

	Clienti(string, int, int, string, int, string,bool);

	void set_nume_C(string);
	string get_nume_C();

	void set_nr_articole(int);
	int get_nr_articole();

	void set_total_plata(int);
	int get_total_plata();

	string description_clienti();

	





};

