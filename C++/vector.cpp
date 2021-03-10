#include <iostream>
#include <vector>

int main() {

  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

  // Add more
  grocery.push_back("salade");
  grocery.push_back("Loek");
  grocery.push_back("Soep");
  grocery.push_back("Brood");

  std::cout << grocery.size() << "\n";

}
