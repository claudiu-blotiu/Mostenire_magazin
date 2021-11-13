#include "Clienti.h"

Clienti::Clienti(string nume_C,int nr_articole,int total_plata):Magazin("GGT",40,"Sibiu",1)
{
	cout << "Constr cu 1 parmetru Staff" << endl;

	this->nume_C = nume_C;
	this->nr_articole = nr_articole;
	this->total_plata = total_plata;
}

Clienti::Clienti(const Clienti& customer) : Magazin(customer)
{
	cout << "Constr de copiere staff" << endl;

	this->nume_C = customer.nume_C;
}

Clienti::Clienti(string nume_C,int nr_articole,int total_palta, string nume, int nr_angajati, string oras,bool franciza): Magazin(nume, nr_angajati, oras,franciza)
{
	cout << "Constr cu 4 parametrii staff" << endl;

	this->nume_C = nume_C;
}

void Clienti::set_nume_C(string nume_C)
{
	this->nume_C = nume_C;
}
string Clienti::get_nume_C()
{
	return this->nume_C;
}

void Clienti::set_nr_articole(int nr_articole)
{
	this->nr_articole = nr_articole;
}
int Clienti::get_nr_articole()
{
	return this->nr_articole;
}

void Clienti::set_total_plata(int total_palta)
{
	this->total_plata = total_palta;
}
int Clienti::get_total_plata()
{
	return this->total_plata;
}

string Clienti::description_clienti()
{
	string text = "";

	text += "nume_C: " + this->nume_C + "\n";
	text += "Nr_articole: " + to_string(this->nr_articole) + "\n";
	text += "Total Plata: " + to_string(this->total_plata) + "\n";

	return text;
}
