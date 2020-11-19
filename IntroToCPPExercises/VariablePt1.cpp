// IntroToCPPExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void main()
{
    int height = 0;
    char firstLetterOfName = 0;
    int avatarHP;

    std::cout << "Welcome to Zorp!" << std::endl;
    std::cout << "Zorp is a game of adventure, danger, and low cunning." 
                                        << std::endl;
    std::cout << "It is DEFINITELY not related to any other text-based adventure game." 
                                                << std::endl << std::endl;

    std::cout << "First, some questions." << std::endl;
    std::cout << "What's your height, in centimeters? " << std::endl;
    
    std::cin >> height;
    if (std::cin.fail()) 
    {
        std::cout << "You have failed the first challenge and are eaten by a grue." << std::endl;
    }
    else
    {
        std::cout << "You entered " << height << "cm." << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(std::cin.rdbuf()->in_avail());

    std::cout << "What is the first letter of your name? " << std::endl;

    std::cin >> firstLetterOfName;
    if (std::cin.fail() || !isalpha(firstLetterOfName))
    {
        std::cout << "You have failed the second challenge and are eaten by a grue." << std::endl;
    }
    else
    {
        std::cout << "You entered " << firstLetterOfName << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(std::cin.rdbuf()->in_avail());

    if (firstLetterOfName != 0)
    {
        avatarHP = (float)height / (firstLetterOfName * 0.02f);
    }
    else
    {
        avatarHP = 0;
    }

    std::cout << std::endl << "Using a complex deterministic algorithm, it has been calculated that you have "
                                << avatarHP << " hit point(s)." 
                                        << std::endl;

    std::cout << std::endl << "Press 'Enter' to exit the program." << std::endl;
    std::cin.get();
    return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
