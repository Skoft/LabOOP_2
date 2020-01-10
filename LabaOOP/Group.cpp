#include "Group.h"

bool Group::CheckStudentInGroup(const Student* student) {
	for (auto i = Students.begin(); i != Students.end(); ++i) {
		if (*i == student) {
			return true;
		}
	}
	return false;
}

void Group::AddStudent(Student* student) {
	if (Students.size() >= maxStudent) {
		cout<<"\n__________________________\nВ группе нет места"<<endl;
		//нет места (cout)
	}

	else if (CheckStudentInGroup(student)) {
		cout<<"\n__________________________\nСтудент"<<student->GetFirstName()<<" уже находится в группе."<<endl;
		//студент уже в группе 
	}

	else if (minAverageScore > student->GetAverageScore()) {
		cout<<"\n__________________________\nУ студента "<< student->GetFirstName() <<" слишком низкий балл "<< minAverageScore<<" "<<student->GetAverageScore()<<endl;
		//плохой бал
	}
	
	else {
		student->RequestToGroup(numberOfGroup);
		Students.push_back(student);
		cout<<"\n__________________________\nСтудент "<< student->GetFirstName()<< " успешно зачислен в группу "<<numberOfGroup<<endl;
		//сообщения о добавлении в группу
	}
}

void Group::SetMinAverageScore(const float& _minAverageScore) {
	minAverageScore = _minAverageScore;
}

void Group::SortWithAverageScore() {
	std::sort(Students.begin(), Students.end(), [](Student* a, Student* b)
		{
			return a->GetAverageScore() > b->GetAverageScore();
		});
}

Student* Group::GetStudent(const string& _firstName, const string& _secondName, const string& _lastName) {
	for (auto& i : Students) {
		if (i->GetFirstName() == _firstName && i->GetSecondName() == _secondName && i->GetMidleName() == _lastName) {
			return i;
		}
	}
	cout << "\n__________________________\nСтудент "<< _firstName <<" " <<_secondName<< " " <<_lastName <<" не найден"<<endl;
	return NULL;
}

void Group::RemoveStudent(const string& _firstName, const string& _secondName, const string& _lastName) {
	Student* s = GetStudent(_firstName, _secondName, _lastName);
	for (auto i = Students.begin(); i != Students.end(); ++i) {
		if (*i == s) {
			s->LeaveTheGroup(numberOfGroup);
			Students.erase(i);
			cout << "\n__________________________\nСтудент " <<_firstName<<_secondName<<_lastName<< " отчислен" << endl;
		}
	}
}

const float Group::GetMinAverageScodre() {
	return minAverageScore;
}

void Group::PrintGroupInformation() {
	cout << "\n__________________________\nИнформация о группе:" << endl;
	cout << "Номер группы " <<numberOfGroup<< endl;
	cout << "В группе на данный момент находятся: "<<Students.size()<<" студента"<<endl;
	for (auto& i : Students) {
		i->PrintInformation();
		cout << endl;
	}
	cout << "\n__________________________\n";
}

void Group::Examen() {
	cout << "\n\n_________________________" << endl;
	for (auto& i : Students) {
		cout << "На экзамене студент(ка):"<<i->GetFirstName()<<" получил отметку: " << i->Exam() <<"\n ________________________" <<endl;
	}
}