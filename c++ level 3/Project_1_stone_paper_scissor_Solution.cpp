#include <iostream>
using namespace std;

// PROJECT 1: Stone, Paper, Scissor (Solution)
// 03/11/2023

/*
enum        => enGameChoice, enWinner
struct      => stRoundInfo, stGameResults
funnction   => RandomNumber, WinnerName, WhoWonTheRound, ChoiceName, SetWinnerScreenColor,
               PrintRoundResults, WhoWonTheGame, FillGameResults, ReadPlayer1Choice, GetComputerChoice,
               PlayGame, Tabs, ShowGameOverScreen, ShowFinalGameResults, ReadHowManyRounds, ResetScreen,
               StartGame
*/

enum enGameChoice
{
    stone = 1,
    paper = 2,
    scissors = 3
};

enum enWinner
{
    player = 1,
    computer = 2,
    draw = 3
};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice PlayerChoice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResults
{
    short GameRounds = 0;
    short PlayerWinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

int randomNumbers(int from, int to)
{
    return rand() % (to - from - 1) + from;
}

short howManyRound()
{
    short round;
    do
    {
        cout << "How many rounds?\n";
        cin >> round;
    } while (round < 1 || round > 10);

    return round;
}

enGameChoice readPlayerChoice()
{
    short PlayerChoice = 1;
    do
    {
        cout << "\nYour Choice: \n[1]:Stone, [2]:Paper, [3]:Scissors ? ";
        cin >> PlayerChoice;
    } while (PlayerChoice < 1 || PlayerChoice > 3);

    return (enGameChoice)PlayerChoice;
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)randomNumbers(1, 3);
}

enWinner WhoWonTheRound(stRoundInfo roundInfo)
{
    if (roundInfo.PlayerChoice == roundInfo.ComputerChoice)
        return enWinner::draw;

    switch (roundInfo.PlayerChoice)
    {
    case enGameChoice::stone:
        if (roundInfo.ComputerChoice == enGameChoice::paper)
            return enWinner::computer;
        break;
    case enGameChoice::paper:
        if (roundInfo.ComputerChoice == enGameChoice::scissors)
            return enWinner::computer;
        break;
    case enGameChoice::scissors:
        if (roundInfo.ComputerChoice == enGameChoice::stone)
            return enWinner::computer;
        break;
    }
    return enWinner::player;
}

string WinnerName(enWinner winner)
{
    string winnerName[3] = {"Player", "Computer", "No winner"};
    return winnerName[winner - 1];
}

string ChoiceName(enGameChoice choice)
{
    string ChoiceName[3] = {"Stone", "Paper", "Scissors"};
    return ChoiceName[choice - 1];
}

void SetWinnerScreenColor(enWinner winner)
{
    switch (winner)
    {
    case enWinner::player:
        system("color 2F"); // turn screen to Green
        break;
    case enWinner::computer:
        system("color 4F"); // turn screen to Red
        cout << "\a";       // bell
        break;
    case enWinner::draw:
        system("color 6F"); // turn screen to Yellow
        break;
    }
}

void PrintRoundResults(stRoundInfo roundInfo)
{
    cout << "\n____________Round [" << roundInfo.RoundNumber << "] ____________\n\n";
    cout << "Player Choice   : " << ChoiceName(roundInfo.PlayerChoice) << endl;
    cout << "Computer Choice : " << ChoiceName(roundInfo.ComputerChoice) << endl;
    cout << "Round Winner    : [" << roundInfo.WinnerName << "] \n";
    cout << "__________________________________\n"
         << endl;

    SetWinnerScreenColor(roundInfo.Winner);
}

enWinner WhoWonTheGame(short PlayerWinTimes, short ComputerWinTimes)
{
    if (PlayerWinTimes > ComputerWinTimes)
        return enWinner::player;
    if (PlayerWinTimes < ComputerWinTimes)
        return enWinner::computer;
    else
        return enWinner::draw;
}

stGameResults FillGameResults(short howManyRound, short PlayerWinTimes, short ComputerWinTimes, short DrawTimes)
{
    stGameResults gameResult;

    gameResult.GameRounds = howManyRound;
    gameResult.PlayerWinTimes = PlayerWinTimes;
    gameResult.ComputerWinTimes = ComputerWinTimes;
    gameResult.DrawTimes = DrawTimes;
    gameResult.GameWinner = WhoWonTheGame(PlayerWinTimes, ComputerWinTimes);
    gameResult.WinnerName = WinnerName(gameResult.GameWinner);

    return gameResult;
}

string Tabs(short NumberOfTabs)
{
    string t = "";
    for (int i = 1; i < NumberOfTabs; i++)
    {
        t = t + "\t";
        cout << t;
    }
    return t;
}

void ShowGameOverScreen()
{
    cout << Tabs(2) << "__________________________________________________________\n\n";
    cout << Tabs(2) << "                 +++ G a m e  O v e r +++\n";
    cout << Tabs(2) << "__________________________________________________________\n\n";
}

void ShowFinalGameResults(stGameResults GameResults)
{
    cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
    cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << "Player  won times  : " << GameResults.PlayerWinTimes << endl;
    cout << Tabs(2) << "Computer won times : " << GameResults.ComputerWinTimes << endl;
    cout << Tabs(2) << "Draw times         : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner       : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "___________________________________________________________\n";
    SetWinnerScreenColor(GameResults.GameWinner);
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}

stGameResults PlayGame(short howManyRound)
{
    stRoundInfo roundInfo;
    short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0; // counters

    for (short i = 0; i < howManyRound; i++)
    {
        cout << "\nRound[" << i + 1 << "] begins:\n";
        roundInfo.RoundNumber = i + 1;
        roundInfo.PlayerChoice = readPlayerChoice();
        roundInfo.ComputerChoice = GetComputerChoice();
        roundInfo.Winner = WhoWonTheRound(roundInfo);
        roundInfo.WinnerName = WinnerName(roundInfo.Winner);

        if (roundInfo.Winner == enWinner::player)
            PlayerWinTimes++;
        if (roundInfo.Winner == enWinner::computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

        PrintRoundResults(roundInfo);
    }

    return FillGameResults(howManyRound, PlayerWinTimes, ComputerWinTimes, DrawTimes);
}

void startGame()
{
    char playAgain = 'Y';
    do
    {

        ResetScreen();
        stGameResults GameResults = PlayGame(howManyRound());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResults);
        cout << endl
             << Tabs(3) << "Do you want to play again? Y/N? ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
}

int main()
{
    srand(unsigned(time(NULL)));
    startGame();

    return 0;
}