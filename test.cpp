#include "testclass.h"
#include <iostream>
#include <cstring>
using namespace std;

char Test::choice() { // Take user input for answer to question
  char choice;
  cout << "Answer:" << endl;
  cin >> choice;
  choice = toupper(choice);
  while (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D') { // Error handling 
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Enter A B C or D" << endl;
    cin >> choice;
    choice = toupper(choice);
  }
  return choice;
}

int Test::appendAnswerToFile(char answer) { //If user answers A, put it in this file
  string ERR_MSG = "A file failed to open.";
  if (answer == 'A') {
    ofstream fout("fileA.txt", ios::app);
    if (!fout) { // If file fails to open
      throw(ERR_MSG);
    }
    fout << answer << endl;
    fout.close();
  }

  else if (answer == 'B') { //If user answers B, put it in this file
    ofstream fout("fileB.txt", ios::app);
    if (!fout) { // If file fails to open
      throw(ERR_MSG);
    }
    fout << answer << endl;
    fout.close();
  }

  else if (answer == 'C') { //If user answer C, put it in this file
    ofstream fout("fileC.txt", ios::app);
    if (!fout) { // If file fails to open
      throw(ERR_MSG);
    }
    fout << answer << endl;
    fout.close();
  }

  else if (answer == 'D') { //If user answers D, put it in this file
    ofstream fout("fileD.txt", ios::app);
    if (!fout) { // If file fails to open
      throw(ERR_MSG);
    }
    fout << answer << endl;
    fout.close();
  }
}

void Test::startTest() {
  for (int i = 0; i < 8; ++i) {
      cout << q[i]; // q variable goes prints 
      appendAnswerToFile(choice());
  }
}
// Using constructor in Test class to access protected array of Questions classes
Test::Test() { q[0].questionText="How old are you?";
           q[0].answers[0]="A: 18-30";
           q[0].answers[1]="B: 30-45";
           q[0].answers[2]="C: 45-60";
           q[0].answers[3]="D: 60 and up";

           q[1].questionText="I am a: ";
           q[1].answers[0]="A: Freshmen";
           q[1].answers[1]="B: Sophomore";
           q[1].answers[2]="C: Junior";
           q[1].answers[3]="D: Senior";

           q[2].questionText="Do you put pineapples on pizza?";
           q[2].answers[0]="A: No, I don't enjoy ruining pizza.";
           q[2].answers[1]="B: Yes, I enjoy ruining pizza.";

           q[3].questionText="How many holes does a straw have?";
           q[3].answers[0]="A: 1";
           q[3].answers[1]="B: 2";
           q[3].answers[2]="C: 0";
           q[3].answers[3]="D: Infinity";

           q[4].questionText="What is your favorite class?";
           q[4].answers[0]="A: CS225";
           q[4].answers[1]="B: This Class";
           q[4].answers[2]="C: Both A and B";
           q[4].answers[3]="D: All of the above";

           q[5].questionText="Is Chess a sport?";
           q[5].answers[0]="A: Yes, why wouldn't it be?";
           q[5].answers[1]="B: No, why would it be?";
           q[5].answers[2]="C: Not sure.";
           q[5].answers[3]="D: What is chess?";

           q[6].questionText="Is cereal soup?";
           q[6].answers[0]="A: Yes";
           q[6].answers[1]="B: No";
           q[6].answers[2]="C: Not sure";
           q[6].answers[3]="D: Prefer not to answer";

           q[7].questionText="What grade do we deserve on this project?";
           q[7].answers[0]="A: D";
           q[7].answers[1]="B: A";
           q[7].answers[2]="C: B";
           q[7].answers[3]="D: C";

}


