#include "Magazin.h"

Magazin::Magazin(string nume, int nr_angajati, string oras, bool franciza)
{
	cout << "Eu sunt constrcutorul cu patru paramterii al bazei"<<endl;
	this->nume = nume;
	this->nr_angajati = nr_angajati;
	this->oras = oras;
	this->franciza = franciza;
}

Magazin::Magazin(const Magazin& person)
{
	cout << "Constr de copiere baza" << endl;

	this->nume = person.nume;
	this->nr_angajati = person.nr_angajati;
	this->oras = person.oras;
	this->franciza = person.franciza;
}

void Magazin::set_nume(string nume)
{
	this->nume = nume;
}
string Magazin::get_nume()
{
	return this->nume;
}

void Magazin::set_nr_angajati(int nr_angajati)
{
	this->nr_angajati = nr_angajati;
}
int Magazin::get_nr_angajati()
{
	return this->nr_angajati;
}

void Magazin::set_oras(string oras)
{
	this->oras = oras;
}
string Magazin::get_oras()
{
	return this->oras;
}

void Magazin::set_franciza(bool franciza)
{
	this->franciza = franciza;
}
bool Magazin::get_franciza()
{
	return this->franciza;
}

string Magazin::description_Magazin()
{
	string text = "";

	text += "Nume: " + this->nume + "\n";
	text += "nr_angajati: " + to_string(this->nr_angajati) + "\n";
	text += "Oras: " + this->oras + "\n";
	text += "franciza: " + to_string(this->franciza) + "\n";

	return text;
}

string Magazin::to_save()
{
	string text = "";

	text += this->nume + " ";
	text += to_string(this->nr_angajati) + " ";
	text += this->oras + " ";
	text += to_string(this->franciza);

	return text;
}