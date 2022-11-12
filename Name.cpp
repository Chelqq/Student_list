#include "Name.h"
#include <iostream>
#include <string>

using namespace std;

Name::Name(){
    //ctor
}

Name::~Name(){
    //dtor
}

//copy ctor
Name::Name(const Name& n) : last(n.last), first(n.first) {}

string Name::getFirst() const{
    return first;
}

string Name::getLast() const{
    return last;
}

string Name::toString() const{
    return last + ", " + first;
}

void Name::setFirst(const std::string& f){
    first = f;
}

void Name::setLast(const std::string& l){
    last = l;
}

Name& Name::operator=(const Name& n){
    first = n.first;
    last = n.last;

    return *this;
}

bool Name::operator==(const Name& n) const{
    return toString() == n.toString();
}

bool Name::operator!=(const Name& n) const{
    return toString() != n.toString();
}

bool Name::operator<(const Name& n) const{
    return toString() < n.toString();
}

bool Name::operator<=(const Name& n) const{
    return toString() <= n.toString();
}

bool Name::operator>(const Name& n) const{
    return toString() > n.toString();
}

bool Name::operator>=(const Name& n) const{
    return toString() >= n.toString();
}

ostream& operator << (ostream& os, Name& n){
    os << n.first << ',' << n.last;

    return os;
}

istream& operator >> (istream& is, Name& n){
    getline(is, n.first, ',');
    getline(is, n.last);
}

