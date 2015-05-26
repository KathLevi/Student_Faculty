#include "Student.h"

int Student::IDPool = 0;

void Student::setIDPool(int idSeed){
    IDPool = idSeed;
}

Student::Student() {
    id = IDPool++;
}

void Student::study() {}

void Student::doHomework(){}

bool Student::registerClass(string name){return true;}

bool Student::changeAdvisor(string name){return true;}

