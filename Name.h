#ifndef NAME_H
#define NAME_H

#include <iostream>
#include<string>

class Name{
    public:
        Name();
        ~Name();
        Name(const Name&);

        std::string getFirst() const;
        std::string getLast() const;

        std::string toString() const;

        void setFirst(const std::string&);
        void setLast(const std::string&);

        Name& operator = (const Name&);

        bool operator == (const Name&) const;
        bool operator != (const Name&) const;
        bool operator < (const Name&) const;
        bool operator <= (const Name&) const;
        bool operator > (const Name&) const;
        bool operator >= (const Name&) const;

        friend std::ostream& operator << (std::ostream&, Name&);
        friend std::istream& operator >> (std::istream&, Name&);

    protected:

    private:
        std::string first;
        std::string last;
};

#endif // NAME_H
