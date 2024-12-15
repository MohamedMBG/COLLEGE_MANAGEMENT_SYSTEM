#include <iostream>
#include <string>
#include <vector>
#include <cctype>

#include "cours.h"

using namespace std;

Cours::Cours()
{
    coursName = "intermidiate English";
    coursNum = 010;
    givingTeacher(5);
    NEtude = '3IIR';
}

Cours::Cours(string CName, int Cnum, int IDEmploye, string levelEtude){
    // on va appler la fonction givingTeacher(IDEmploye)
    coursName = CName;
    coursNum = Cnum;
    givingTeacher(IDEmploye);
    NEtude = levelEtude;
}

Cours::~Cours()
{
    cout << "l'objet a ete detruit avec succes!";
}

void Cours::givingTeacher(int idTeacher)
{
    bool exists;
    vector<Personnel> teachers;
    for (int i = 0; i < teachers.size(); i++)
    {
        if (idTeacher == teachers[i].getNum() && (teachers[i].getType() == "e" || teachers[i].getType() == "E"))
        {
            IDemploye = idTeacher;
            dep = teachers[i].getDep();
        }
    }
}
