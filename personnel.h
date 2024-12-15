#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Personnel{
private:
    int num_employe;
    string name;
    string type;
    string departement;
    
public:
    Personnel();
    Personnel(int id, string nom, string type, string dep);
    ~Personnel();
    void lister();
    void search(vector<Personnel>& persons, int id);
    //declaration des setters
    void setNum(int n){num_employe = n;}
    void setName(string nom){name = nom;}
    void setType(string t){type = t;}
    void setDep(string dep){departement = dep;}
    //declaratoin des getters
    int getNum(){return num_employe;}
    string getName(){return name;}
    string getType(){return type;}
    string getDep(){return departement;}
};
