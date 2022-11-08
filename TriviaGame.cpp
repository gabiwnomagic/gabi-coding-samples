// trivia taken from https://www.boredpanda.com/funny-trivia-questions/?utm_source=google&utm_medium=organic&utm_campaign=organic
// Run the code, answer each question using the 1, 2, 3, 4 keys

#include <iostream>
#include <string>

using namespace std;

int main()
{ 
    {
    std::string name;
    std::cout << "Hello, please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << std::endl;
    std::cout << "Try your best on this random trivia quiz!" << name << endl;
    std::cout << "Do you wish to begin?" << endl;
    {
        int choice;
        do
        {
            std::cout << " 1. Yes\n ";
            std::cout << "2. No\n ";
            std::cout << "Enter Choice: \n";
            std::cin >> choice;
            if (choice == 2)
            {
                std::cout << "Goodbye\n";
                exit(0);
            }
            else if (choice == 1);
            break;
            continue;
            std::cout << "Okay, let's start\n";

        } while (choice <= 0 || choice >= 3);
    }

    int choiceOne;
    do
    {
        std::cout << " What fictional character is believed to be real by more than 25% of Americans?\n";
        std::cout << "1. Where's Waldo\n";
        std::cout << "2. Sherlock Holmes\n";
        std::cout << "3. Harry Potter\n";
        std::cout << "4. Santa Claus\n";
        std::cout << "Enter answer: ";
        std::cin >> choiceOne;
        if (choiceOne == 4)
            std::cout << "Wrong, the answer is Sherlock Holmes\n";
        else if (choiceOne == 1)
            std::cout << "Wrong, the answer is Sherlock Holmes\n";
        else if (choiceOne == 3)
            std::cout << "Wrong, the asnwer is Sherlock Holmes\n";
        else if (choiceOne == 2)
       
        {
            std::cout << "Correct! Next Question\n";
            break;
            continue;
        }
        else
        {
            std::cout << "Invalid input\n";
            continue;
        }

    } while (choiceOne <= 0 || choiceOne >= 6);
    

    int choiceTwo;
    do
    {
        std::cout << " What country has more than half of its people believing in elves, dwarves, and ghosts?\n";
        std::cout << "1. Ireland\n";
        std::cout << "2. Norway\n";
        std::cout << "3. China\n";
        std::cout << "4. Iceland\n";
        std::cout << "Enter answer: ";
        std::cin >> choiceTwo;
        if (choiceTwo == 1)
            std::cout << "Wrong, the answer is Iceland\n";
        else if (choiceTwo == 2)
            std::cout << "Wrong, the answer is Iceland\n";
        else if (choiceTwo == 3)
            std::cout << "Wrong, the answer is Iceland\n";
        else if (choiceTwo == 4)
        {
            std::cout << "Correct! Next Question\n";
            break;
            continue;
        }
        else
        {
            std::cout << "Invalid input\n";
            continue;
        }
    } while (choiceTwo <= 0 || choiceTwo >= 6);
    
    
    int choiceThree;
    do
    {
        std::cout << " In what state is it illegal to hunt unicorns?\n";
        std::cout << "1. Michigan\n";
        std::cout << "2. Oklahoma\n";
        std::cout << "3. Maine\n";
        std::cout << "4. Iowa\n";
        std::cout << "Enter answer: ";
        std::cin >> choiceThree;
        if (choiceThree == 4)
            std::cout << "Wrong, the answer is Michigan\n";
        else if (choiceThree == 3)
            std::cout << "Wrong, the answer is Michigan\n";
        else if (choiceThree == 2)
            std::cout << "Wrong, the answer us Michigan\n";
        else if (choiceThree == 1)
        {
            std::cout << "Correct! Next Question\n";
            break;
            continue;
        }
        else
        {
            std::cout << "Invalid input\n";
            continue;
        }
    } while (choiceThree <= 0 || choiceThree >= 6);

    int choiceFour;
    do
    {
        std::cout << " How many years old is the oldest tortoise?\n";
        std::cout << "1. 520 years old\n";
        std::cout << "2. 85 years old\n";
        std::cout << "3. 189 years old\n";
        std::cout << "4. 250 years old\n";
        std::cout << "Enter answer: ";
        std::cin >> choiceFour;
        if (choiceFour == 4)
            std::cout << "Wrong, the answer is 189 years old\n";
        else if (choiceFour == 2)
            std::cout << "Wrong, the answer is 189 years old\n";
        else if (choiceFour == 1)
            std::cout << "Wrong, the answer is 189 years old\n";
        else if (choiceFour == 3)
        {
            std::cout << "Correct! Next Question\n";
            break;
            continue;
        }
        else
        {
            std::cout << "Invalid input\n";
            continue;
        }
    } while (choiceFour <= 0 || choiceFour >= 6);

    int choiceFive;
    do
    {
        std::cout << "Who composed the music for Sonic the Hedgehog 3 videogame?\n";
        std::cout << "1. Ludwig Van Beethoven\n";
        std::cout << "2. Michael Jackson\n";
        std::cout << "3. Andre Rieu\n";
        std::cout << "4. Britney Spears\n";
        std::cout << "Enter answer: ";
        std::cin >> choiceFive;
        if (choiceFive == 4)
            std::cout << "Wrong, the answer is Michael Jackson, Quiz Over\n";
        else if (choiceFive == 3)
            std::cout << "Wrong, the answer is Michael Jackson, Quiz over\n";
        else if (choiceFive == 1)
            std::cout << "Wrong, the answer is Michael Jackson, Quiz over\n";
        else if (choiceFive == 2)
        {
            std::cout << "Correct! Congrats, you finished " << name << endl;
            break;
            continue;
        }
        else
        {
            std::cout << "Invalid input\n";
            continue;
        }
    } while (choiceFive <= 0 || choiceFive >= 6);

    
    }

}