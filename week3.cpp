#include <cstdlib> // for rand()
#include <ctime>   // for strand(time0)
#include <iostream>
using namespace std;

int main() {
  // {curly braces}
  // variable scope

  int score = 1000;
  cout << "score in main() is " << score << ".\n";

  if (true) {
    int score = 5000;
    cout << "score in main() is " << score << ".\n";
  }

  score += 55;
  cout << "score in main() is " << score << ".\n";

  // create a set of random numbers, say 5
  // constrain them to a range of 100
  // then count how many are greater than 50

  int count = 0;
  // generate a random number, if its greater than 50, then use an if statement,
  // with ++ to add one to counter

  int randomNumber = rand() % 100 + 1; // a number between 1 and 100
  if (randomNumber > 50) {
    count += 1;
  }
  randomNumber = rand() % 100 + 1;
  if (randomNumber > 50) {
    count += 1;
  }

  randomNumber = rand() % 100 + 1;
  if (randomNumber > 50) {
    count += 1;
  }

  cout << "Numbers above 50: " << count << ".\n";

  // a loop runs the same code until you tell it not to

  int loopCount = 0;
  while(loopCount <10) {
    loopCount += 1;
  cout << "i have looped " << loopCount << " times.\n";
  }


  // reset loop count and count
  loopCount = 0;
  count = 0;

  while(loopCount < 1000000) {
    loopCount += 1;
    // generate new random number assign to randomNumber
    randomNumber = rand() % 100 + 1; 
    if(randomNumber >= 50) {
      count += 1;
    }
  }
 cout << "There were " << count << " numbers greater than 50.\n";

// can you generate 2 random numbers, and 
  //  see how often the second number is larger
  loopCount = 0;
    count = 0;
  while(loopCount < 50) {
    loopCount += 1;
    // generate new random number assign to randomNumber
    int first = rand() % 100 + 1; 
    int second = rand() % 100 + 1;
    if(first < second) {
      count += 1;
      cout << "The second number ate the first number.\n";
    }
  }


   // do -while loops, test is at the bottom
  string input;
  do {
    cout << "Wanna keep playing?\n";
    cin >> input;
    
  } while(input != "n" && input != "N");
  }