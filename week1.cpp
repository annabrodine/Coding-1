#include <iostream>

using namespace std;

int main() {
  // this is a comment where you can write wherever you want and the program will still run

  
  cout << "What is your name?: ";
  string playerName = "";

  cin >> playerName;
  cout << "\n\n"; 

  // 'cout' means 'character out'
  // '/n' is for the new line
  // text must be inside double quotes 
  cout << "Hello " << playerName << "!\n";
  cout << "Are you ready to start programming?\n";  
}
