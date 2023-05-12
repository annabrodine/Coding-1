#include <iostream> // sends text to and from the console
using namespace std; // we hate typing std:: all the freaking time

int main() {
  std::cout << "Hello World!\n";

  // declare a variable of the type string names "playerName"
  string playerName;
  //defining the value of the variable playerName
  playerName = "Player";

  // declare and define a variable of the type boolean named "lightOn"
  // use camelCase, whereEveryWordButTheFirstIsCapitalized
  bool lightOn = true;

  // if the (test is true)
  if (lightOn) {
    // use this code
    cout << "I can see!\n";
    }
  else {
    cout << "It is dark.\n";
  }

  unsigned int score = 0;
  score = score + 100000;
  cout << "You have stolen the declaration of independence!\n";
  cout << "Your score is now " << score << ".\n";
 

  cout << "I am thinking of a number between 1 and 10. Can you guess it?\n";
  int theNumber = 4;
  int playerGuess = 0;
  cout << "Your Guess: ";
  cin >> playerGuess;

  if(playerGuess == theNumber) {
    cout << "\nYou've guess it correctly!\n";
  }
  else {
    cout << " \nBruh you suck! " << playerGuess << " is WRONG!\n";
    }
  // boolean should be shortened to just boolean
  // a single equals is an assignment, a double equals is a comparison
  // a single equals is "You are...", a double equals is "Are you?"

  
}