#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int health = 20;
int totalTreasure = 0;

void story() {
  cout << "After doing homework for literally 17 hours straight, you decide to take a break.\n";
}

bool askYN(string question = "Would you like to go on an adventure? ") {
  while (true) {
    cout << question << "(y/n)\n";
    char input;
    cin >> input;

    if (input == 'y') {
      return true;
    }

    else if (input == 'n') {
      return false;
    }
  }
}

int rollDie(int sides = 6) { return rand() % sides; }

void ending() {
  cout << "You go back to the dorm with " << health << " health and "
       << totalTreasure << " treasure.\n";
}

void adventure() {
  rollDie(); // block
  rollDie(); // attack
  if (rollDie() >= rollDie()) {
    cout << "Your block was successful!\n";
    totalTreasure += 10;
  } else {
    health -= rollDie();
    cout << "Your block was unsuccessful :(\n";
  }
  cout << "your health is at " << health << " and you have " << totalTreasure
       << " treasure.\n";
}
int main() {
  srand(time(0));

  story();

  do {
    if (askYN()) {
      cout << "It's time to begin your adventure!/n";

    } else {
      ending();
      break;
    }
    adventure();
  } while (health > 0);

    if (health < 0){
      cout << "You have died.\n";
    }
  }