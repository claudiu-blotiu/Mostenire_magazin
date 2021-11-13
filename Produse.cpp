#include "Produse.h"

Produse::Produse(string producator, string tara, int cantitate) :Magazin("Carrefour", 200, "Cluj", 1) //apleaza Constructorul"Persoana"cu parametrii
{
	this->producator = producator;
	this->tara = tara;
	this->cantitate = cantitate;
	
}

Produse::Produse(const Produse& elev):Magazin(elev)
{
	cout << "Constr copiere student" << endl;

	this->producator = elev.producator;
	this->tara = elev.tara;
	this->cantitate = elev.cantitate;
}

Produse::Produse(string producator, string tara, int cantitate, string nume, int nr_angajati, string oras, bool franciza) :Magazin(nume, nr_angajati, oras, franciza)
{
	cout << "Constr cu 7 parametrii student" << endl;

	this->producator = producator;
	this->tara = tara;
	this->cantitate = cantitate;
}

void Produse::set_producator(string producator)
{
	this->producator = producator;
}
string Produse::get_producator()
{
	return this->producator;
}

void Produse::set_tara(string tara)
{
	this->tara = tara;
}
string Produse::get_tara()
{
	return this->tara;
}

void Produse::set_cantitate(int cantitate)
{
	this->cantitate = cantitate;
}
int Produse::get_cantitate()
{
	return this->cantitate;
}

string Produse::description_Produse()
{
	string text = "";

	text += "producator: " + this->producator + "\n";
	text += "tara: " + this->tara + "\n";
	text += "cantitate: " + to_string(this->cantitate) + "\n";

	return text;
}