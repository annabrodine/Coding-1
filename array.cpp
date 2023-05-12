#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";

  string favGames[100];
  int index = 0;

  while (true) {
    cout << "\nWhat would you like to add to the list\n";
    cout << "\nType 'show' to show the list.\n";
    cout << "\nType 'add' to add a game.\n";
    cout << "\nType 'bulkAdd' to add multiple games at a time\n";
    cout << "\nType 'find' to locate and edit game.\n";
    cout << "\nType 'quit' to quit.\n";

    string input;
    cin >> input;

    if (input == "quit") {
      cout << "\nList is over.\n";
      break;
    }

    if (input == "add") {
      cout << "\nWhat game would you like to add to the list?\n";
      cin >> input;
      favGames[index] = input;
      index++;
      cout << "\nYou have added " << input << "!\n\n";
    }

    if (input == "show") {
      cout << "\nHere is the list of far:\n\n";
      for (int i = 0; i < index; i++) {
        cout << i + 1 << ". " << favGames[i] << "\n\n";
      }
    }
    if (input == "bulkAdd") {
      do {
        index += 0;
        cout << "\nWhat games would you like to add\n";
        cin >> input;
        favGames[index] = input;
        index++;
      } while (input != "quit");
    }
    if (input == "find") {
      cout << "\nWhat game would you like to find?\n";
      cin >> input;
      for (int i = 0; i < index; i++) {
        if (favGames[i] == input) {
          cout << "\nI found it\n";
          cout << "\nWhat would you like to change it to?\n";
          cin >> input;
          favGames[i] = input;
        }
      }
    }
  }
}
