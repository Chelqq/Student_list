#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "Name.h"
#include "Date.h"

///clase Películas
///Agregar, Imprimir, Buscar, Modificar y Elimina

class Student{
    public:
        Student();
        ~Student();
        Student(const Student& other);

        Student& operator=(const Student&);

        std::string getCode() const;
        Name getName() const;
        Date getBirthDate() const;
        std::string getCareer() const;
        Date getStartDate() const;
        float getGrade() const;

        void setCode (const std::string&);
        void setName (const Name&);
        void setBirthDate(const Date&);
        void setCareer(const std::string&);
        void setStartDate(const Date&);
        void setGrade(const float&);

        std::string toString() const;

        bool operator == (const Student&) const;
        bool operator != (const Student&) const;
        bool operator < (const Student&) const;
        bool operator <= (const Student&) const;
        bool operator > (const Student&) const;
        bool operator >= (const Student&) const;

        friend std::ostream& operator << (std::ostream&, Student&);
        friend std::istream& operator >> (std::istream&, Student&);

    protected:

    private:
        std::string code;
        Name name;
        Date birthDate;
        std::string career;
        Date startDate;
        float grade;



};

#endif // STUDENT_H
