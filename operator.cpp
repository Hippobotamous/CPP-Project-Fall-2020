#include <windows.h>

// Overloaded the insertion operator and used it to print the questions and potential responses to the terminal

ostream& operator<< (ostream& os, Questions& q) {

  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 11);  // Changes windows cmd font color
  os << endl;
  os << q.questionText << endl;
  os << q.answers[0] << endl;
  os << q.answers[1] << endl;
  os << q.answers[2] << endl;
  os << q.answers[3] << endl;
  os << endl;
  return os;
}
