#include "main.hpp"
#include "herit.hpp"


Individu::Individu(string nom=" ",string prenom=" ",int age=0)
{
    _age=age;
    _nom.assign(nom);
    _prenom.assign(prenom);
}

Individu::Individu(const Individu &I)
{
    this->_age=I._age;
    this->_nom.assign(I._nom);
    this->_prenom.assign(I._prenom);
}

string Individu::nom(void)
{
    return ((string)this->_nom);
}

string Individu::prenom(void)
{
    return((string)this->_prenom);
}

int Individu::age(void)
{
    return((int)this->_age);
}

void Individu::afficher(void)
{
    cout<<"Nom : "<<this->_nom<<"---Prenom : "<<this->_prenom<<"---Age : "<<this->_age<<endl;
}

/**********************************************/

Employe::Employe(string nom=" ",string prenom=" ",int age=0,float sal=0.0) : Individu(nom,prenom,age)
{
    salaire=sal;
}

Employe::Employe(const Employe &e) : Individu(e)
{
    salaire=e.salaire;
}

void Employe::afficher(void)
{
    Individu::afficher();
    cout<<"-- salaire : "<<this->salaire<<endl;
}
