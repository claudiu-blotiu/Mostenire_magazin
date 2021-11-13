#include "Angajat.h"

Angajat::Angajat(string post, int vechime, string salar):Magazin("Kaufland",100,"BV",0)
{
	cout << "Constr cu 3 parametrii angajat" << endl;
	this->post = post;
	this->vechime = vechime;
	this->salar = salar;
}

Angajat::Angajat(const Angajat& employe) :Magazin(employe)
{
	cout << "Constr de copiere angajat" << endl;
	this->post = employe.post;
	this->vechime = employe.vechime;
	this->salar = employe.salar;
}

Angajat::Angajat(string post, int vechime, string salar, string nume, int nr_angajati, string oras, bool franciza) : Magazin(nume, nr_angajati, oras, franciza)
{
	cout << "Constr cu 7 parametrii angajat" << endl;

	this->post = post;
	this->vechime = vechime;
	this->salar = salar;
}


void Angajat::set_post(string post)
{
	this->post = post;
}
string Angajat::get_post()
{
	return this->post;
}

void Angajat::set_vechime(int vechime)
{
	this->vechime = vechime;
}
int Angajat::get_vechime()
{
	return this->vechime;
}

void Angajat::set_salar(string salar)
{
	this->salar = salar;
}
string Angajat::get_salar()
{
	return this->salar;
}


string Angajat::description_angajat()
{
	string text = "";

	text += "Post: " + this->post + "\n";
	text += "Vechime: " + to_string(this->vechime) + "\n";
	text += "Salar: " + this->salar + "\n";

	return text;
}


