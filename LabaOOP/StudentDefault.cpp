#include "StudentDefault.h"

StudentDefault::StudentDefault(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
	const unsigned int& _ID) {
	firstName = _firstName;
	secondName = _secondName;
	midleName = _middleName;
	age = _age;
}

int StudentDefault::Exam() {
	return rand() % 5 + 1;
}