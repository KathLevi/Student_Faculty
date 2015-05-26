#include <iostream>
#include <string>
#include "Faculty.h"
#include "Student.h"

using namespace std;

int main () {
    
    Student::setIDPool(10000);
    
    Student mary, sue, mark, george;
    
    cout << "Mary's ID: " << mary.getID() << endl;
    cout << "Sue's ID: " << sue.getID() << endl;
    cout << "Mark's ID: " << mark.getID() << endl;
    cout << "George's ID: " << george.getID() << endl;
}