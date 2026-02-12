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

    // Constructor 
    Student(string Name, int Id,string Email, int RollNo) 
    : Person(Name,Id,Email) , rollNO(RollNo) {};

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
    : Person(Name,Id,Email)  {
        empID = EmpID;
    }

    void setEmpID(int EmpID) {
        empID = EmpID;
    }

    int getEmpID() {
        return empID;
    }

    void displayinfo() override {
        displayBasicInfo();
        cout << "Employee ID = " << empID;
    }
};

class Course {
    private:
    string cname;
    string ccode;
    int credithrs;
    vector<Student*> addstudent;

    public:
    Course(string CNAME, string CCODE, int Credithrs) {
        cname = CNAME;
        ccode = CCODE;
        credithrs = Credithrs;
    }

    string getterCname() {
        return cname;
    }

    string getterCcode() {
    return ccode;
    }

    int getterCredithrs() {
    return credithrs;
    }

    void display() {
        cout << "Course Name = " << cname <<endl
        << "Course Code = " << ccode << endl
        << "Credit Hours = " << credithrs << endl;
    }

};

int main() {

    return 0;
}