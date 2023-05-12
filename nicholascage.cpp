#include <iostream>
#include <cstdlib>  // for random numbers
#include <ctime>    // for seeding the random number generator
using namespace std;
int main() {
  cout << "Welcome to whatever this game is gonna be called!\n";
  cout << "What is your name?: ";
  string playerName = "";
  string input;
  cin >> playerName;
  cout << "\n\n"; 
  cout << "Hello " << playerName << " are you ready to begin?\n";
  cin >> input;
  // this is the start of the game
  
  do
  {

    int health = 10;
    int attack = 0;
    int block = 0;
    int turns = 0;
    
    do{ 
      
      turns += 1; 
      
      attack = rand() % 4 + 1; 
      block = rand() % 4 + 1;    
      
      cout << "\nTurn number " << turns << ".\n"; 
      cout << "The fbi agent attacks for " << attack << " points!\n"; 
      cout << "You block for " << block << " points!\n"; 
      
      if(block >= attack){  
        cout << "You successfully blocked! Your health is still at " << health << ".\n";  
      }

      else{ 
        health = health - attack; 
        cout << "The attack hits. Your health is " << health << ".\n";  
      }
      
    }while (turns < 4 && health > 0); 
    
   
    if(health > 0){ 
      cout << "Congratulations " << playerName << "! You successfully stole the Declaration of Independence!\n"; // You can congratulate the player and they win.
    }
    else{ 
      cout << "He's coming.\n";  
      cout << "https://i.pinimg.com/originals/b3/48/10/b34810e01b7b9cc3df68dff202b54e6d.jpg.\n";
    }

    // Last part
    cout << "\n\nPlay again?\n";  
    cin >> input;  
  } while (input != "n" && input != "N");   
 
}