#include"Produse.h"
class Angajat:public Magazin
{
private:

	string post = "";
	int vechime = 1;
	string salar = "";

public:

	Angajat()
	{

	}

	Angajat(string, int, string);

	Angajat(const Angajat& employe);

	Angajat(string, int, string, string, int, string, bool); // Constructor de initializare

	void set_post(string);
	string get_post();

	void set_vechime(int);
	int get_vechime();

	void set_salar(string);
	string get_salar();


	string description_angajat();
	

};

