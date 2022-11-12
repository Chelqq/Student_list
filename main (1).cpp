#include <iostream>
#include "Student.h"

using namespace std;

int main(){
    Date myDate;
    Name myName;

    Student myStudent;

    myStudent.setCode("219750442");
    myName.setFirst("Chris");
    myName.setLast("Ceb");

    myStudent.setName(myName);

    myDate.setDay(24);
    myDate.setMonth(9);
    myDate.setYear(2010);

    myStudent.setBirthDate(myDate);

    myStudent.setCareer("INNI");

    myDate.setDay(7);
    myDate.setMonth(3);
    myDate.setYear(2020);

    myStudent.setStartDate(myDate);

    myStudent.setGrade(90.38);

    cout << myStudent.toString();

    cout << endl << endl;

    return 0;
}
