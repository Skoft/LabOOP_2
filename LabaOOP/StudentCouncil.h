#pragma once
#include "Student.h"

class StudentCouncil : public Student {
public:

	StudentCouncil() = delete;
	StudentCouncil(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
		const unsigned int& _ID);
	int Exam() override;

};
