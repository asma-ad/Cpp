#include <iostream>
using namespace std;

// PROJECT 1: Stone, Paper, Scissor
// 25/10/2023

enum enChoices
{
    stone = 1,
    paper = 2,
    scissors = 3
};

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

int randomNumbers(int from, int to)
{
    return rand() % (to - from - 1) + from;
}

void printChoices()
{
    cout << "Your choices: ";
    cout << "Stone[1], Paper[2], Scissors[3]\n";
}

void choices(short choice)
{
    switch (choice)
    {
    case enChoices::paper:
        cout << "Paper";
        break;
    case enChoices::scissors:
        cout << "scissors";
        break;
    case enChoices::stone:
        cout << "stone";
    default:
        break;
    }
}

void winner(short player, short computer, short &winner1, short &winner2, short &draw)
{
    if (player == computer)
    {
        cout << "[No winner]";
        system("Color E");
        draw++;
    }
    else if (player == enChoices::paper && computer == enChoices::stone)
    {
        cout << "[Player]";
        system("Color 2");
        winner1++;
    }
    else if (player == enChoices::scissors && computer == enChoices::paper)
    {
        cout << "[Player]";
        system("Color 2");
        winner1++;
    }
    else if (player == enChoices::stone && computer == enChoices::scissors)
    {
        cout << "[Player]";
        system("Color 2");
        winner1++;
    }
    else
    {
        cout << "[Computer]";
        system("Color 4");
        winner2++;
    }
}

void result(int round, int player, int computer, int draw)
{
    cout << "\n------------------------------------------------------\n";
    cout << "\t\t +++ G A M E O V E R +++";
    cout << "\n------------------------------------------------------\n";

    cout << "---------------------Game result-----------------------\n";
    cout << "Game rounds: " << round << "\n";
    cout << "Player won times: " << player << "\n";
    cout << "Computer won times: " << computer << "\n";
    cout << "Draw times: " << draw << "\n";
    cout << "Final winner: ";
    if (player > computer)
    {
        cout << "[Player]\n";
        system("Color 2");
    }
    else if (player < computer)
    {
        cout << "[Computer]\n";
        system("Color 4");
    }
    else
    {
        cout << "[Draw]\n";
        system("Color E");
    }
    cout << "------------------------------------------------------\n";
}

void roundGame()
{
    short round = readPositiveNumber("\nHow many round do you want to play (1 to 10)?\n");
    short user_input = 0, winner1 = 0, winner2 = 0, draw = 0;

    for (int i = 0; i < round; i++)
    {
        cout << "Round [" << i + 1 << "] begins: \n";
        printChoices();
        cin >> user_input;

        short comp = randomNumbers(1, 3);
        cout << "\n----------------------Round[" << i + 1 << "]------------------------\n";
        cout << "Player1 choice: ";
        choices(user_input);
        cout << "\nComputer choice: ";
        choices(comp);
        cout << "\nRound winner: ";
        winner(user_input, comp, winner1, winner2, draw);
        cout << "\n------------------------------------------------------\n\n";
    }

    result(round, winner1, winner2, draw);
}

int main()
{
    srand(unsigned(time(NULL)));

    char round;
    do
    {
        roundGame();
        cout << "Do you want play again? [Y/N]?  ";
        cin >> round;
    } while (round == 'y' || round == 'Y');

    return 0;
}