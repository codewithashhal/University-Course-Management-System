#include <iostream>
#include <vector>
using namespace std;

// University Course Management System

class Person {
    protected:
    int id;
    string email, name; 

    virtual void displayBasicInfo() {
        cout << "Name = " << name << endl
        << "ID = " << id <<endl
        << "Email = " << email << endl;
    }

    public:

    virtual void displayinfo() = 0 ;

    Person(string NAME, int ID, string EMAIL) {
        name = NAME;
        id = ID;
        email = EMAIL;
    }

    void setID(int ID) {
        id = ID;
    }

    int getID() {
        return id;
    }

    void setName(string Name) {
        name = Name;
    }

    string getName() {
        return name;
    }

    void setEMAIL(string EMAIL) {
        email = EMAIL;
    }

    string getEMAIL() {
        return email;
    }    
};

class Student : public Person {
    private:
    int rollNO;
    int* Course;
    

    // void enrollCourse() {

    //     cout << "--- --- Courses are --- ---" << endl
    //     << "Phy - LADE - Chem - CS - Eng - " << endl<< endl;
    //     cout << "Enter the courses you want to Register (Any 3): ";

    //     for (int i = 0 ; i < 3; i++) {
    //         getline(cin ,enrolledCourses);
    //     }
    // }

    // Constructor 
    Student(string Name, int Id,string Email, int RollNo) 
    : Person(Name,Id,Email) ,rollNO(RollNo) {};

    void displayinfo() override {
        displayBasicInfo();
        cout << "Roll No = " << rollNO;
    }
};

class Teacher : public Person {
    private:
    int empID;
    vector<Course*> assignedCourses;

    public:

    // Constructor
    Teacher(string Name, int Id,string Email, int EmpID) 
    : Person(Name,Id,Email) , empID(EmpID) {}

    void setEmpID(int EmpID) {
        empID = EmpID;
    }

    int getEmpID() {
        return empID;
    }

    
};



class Course {

};

int main() {

    return 0;
}