#ifndef SRC_HERIT_H_
#define SRC_HERIT_H_

class Individu
{
    public:
        Individu(string,string,int);
        Individu(const Individu &);//constructeur de copie
        string nom(void);//retourner le nom
        string prenom(void);//retourner le prenom
        void afficher(void);//afficher
        int age(void);//retourner l age
    protected:
        int _age;
        string _nom;
        string _prenom;
};

class Employe : public Individu
{
    private:
        float salaire;
    public:
        Employe(string,string,int,float);
        Employe(const Employe &);
        void afficher(void);
};


#endif