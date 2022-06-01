#include <iostream>
#include <string>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cctype>
#include "animalsclass.h"
#include "questionclass.h"
#include "testclass.h"
#include "setanimalsclass.h"
#include "test.cpp"
#include "operator.cpp"

using namespace std;

int countFileLines(string fileName) {
  int numberOfLines = 0;
  string line;
  ifstream fout(fileName);
  while (getline(fout, line))
    ++numberOfLines;
  return numberOfLines;
}

int displayResults() {
  SetAnimals sa;
  int A = countFileLines("fileA.txt");
  int B = countFileLines("fileB.txt");
  int C = countFileLines("fileC.txt");
  int D = countFileLines("fileD.txt");
  cout << "A was chosen " << A << " time(s)" << endl;
  cout << "B was chosen " << B << " time(s)" << endl;
  cout << "C was chosen " << C << " time(s)" << endl;
  cout << "D was chosen " << D << " time(s)" << endl;
  int arrayOfAnswers[4] = { A, B, C, D };
  int arrayOfAnswersCopy[4] = { A, B, C, D };
  int arraySize = sizeof(arrayOfAnswers) / 4;
  int maxNumber;
  int counter = 0;
  int shift = 0;
  for (int i = 1; i < arraySize; ++i) {
    if (arrayOfAnswers[0] < arrayOfAnswers[i]) {
      shift = i;
      arrayOfAnswers[0] = arrayOfAnswers[i];
    }
  }

  maxNumber = arrayOfAnswers[0];
  for (int i = 0; i < arraySize; ++i) {
    if (arrayOfAnswersCopy[i] == maxNumber)
      counter++;
  }

  if (counter > 1) {
    cout << "There is a tie: " << endl;
    cout << "You are a " << sa.setgetTie() << endl;
    return 0;
  }

  char answersArray[4] = { 'A', 'B', 'C', 'D' };
  cout << answersArray[shift] << " was chosen the most" << endl;

  if (answersArray[shift] == 'A')
    cout << "You are a: " << sa.setgetAnimal1() << endl;

  else if (answersArray[shift] == 'B')
    cout << "You are a: " << sa.setgetAnimal2() << endl;

  else if (answersArray[shift] == 'C')
    cout << "You are a: " << sa.setgetAnimal3() << endl;

  else if (answersArray[shift] == 'D')
    cout << "You are a: " << sa.setgetAnimal4() << endl;
}

int main() {
  Test t; // Instantiate test class 
  char answer;
  bool repeat = true;
  while (repeat == true) {
    try { 
      t.startTest(); // startTest() function in test.cpp file
      displayResults();
    }
    catch(string msg) {
      cout << msg << endl;
    }
    cout << "Would you like to try again? [y or n] ";
    cin >> answer;
    while ( answer != 'y' && answer != 'n') {
      cin.clear();
      cin.ignore(INT_MAX, '\n');
      cout << "Enter y for yes and n for no: ";
      cin >> answer;
    }

    if (answer == 'n')
      repeat = false;
// Delete files here 
  ofstream foutA("fileA.txt");
  ofstream foutB("fileB.txt");
  ofstream foutC("fileC.txt");
  ofstream foutD("fileD.txt");

  }
  return 0;
}
