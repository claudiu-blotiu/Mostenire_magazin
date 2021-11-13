#include"Magazin.h"

class Produse :public Magazin
{
private:
	
	string producator = "";
	string tara = "";
	int cantitate = 1;

public:

	Produse()
	{

	}

	Produse(string,string, int);
	
	Produse(const Produse& elev);

	Produse(string, string, int, string, int, string, bool);

	void set_producator(string);
	string get_producator();

	void set_tara(string);
	string get_tara();

	void set_cantitate(int);
	int get_cantitate();

	string description_Produse();



};

