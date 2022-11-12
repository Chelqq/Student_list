#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Student::Student(){
    //ctor
}

Student::~Student(){
    //dtor
}

//copy ctor
Student::Student(const Student& s) : code(s.code), name(s.name), birthDate(s.birthDate), career(s.career), startDate(s.startDate), grade(s.grade) {}

Student& Student::operator=(const Student& s){
    code = s.code;
    name = s.name;
    birthDate = s.birthDate;
    career = s.career;
    startDate = s.startDate;
    grade = s.grade;

    return *this;
}

string Student::getCode() const{
    return code;
}

Name Student::getName() const{
    return name;
}

Date Student::getBirthDate() const{
    return birthDate;
}

string Student::getCareer() const{
    return career;
}

Date Student::getStartDate() const{
    return startDate;
}

float Student::getGrade() const{
    return grade;
}

void Student::setCode(const std::string& c){
    code = c;
}

void Student::setName(const Name& n){
    name = n;
}

void Student::setBirthDate(const Date& d){
    birthDate = d;
}

void Student::setCareer(const std::string& ca){
    career = ca;

}

void Student::setStartDate(const Date& st){
    startDate = st;
}

void Student::setGrade(const float& g){
    grade = g;
}

string Student::toString() const{
    string result;

    result = code;
    result += " | ";
    result += name.toString();
    result += " | ";
    result += birthDate.toString();
    result += " | ";
    result += career;
    result += " | ";
    result += startDate.toString();
    result += " | ";
    result += to_string(grade);

    return result;
}

bool Student::operator==(const Student& s) const{
    return code == s.code;
}

bool Student::operator!=(const Student& s) const{
    return code != s.code;
}

bool Student::operator<(const Student& s) const{
    return code < s.code;
}

bool Student::operator<=(const Student& s) const{
    return code <= s.code;
}

bool Student::operator>(const Student& s) const{
    return code > s.code;
}

bool Student::operator>=(const Student& s) const{
    return code >= s.code;
}

ostream& operator << (std::ostream& os, Student& s){
    char myGrade[7];
    ///sprintf(destino, a guardar) guarda un str en una var en el buffer para utilizarse despues
    sprintf(myGrade, ".2f", s.grade);

    os << s.code << endl;
    os << s.name << endl;
    os << s.birthDate << endl;
    os << s.career << endl;
    os << s.startDate << endl;
    os << myGrade;

    return os;
}

istream& operator >> (std::istream& is, Student& s){
    string myStr;
    getline(is, s.code);
    is >> s.name;
    is >> s.birthDate;
    getline(is, s.career);
    is >> s.startDate;
    getline(is, myStr);
    ///c_str() es un puntero a un array o a un indice de array
    s.grade = atof(myStr.c_str());

    return is;
}

