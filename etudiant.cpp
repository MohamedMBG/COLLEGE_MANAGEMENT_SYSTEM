#include<iostream>
#include<string>
#include<vector>

#include "etudiant.h"

using namespace std;

Etudiant::Etudiant(){
    setMatricule(01);
    setNom("xxxx");
    setPrenom("yyyy");
    setMajor("HHHH");
}

Etudiant::Etudiant(int m, string n, string pn, string major){
    setMatricule(m);
    setNom(n);
    setPrenom(pn);
    setMajor(major);
}

void Etudiant::afficher(){
    cout << "l'etudiant de matricule: " << matricule <<
    " sont nom complet est : " << nom << prenom <<
    " sa filiere est: " << filiere<<endl;
}

void Etudiant::rechercher(vector<Etudiant>& students,int id){
    bool exists = false;

    for (size_t i = 0; i < students.size(); i++)
    {
        if (id == students[i].getMatricule())
        {
            exists = true;
            break;
        }
    }
    if (exists == false)
        cout<<"L'etudiant n'existe pas"<<endl;
    else    
        cout<<"L'etudiant existe !"<<endl;
      
}