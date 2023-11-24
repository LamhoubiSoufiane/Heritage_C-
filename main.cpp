#include "main.hpp"
#include "herit.cpp"

int main()
{
    Individu I1("Lamhoubi","Soufiane",23);
    I1.afficher();
    cout<<"\n/*********************************/"<<endl;
    Individu I2(I1);
    I2.afficher();
    cout<<"\n/*********************************/"<<endl;
    string m,p;
    int i;
    m=I2.nom();
    p=I2.prenom();
    i=I2.age();
    cout<<"prenom : "<<p<<"---nom : "<<m<<"--age :"<<i<<endl;
    cout<<"\n/******************HERITAGE***************/"<<endl;
    Employe e1("bouhnane","walid",22,10000.500);
    e1.afficher();
    cout<<"\n/*********************************/"<<endl;
    Employe e2("Allam","Zakaria",24,10000);
    Employe e3(e2);
    e3.afficher();
}