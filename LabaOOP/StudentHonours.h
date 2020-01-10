#pragma once
#include "Student.h"

class StudentHonours : public Student {
public:

	StudentHonours() = delete;
	StudentHonours(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
		const unsigned int& _ID);
	int Exam() override;

};