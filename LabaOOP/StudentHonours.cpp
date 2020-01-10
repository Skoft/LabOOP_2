#include "StudentHonours.h"

StudentHonours::StudentHonours(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
	const unsigned int& _ID) {
	firstName = _firstName;
	secondName = _secondName;
	midleName = _middleName;
	age = _age;
}

int StudentHonours::Exam() {
	return rand() % 1 + 4;
}