#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
  srand(time(0));
  for (int counter = 0; counter < 10; counter += 1) {
    cout << rand() % 10 + 1 << "\n";
  }

  cout << "7 / 3 = " << 7 / 3 << "r" << 7 % 3 << ".\n";

  int seedCount = 10;

  while (seedCount > 0) {
    cout << "I walked 3 feet left\n";
    cout << "I planted a seed\n";
    seedCount -= 1;
    cout << "I have " << seedCount << " seeds.\n";
  }
  cout << "\n\n\n";
  for (int seedCount = 10; seedCount > 10; seedCount -= 1) {
    cout << "I walked 3 feet left\n";
    cout << "I planted a seed\n";
    seedCount -= 1;
    cout << "I have " << seedCount << " seeds.\n";
  }

  while (true) {
    cout << "press q to quit.\n";
    char input;
    cin >> input;
    if (input == 'q') {
      break;
    }
  }
  // an array is a variable that holds other other variables
  // it can only hold on kind of variable at a time

  string favGames[100]; // creating an array of the type string named
                        // "faveGames" with a size of 100

  int index = 0;

  while (true) {
    cout << "What would you like to do?\n";
    cout << "Type 'quit' to quit.\n";
    cout << "Type 'add' to add a game.\n";
    cout << "Type 'show' to show the array of games.\n";

    string input;
    cin >> input;

    if (input == "quit") {
      cout << "Thanks for playing!\n";
    }
    if (input == "add") {
      cout << "\nWhat game would you like to add?\n";
      cin >> input;
      favGames[index] = input; // this line means that whatever you type in
                               // takes over the index(0) spot
      index++; 
      cout << "You added " << input << "!\n";
      // this could be any number
      // this is adding 1 to index, so every time you run it 1 gets added
    }
    if (input == "show") {
      cout << "\nhere are your favorite games:\n";
      for (int i = 0; i < index; i++) {
        cout << favGames[i] << "\n\n";
      }
    }
    if(input == "edit") {
    cout << "Please re-enter last game name.\n";
    cin >> input;
    favGames[index - 1] = input;
  } // end of favGames while loop

  
  
  }
}