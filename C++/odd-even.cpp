#include <iostream>
#include <vector>

int main()
{
  int num, odd = 0, even = 0;

  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

  for (int idx = numbers.size() + 1; numbers.size() < idx; idx--){

    num = numbers[idx] % 2;
    // Als het een even nummer is komt er een 0 uit. Een oneven nummer zou 1 zegggen. 2 % 2 = 0, 3 % 2 = 1.

    if (num == 0){
      even++; //even +1.
      numbers.pop_back(); //haal het achterste nummer weg
    }

    else if (num == 1){
      odd++;
      numbers.pop_back();
    }
  }

  std::cout << "Sum of even numbers is " << even << "\n";
  std::cout << "Sum of odd numbers is " << odd << "\n";
}
