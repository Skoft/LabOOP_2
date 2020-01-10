#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Student.h"
using namespace std;

class Group {
public:
    Group() = delete;
    Group(int _number,const unsigned int& _maxStudent, const float& _minAverageScore) {
        numberOfGroup = _number;
        maxStudent = _maxStudent;
        minAverageScore = _minAverageScore;
    }
    //get
    Student* GetStudent(const string& _firstName, const string& _secondName, const string& _lastName);
    const float GetMinAverageScodre();
    //set
    void SetMinAverageScore(const float& _minAverageScore);
    void AddStudent(Student* student);
    void RemoveStudent(const string& _firstName, const string& _secondName, const string& _lastName);
    void PrintGroupInformation();
    void SortWithAverageScore();
    void Examen();
    ~Group() = default;






private:
    int numberOfGroup;
    vector <Student*> Students;
    unsigned int maxStudent = 0;
    float minAverageScore = 0.0f;

    bool CheckStudentInGroup(const Student* student);


};
