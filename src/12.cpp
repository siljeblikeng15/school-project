// This program demonstrates how to use a switch statement in C++
#include <iostream>
using namespace std;
int main()
{
  // Declare a variable and initialize it with a value
  int choice = 1;
  switch (choice) {
    case 1:
      cout << "You have chosen the first option" << endl;
      break;
    case 2:
      cout << "You have chosen the second option" << endl;
      break;
    default:
      cout << "You have chosen an invalid option" << endl;
      break;
  }
}
