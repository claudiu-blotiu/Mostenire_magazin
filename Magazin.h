#include<iostream>
#include<string>
using namespace std;

class Magazin
{
private:

	string nume = "";
	int nr_angajati = 1;
	string oras = "";
	bool franciza = false;

public:

	Magazin()
	{

		cout << "Eu sunt constructorul fara parametrii al bazei"<<endl;

	}

	Magazin(string, int, string, bool);

	Magazin(const Magazin& afacere);

	void set_nume(string);
	string get_nume();

	void set_nr_angajati(int);
	int get_nr_angajati();

	void set_oras(string);
	string get_oras();

	void set_franciza(bool);
	bool get_franciza();

	string description_Magazin();

	string to_save();

	












};

