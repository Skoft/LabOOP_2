#pragma once
#include "Student.h"

class StudentDefault : public Student {
public:

	StudentDefault() {};

	StudentDefault(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
		const unsigned int& _ID);
	
	int Exam() override;
	virtual ~StudentDefault() = default;

};