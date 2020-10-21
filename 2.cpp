#include <iostream>

using namespace std;

class Student
{
    public:
        Student()
        {
            cout << endl << "Constructor - Undergraduate Student ";
        }
};

class UndergraduateStudent : public Student
{
    public:
        UndergraduateStudent()
        {
            cout << endl << "Constructor - Undergraduate Student ";
        }
};

class Freshman : public UndergraduateStudent
{
    public:
        Freshman()
        {
            cout << endl << "Constructor - Freshman";
        }
};

class Senior : public UndergraduateStudent
{
    public:
        Senior()
        {
            cout << endl << "Constructor - Senior";
        }
};

class Sophomore : public UndergraduateStudent
{
    public:
        Sophomore()
        {
            cout << endl << "Constructor - Sophomore";
        }
};

class Junior : public UndergraduateStudent
{
    public:
        Junior(

        ){
            cout << endl << "Constructor - Junior";
        }
};

class GraduateStudent : public Student
{
    public:
        GraduateStudent()
        {
            cout << endl << "Constructor - Graduate Student";
        }
};

class DoctorialStudent : public GraduateStudent
{
    public:
        DoctorialStudent()
        {
            cout << endl << "Constructor - Graduate DoctorialStudent";
        }
};

class MasterStudent : public GraduateStudent
{
    public:
        MasterStudent()
        {
            cout << endl << "Constructor - Master Student";
        }
};

int main()
{
    cout << endl << endl << "---- Freshman Student ---- ";
    Freshman F;
    
    cout << endl << endl << "---- Senior Student ---- ";
    Senior S1;
    
    cout << endl << endl << "---- Sophomore Student ---- ";
    Sophomore S2;

    
    cout << endl << endl << "---- Junior Student ---- ";
    Junior J;

    
    cout << endl << endl << "---- Doctorial Student ---- ";
    DoctorialStudent D;
    
    cout << endl << endl << "---- Master Student ---- ";
    MasterStudent M;

    return 0;
}

