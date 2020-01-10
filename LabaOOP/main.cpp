#include "Group.h"
#include "StudentDefault.h"
#include "StudentCouncil.h"
#include "StudentHonours.h"
//#include "StudentDefault.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    StudentDefault* Vlad = new StudentDefault("Vlad","Andreev","Sergeevich",20,1);
    StudentDefault* Ivan = new StudentDefault("Ivan", "Andreev", "Sergeevich", 21, 2);
    StudentDefault* Alina = new StudentDefault("Alina", "Semenova", "Ivanovna", 18, 3);

    StudentCouncil* Andrey = new StudentCouncil("Andrey", "Filipov", "Erevanovich", 18, 4);
    StudentCouncil* Lenin = new StudentCouncil("Vladimir", "Ilyich", "Lenin", 22, 5);
    StudentCouncil* Timofey = new StudentCouncil("Timofey", "Mozgov", "Bedrosovich", 21, 6);

    StudentHonours* Arina = new StudentHonours("Arina", "Borisova", "Eduardovna", 22, 7);
    StudentHonours* Kseniya = new StudentHonours("Kseniy", "Seregina", "Igorevna", 22, 8);
    StudentHonours* Anna = new StudentHonours("Anna", "Markova", "Yrievna", 22, 9);

    Group* groop = new Group(5611, 11, 0);
    groop->AddStudent(Vlad);
    groop->AddStudent(Ivan);
    groop->AddStudent(Alina);
    groop->AddStudent(Andrey);
    groop->AddStudent(Lenin);
    groop->AddStudent(Timofey);
    groop->AddStudent(Arina);
    groop->AddStudent(Kseniya);
    groop->AddStudent(Anna);

    groop->Examen();
    delete Vlad, Ivan, Alina, Andrey, Lenin, Timofey, Arina, Kseniya, Anna;
    delete groop;
    return 0;
}

 