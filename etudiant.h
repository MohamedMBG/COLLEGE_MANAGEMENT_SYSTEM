#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Etudiant
{
private:
    int matricule;
    string nom;
    string prenom;
    string filiere;

public:
    Etudiant(/* args */);
    Etudiant(int m, string n, string pn, string major);
    ~Etudiant();
    void afficher();
    void rechercher(vector<Etudiant>& etudiants, int matricule);
    //definition des getters
    void setMatricule(int id){matricule = id;}
    void setNom(string n){nom = n;}
    void setPrenom(string pn){prenom = pn;}
    void setMajor(string major){filiere = major;}
    //definition des setters
    int getMatricule(){return matricule;}
    string getNom(){return nom;}
    string getPrenom(){return prenom;}
    string getMajor(){return filiere;}
};
