#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// Lab 13 — Isaiah Salvatierra
// CIS 5 Week 13 · Names and a roster

struct Student {
  string name;
  int id; 
  double gpa;
};

void printStudent(const Student& s) {
 cout  << s.id << " " << s.name << " " << s.gpa << endl;
}

int main() {
  // Part 1: format a name
  string first, last;
  cout << "First: ";
  cin >> first;
  cout << "Last: ";
  cin >> last;
  string full_name = first + " " + last;
  cout << "Full Name: " << full_name << endl << "Length: " << full_name.size() << endl;
  // Part 2: a roster of three
  int honors = 0;
  const int N = 3;
  Student roster[N] = {
    {"Ada", 1, 3.9}, {"Ben", 2, 2.7}, {"Cy", 3, 3.2}
  };
   cout << "All students:\n";
   for(int i = 0; i < N; i++) {
   printStudent(roster[i]);
   }
 cout << "Honors (gpa 3.0 or above): " << endl;
  for(int i = 0; i < N; i++) {
  if (roster[i].gpa >= 3.0) { printStudent(roster[i]);

  honors++;
   }
  }
  cout << "There are " << honors << " students with honors" << endl;
 return 0;
}
