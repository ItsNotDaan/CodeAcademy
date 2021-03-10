#include <iostream>
#include <stdlib.h>
//#include <dos.h>   //for delay() Hallo Hallo

int main(){
  //Rock paper scissors
  srand (time(NULL)); //Random seed every second.

  int computer = rand() % 3 + 1; //1, 2 or 3. Three choices.
  int user = 0;

  std::cout << "-------------------\n";
  std::cout << "Rock Paper Scissors\n";
  std::cout << "-------------------\n\n";

  std::cout << "1) ✊\n";
  //delay(500);
  std::cout << "2) ✋\n";
  //delay(500);
  std::cout << "3) ✌️\n";
  //delay(500);
  std::cout << "Shoot! ";
  std::cin >> user;

  //Rock vs paper
  if (user == 1 && computer == 2)
  {
    std::cout << "Computer wins with PAPER!\n";
  }
  else if (user == 2 && computer == 1)
  {
    std::cout << "Player wins with PAPER!\n";
  }

  //Paper vs scissors
  else if (user == 2 && computer == 3)
  {
    std::cout << "Computer wins with SCISSORS!\n";
  }
  else if (user == 3 && computer == 2)
  {
    std::cout << "Player wins with SCISSORS!\n";
  }

  //Rock vs Scissors
  else if (user == 3 && computer == 1)
  {
    std::cout << "Computer wins with ROCK!\n";
  }
  else if (user == 3 && computer == 1)
  {
    std::cout << "Player wins with ROCK!\n";
  }

  else{
    std::cout << "DRAW!\n";
  }
}
