#ifndef STUDENT_H_
#define STUDENT_H_

#include "Faculty.h"
#include <string>

using namespace std;

class Student {
private:
    static int IDPool;
    int id;
    string name;
    
public:
    static void setIDPool(int idSeed);
    
    Student();
    Faculty advisor;
    
    int getID() { return id;}
    void study();
    void doHomework();
    bool registerClass (string name);
    bool changeAdvisor (string name);
    
    
};

#endif