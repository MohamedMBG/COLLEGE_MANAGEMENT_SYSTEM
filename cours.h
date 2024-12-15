#include<iostream>
#include<string>
#include<vector>

#include "personnel.h"

using namespace std;

class Cours
{
private:
    string coursName;
    int coursNum;
    int IDemploye;
    string NEtude;
    string dep;
public:
    Cours();
    Cours(string CName, int CNum, int EmId, string niveau);
    ~Cours();
    //affichage
    void afficher();
    //attribution d'un enseignant
    void givingTeacher(int teacherID);
};