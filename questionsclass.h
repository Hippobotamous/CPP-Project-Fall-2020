#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Questions {
public:
  string questionText;
  string answers[4];
  friend ostream& operator<< (ostream& os, Questions& q); // friend function for operator overloading in operator.cpp file
};


#endif // HEADER_H_INCLUDED
