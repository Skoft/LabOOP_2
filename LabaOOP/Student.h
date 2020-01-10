#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <array>


class StudentDefault;
class StudentCouncil;
class StudentHonours;
class Group;

using namespace std;
class Student {
protected:
    string firstName;
    string secondName;
    string midleName;

    unsigned int age = 0;
    unsigned int ID = 0;
    vector <int> groupNumber;

    vector <int> lastGrades;

public:
    Student() {};

    Student(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
        const unsigned int& _ID) {
        firstName = _firstName;
        secondName = _secondName;
        midleName = _middleName;
        age = _age;
        ID = _ID;
    }

    const string& GetFirstName();
    const string& GetSecondName();
    const string& GetMidleName();
    const unsigned int GetAge();
    const unsigned int GetID();
    const float GetAverageScore();

    void RequestToGroup(int& groupNumber);
    void LeaveTheGroup(int& _groupNumber);
    void PrintInformation();
    
    virtual int Exam() = 0;
    virtual ~Student() = default;
};
