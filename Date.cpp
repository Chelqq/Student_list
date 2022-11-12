#include "Date.h"

using namespace std;

Date::Date(){
    //ctor
}

Date::~Date(){
    //dtor
}

//copy ctor
Date::Date(const Date& d) : year(d.year), month(d.month), day(d.day) {}

Date& Date::operator=(const Date& d){
    //if (this == &d) return *this; // handle self assignment
    ///no sirve lo de arriba :/
    //assignment operator
    year = d.year;
    month = d.month;
    day = d.day;

    return *this;
}

string Date::toString() const{
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

int Date::toInt() const{
    return year * 10000 + month * 100 + day;
}

int Date::getYear() const{
    return year;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}

void Date::setYear(const int& y){
    year = y;
}

void Date::setMonth(const int& m){
    month = m;
}

void Date::setDay(const int& d){
    day = d;
}

bool Date::operator==(const Date& d) const{
    return toInt() == d.toInt();
}

bool Date::operator!=(const Date& d) const{
    return toInt() != d.toInt();
}

bool Date::operator<(const Date& d) const{
    return toInt() < d.toInt();
}

bool Date::operator<=(const Date& d) const{
    return toInt() <= d.toInt();
}

bool Date::operator>(const Date& d) const{
    return toInt() > d.toInt();
}

bool Date::operator>=(const Date& d) const{
    return toInt() >= d.toInt();
}

ostream& operator << (std::ostream& os, Date& d ){
    os << d.year << endl;
    os << d.month << endl;
    os << d.day;

    return os;
}

istream& operator >> (istream& is, Date& d){
    string myStr;

    getline(is, myStr, '/');
    d.year = stoi(myStr);
    getline(is, myStr, '/');
    d.month = stoi(myStr);
    getline(is, myStr, '/');
    d.day = stoi(myStr);

    return is;
}

