#ifndef TESTCLASS_H_INCLUDED
#define TESTCLASS_H_INCLUDED


class Test {
protected:
  char choice();
  int appendAnswerToFile(char answer);
  Questions q[8]; // Array of Questions classes 
public:
  void startTest();
  Test();
  ~Test() { cout << "Test over" << endl; }
};
#endif // TESTCLASS_H_INCLUDED
