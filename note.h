#include<iostream>
#include<string>
#include<vector>

#include "cours.h"
#include "etudiant.h"

using namespace std;

class Note{
private:
    double note;
    int courseId;
    int studentid;
public:
    Note();
    Note(int Cours, int Student, double grade);
    ~Note();
    //declaration des setters
    void setNote(double n){note = n;}
    void setCourseID(int idC){courseId = idC;}
    void setStudentID(int idS){studentid = idS;}
    //declaration des getters
    double getGrade(){return note;}
    int getStudentID(){return studentid;}
    int getcourseID(){return courseId;}
};

