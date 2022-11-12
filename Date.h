#ifndef DATE_H
#define DATE_H

#include <iostream>



class Date
{
    public:
        Date();
        Date(const Date&); ///Ctor copia, para copiar de un obj a otro (date 2 date)  utiliza el operador ==, la retorna por ref
        ~Date();

        Date& operator=(const Date&);

        std::string toString() const; /// para convertir en cadena

        int getYear() const;
        int getMonth() const;
        int getDay() const;

        void setYear(const int&);
        void setMonth(const int&);
        void setDay(const int&);


        ///OP relacionales para comparar OBJ (se usa sobrecarga de OP)
        bool operator == (const Date&) const;
        bool operator != (const Date&) const;
        bool operator < (const Date&) const;
        bool operator <=(const Date&) const;
        bool operator > (const Date&) const;
        bool operator >= (const Date&) const;


        ///OP de flujo, se sobrecargan para OBJ
        friend std::ostream& operator << (std::ostream&, Date&);
        friend std::istream& operator >> (std::istream&, Date&);


    protected:

    private:
        int year = 0;
        int month = 0;
        int day = 0;

        int toInt() const;
};

#endif // DATE_H
