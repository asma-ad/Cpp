#include <iostream>
#include <cstdlib> // for std::srand and std::rand
#include <ctime>   // for std::time
using namespace std;
/*
        Math game
        4/11/2023, 6/11/2023
*/

enum enQuestionsLevel
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    Mixed = 4
};

enum enOperationType
{
    Addition = 1,
    Subtraction = 2,
    Multiplication = 3,
    Division = 4,
    Mix = 5
};

struct stOperation
{
    int number1;
    int number2;
    int result;
    enOperationType opeType;
};

struct stGameResult
{
    int numberOfQuestions;
    string level;
    char opType;
    int rightAnswers;
    int wrongAnswers;
};

int howManyQuestion()
{
    int number;
    do
    {
        cout << "How many questions do you want? ";
        cin >> number;
    } while (number < 1);
    return number;
}

enQuestionsLevel questionLevel()
{
    short level;
    do
    {
        cout << "What level do you want?\n";
        cout << "Easy[1] , Med[2] , Hard[3] , Mix[4]\n";
        cin >> level;
    } while (level < 1 || level > 4);
    return (enQuestionsLevel)level;
}

string levelName(enQuestionsLevel level)
{
    string Name[4] = {"Esay", "Med", "Hard", "Mix"};
    return Name[level - 1];
}

enOperationType operationType()
{
    short opType;
    do
    {
        cout << "What operation do you want?\n";
        cout << "Addition[1] , Subtraction[2] , Multiplication[3] , Division[4], Mix[5]\n";
        cin >> opType;
    } while (opType < 1 || opType > 5);
    return (enOperationType)opType;
}

int randomNumbers(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

char opTypeChar(enOperationType opType)
{
    switch (opType)
    {
    case enOperationType::Addition:
        return '+';
    case enOperationType::Subtraction:
        return '-';
    case enOperationType::Division:
        return '/';
    case enOperationType::Multiplication:
        return '*';
    case enOperationType::Mix:
    {
        int mix = randomNumbers(1, 4);
        char arrMix[4] = {'+', '-', '/', '*'};
        return arrMix[mix - 1];
    }
    }
}

int fillNumbers(enQuestionsLevel level)
{
    /*
        if (level == enQuestionsLevel::Easy)
        {
            operation.number1 = randomNumbers(1, 10);
            operation.number2 = randomNumbers(1, 10);
        }
        else
        {
            operation.number1 = randomNumbers(10, 100);
            operation.number2 = randomNumbers(10, 100);
        }

    return operation;
    */
    if (level == enQuestionsLevel::Easy)
        return randomNumbers(1, 10);
    else if (level == enQuestionsLevel::Med)
        return randomNumbers(1, 50);
    else
        return randomNumbers(10, 100);
}

stOperation operation(enOperationType opType, enQuestionsLevel level)
{
    stOperation operation;
    operation.number1 = fillNumbers(level);
    operation.number2 = fillNumbers(level);
    char op = opTypeChar(opType);

    cout << "\n\n"
         << operation.number1 << "\n"
         << op
         << operation.number2 << "\n"
         << "_______\n";
    cin >> operation.result;

    return operation;
}

bool checkResult(stOperation operation, enOperationType opType)
{
    switch (opType)
    {
    case enOperationType::Addition:
        return (operation.number1 + operation.number2 == operation.result);
    case enOperationType::Subtraction:
        return (operation.number1 - operation.number2 == operation.result);
    case enOperationType::Division:
        return (operation.number1 / operation.number2 == operation.result);
    case enOperationType::Multiplication:
        return (operation.number1 * operation.number2 == operation.result);
        // case enOperationType::Mix:
        //     return;
    }
}

int trueResult(stOperation operation, enOperationType opType)
{
    switch (opType)
    {
    case enOperationType::Addition:
        return (operation.number1 + operation.number2);
    case enOperationType::Subtraction:
        return (operation.number1 - operation.number2);
    case enOperationType::Division:
        return (operation.number1 / operation.number2);
    case enOperationType::Multiplication:
        return (operation.number1 * operation.number2);
        // case enOperationType::Mix:
        //     return;
    }
}

void printResult(stOperation operation, enOperationType opType)
{
    if (!(checkResult(operation, opType)))
    {
        cout << "Fail :(\n";
        cout << "Result is = " << trueResult(operation, opType) << "\n";
        system("color 4F");
    }
    else
    {
        cout << "Pass :)\n";
        system("color 2F");
    }
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
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

stGameResult fillGameResult(stGameResult gamrResult, int howManyQuestion, enQuestionsLevel level, enOperationType opType, int rightAnswers, int wrongAnswers)
{
    gamrResult.numberOfQuestions = howManyQuestion;
    gamrResult.level = levelName(level);
    gamrResult.opType = opTypeChar(opType);
    gamrResult.rightAnswers = rightAnswers;
    gamrResult.wrongAnswers = rightAnswers;

    return gamrResult;
}

void PassFail(int rightAnswers, int wrongAnswers)
{
    if (rightAnswers > wrongAnswers)
        cout << "Pass\n";
    else if (rightAnswers < wrongAnswers)
        cout << "Fail\n";
    else
        cout << "Draw\n";
}

void ShowFinalGameResults(stGameResult gamrResult)
{
    cout << Tabs(2) << "_____________________[Final Result]_____________________\n\n";
    cout << Tabs(2);
    PassFail(gamrResult.rightAnswers, gamrResult.wrongAnswers);
    cout << Tabs(2) << "________________________________________________________\n";
    cout << Tabs(2) << "Number of questions  : " << gamrResult.numberOfQuestions << endl;
    cout << Tabs(2) << "Level's game         : " << gamrResult.level << endl;
    cout << Tabs(2) << "Operation type       : " << gamrResult.opType << endl;
    cout << Tabs(2) << "Right answers        : " << gamrResult.rightAnswers << endl;
    cout << Tabs(2) << "Wrong answers        : " << gamrResult.wrongAnswers << endl;
    cout << Tabs(2) << "________________________________________________________\n";
}

stGameResult playGame(enOperationType opType, enQuestionsLevel level, int howManyQuestion)
{
    stGameResult gamrResult;
    int rightAnswers = 0, wrongAnswers = 0;

    for (int i = 0; i < howManyQuestion; i++)
    {
        cout << "\nQuestion[" << i + 1 << "/" << howManyQuestion << "]:\n";
        printResult(operation(opType, level), opType);
        // counter
    }

    return fillGameResult(gamrResult, howManyQuestion, level, opType, rightAnswers, wrongAnswers);
}

void startGame()
{
    char playAgain = 'Y';
    do
    {
        ResetScreen();
        stGameResult gameResult = playGame(operationType(), questionLevel(), howManyQuestion());
        ShowFinalGameResults(gameResult);

        cout << "Do you want to play again? Y/N\n";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));

    startGame();

    return 0;
}