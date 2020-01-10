#include "Student.h" 

const string& Student::GetFirstName() {
	return firstName;
};

const string& Student::GetSecondName() {
	return secondName;
}

const string& Student::GetMidleName() {
	return midleName;
}
const unsigned int Student::GetAge() {
	return age;
}
const unsigned int Student::GetID() {
	return ID;
}
const float Student::GetAverageScore() {
	float score = 0.0f;
	for (auto& i : lastGrades) {
		score += i;
	}
	score /= lastGrades.size();
	return score;
}

void Student::RequestToGroup(int& _groupNumber) {
	groupNumber.push_back(_groupNumber);
}

void Student::LeaveTheGroup(int& _groupNumber) {
	for (auto i = groupNumber.begin(); i != groupNumber.end(); ++i) {
		if (*i == _groupNumber) {
			groupNumber.erase(i);
			return;
		}
	}
}

void Student::PrintInformation() {
	cout << "\n__________________________\nИнформация о студенте: " << secondName << " " << firstName << " " << midleName << endl;
	cout << "ID студента" << ID << endl;
	cout << "Возраст: " << age << endl;
	cout << "Средний балл: " << GetAverageScore()<< endl;
	for (auto i = groupNumber.begin(); i != groupNumber.end(); ++i) {
		cout << "Состоит в группе: " << *i  << endl;
	}
	cout << "__________________________\n";
}

