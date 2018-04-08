#include <iostream>

using namespace std;

int main()
{
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;
   
    if(number >= 1 && number <= 10)
    {
        switch(number)
        {
            case 1:
                std::cout<<"One";
                break;

            case 2:
                std::cout<<"Two";
                break;
            case 3:
                std::cout<<"Three";
                break;
            case 4:
                std::cout<<"Four";
                break;
            case 5:
                std::cout<<"Five";
                break;
            case 6:
                std::cout<<"Six";
                break;
            case 7:
                std::cout<<"Seven";
                break;
            case 8:
                std::cout<<"Eight";
                break;
            case 9:
                std::cout<<"Nine";
                case 10:
                std::cout<<"Ten";
                break;
        }
    }
    else
    {
        std::cout<<"Enter number between 1 to 10 only";
    }
        
     

    return 0;
}
