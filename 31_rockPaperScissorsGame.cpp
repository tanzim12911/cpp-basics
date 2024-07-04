#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

    char player;
    char computer;

    player = getUserChoice();
    computer = getComputerChoice();

    std::cout << "Your choice: ";
    showChoice(player);

    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;

    do
    {
        std::cout << "Rock-Paper-Scissors Game!\n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
        // not using break because when we use return we break
    case 2:
        return 'p';
    case 3:
        return 's';

    default:
        break;
    }
    return 0;
}

void showChoice(char choice)
{

    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;

    default:
        break;
    }
}

void chooseWinner(char player, char computer)
{

    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie!\n";
        }
        else if (computer = 'p')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            std::cout << "It's a tie!\n";
        }
        else if (computer = 's')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    case 's':
        if (computer == 's')
        {
            std::cout << "It's a tie!\n";
        }
        else if (computer = 'r')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;

    default:
        break;
    }
}
