#include <iostream>
#include <string>

int main()
{
    int i;
    int number;
    const std::string brus [] = {"1. Cola (20,-), ", "2. Fanta (15,-), ", "3. Urge(16,-), ", "4. Sprite (10,-), ", "5. Solo (19,-)"};


    std::cout << "Du kan velge mellom følgende brus:  ";
    for(i=0; i<=4; i++)
    {
       std::cout <<brus[i];
    }

    std::cout<<""<< std::endl;
    std::cout <<"Trykk nummeret på ønsket brus "<< std::endl;
    std::cin >> number;

      const std::string valgAvBrus [] = {"Du har valgt Cola, ", "Du ha valgt Fanta, ", "Du har valgt Urge(16,-), ", "Du har valgt Sprite, ", "Du har valgt Solo"};
      switch (number) {
      case 0:
          number == 1
          break;
      default:
          break;
      }

    return 0;
}
