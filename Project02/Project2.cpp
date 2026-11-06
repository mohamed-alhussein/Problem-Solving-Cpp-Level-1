/*
Project 2 (Math Quiz Game):
Write a small math quiz program.

Requirements:
- Ask the player how many questions he/she wants to answer (1 to 10).
- Ask for the questions level:
    [1] Easy   : numbers from 1 to 10
    [2] Medium : numbers from 10 to 50
    [3] Hard   : numbers from 50 to 100
    [4] Mix    : a random level for each question
- Ask for the operation type: Add, Subtract, Multiply, Divide, or Mix.
- Generate random questions according to the chosen level and operation type.
- Show the questions one by one. After each answer, tell the player if it is
  right or wrong, and show the correct answer when it is wrong.
- At the end, print the final result (Pass / Fail) with the quiz summary:
  number of questions, level, operation type, right answers, wrong answers.
- The player passes when the right answers are not fewer than the wrong answers.
- Then ask the user if he/she wants to play again.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

// ============================== Enums ==============================

enum EnQuestionLevel { EasyLevel = 1, MdlLevel = 2, HardLevel = 3, Mix = 4 };
enum EnOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

// ============================= Structs =============================

struct StQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    EnOperationType OperationType = Add;
    EnQuestionLevel QuestionLevel = EasyLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

struct StQuiz
{
    StQuestion QuestionList[100];
    short NumberOfQuestion = 0;
    EnQuestionLevel QuestionLevel = EasyLevel;
    EnOperationType OpType = Add;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool IsPass = false;
};

// ========================= Helper functions ========================

int RandomNumber(int From, int To) {
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}

// Reads a number and keeps asking until it is between From and To
// (also protects the program from non-numeric input).
short ReadNumberInRange(string Message, short From, short To) {
    short Number = 0;
    do
    {
        cout << Message;
        cin >> Number;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            Number = From - 1;
        }
    } while (Number < From || Number > To);
    return Number;
}

// ============================ Reading data =========================

short ReadHowManyQuestion() {
    return ReadNumberInRange("How Many Question do you want to answer ? [1 to 10] ", 1, 10);
}

EnQuestionLevel ReadQuestionLevel() {
    short QuestionLevel = ReadNumberInRange("Enter Question Level [1] Easy ,[2] Med ,[3] Hard ,[4] Mix ? ", 1, 4);
    return (EnQuestionLevel)QuestionLevel;
}

EnOperationType ReadOpType() {
    short OpType = ReadNumberInRange("Enter operation Type [1] Add ,[2] Sub ,[3] Mul ,[4] Div ,[5] Mix ? ", 1, 5);
    return (EnOperationType)OpType;
}

int ReadQuestionAnswer() {
    int Answer = 0;
    while (!(cin >> Answer))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a valid number : ";
    }
    return Answer;
}

// ======================== Questions generation =====================

EnOperationType GetRandomOperationType() {
    int Op = RandomNumber(1, 4);
    return (EnOperationType)Op;
}

int SimpleCalculator(int Number1, int Number2, EnOperationType OpType) {
    switch (OpType)
    {
    case EnOperationType::Add:
        return Number1 + Number2;
    case EnOperationType::Sub:
        return Number1 - Number2;
    case EnOperationType::Mult:
        return Number1 * Number2;
    case EnOperationType::Div:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

StQuestion GenerateQuestion(EnQuestionLevel QuestionLevel, EnOperationType OpType) {
    StQuestion Question;

    if (QuestionLevel == EnQuestionLevel::Mix)
    {
        QuestionLevel = (EnQuestionLevel)RandomNumber(1, 3);
    }

    if (OpType == EnOperationType::MixOp)
    {
        OpType = GetRandomOperationType();
    }

    Question.QuestionLevel = QuestionLevel;
    Question.OperationType = OpType;

    switch (QuestionLevel)
    {
    case EnQuestionLevel::EasyLevel:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        return Question;

    case EnQuestionLevel::MdlLevel:
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        return Question;

    case EnQuestionLevel::HardLevel:
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        return Question;

    default:
        break;
    }
    return Question;
}

void GenerateQuizQuestions(StQuiz& Quiz) {
    for (short Question = 0; Question < Quiz.NumberOfQuestion; Question++)
    {
        Quiz.QuestionList[Question] = GenerateQuestion(Quiz.QuestionLevel, Quiz.OpType);
    }
}

// =============================== Names =============================

string GetOpTypeSymbol(EnOperationType OpType) {
    switch (OpType)
    {
    case EnOperationType::Add:
        return "+";
    case EnOperationType::Sub:
        return "-";
    case EnOperationType::Mult:
        return "*";
    case EnOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}

string GetQuestionLevelText(EnQuestionLevel QuestionLevel) {
    string arrQuestionLevelText[4] = { "Easy", "Med", "Hard", "Mix" };
    return arrQuestionLevelText[QuestionLevel - 1];
}

string GetFinalResultText(bool Pass) {
    if (Pass)
        return "PASS :-)";
    else
        return "Fail :-(";
}

// ============================ Quiz flow ============================

void PrintTheQuestion(StQuiz& Quiz, short QuestionNumber) {
    cout << "\n";
    cout << "Question [" << QuestionNumber + 1 << "/" << Quiz.NumberOfQuestion << "] \n\n";
    cout << Quiz.QuestionList[QuestionNumber].Number1 << endl;
    cout << Quiz.QuestionList[QuestionNumber].Number2 << " ";
    cout << GetOpTypeSymbol(Quiz.QuestionList[QuestionNumber].OperationType);
    cout << "\n-------------------" << endl;
}

void CorrectQuestionAnswers(StQuiz& Quiz, short QuestionNumber) {
    if (Quiz.QuestionList[QuestionNumber].PlayerAnswer != Quiz.QuestionList[QuestionNumber].CorrectAnswer)
    {
        Quiz.QuestionList[QuestionNumber].AnswerResult = false;
        Quiz.NumberOfWrongAnswers++;

        cout << "Wrong Answer :-(\n";
        cout << "The right answer is :";
        cout << Quiz.QuestionList[QuestionNumber].CorrectAnswer;
        cout << "\n";
    }
    else
    {
        Quiz.QuestionList[QuestionNumber].AnswerResult = true;
        Quiz.NumberOfRightAnswers++;
        cout << "Right Answer :-)\n";
    }
    cout << endl;
}

void AskAndCorrectQuestionListAnswers(StQuiz& Quiz) {
    for (short QuestionNumber = 0; QuestionNumber < Quiz.NumberOfQuestion; QuestionNumber++)
    {
        PrintTheQuestion(Quiz, QuestionNumber);
        Quiz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectQuestionAnswers(Quiz, QuestionNumber);
    }
    Quiz.IsPass = (Quiz.NumberOfRightAnswers >= Quiz.NumberOfWrongAnswers);
}

void PrintQuizResult(StQuiz Quiz) {
    cout << "\n";
    cout << "-----------------------------\n\n";
    cout << "Final Result is " << GetFinalResultText(Quiz.IsPass);
    cout << "\n-----------------------------\n\n";

    cout << "Number of Question      :" << Quiz.NumberOfQuestion << endl;
    cout << "Question Level          :" << GetQuestionLevelText(Quiz.QuestionLevel) << endl;
    cout << "OpType                  :" << GetOpTypeSymbol(Quiz.OpType) << endl;
    cout << "Number of Right Answers :" << Quiz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong Answers :" << Quiz.NumberOfWrongAnswers << endl;
    cout << "-----------------------------\n";
}

void PlayMathGame() {
    StQuiz Quiz;
    Quiz.NumberOfQuestion = ReadHowManyQuestion();
    Quiz.QuestionLevel = ReadQuestionLevel();
    Quiz.OpType = ReadOpType();
    GenerateQuizQuestions(Quiz);
    AskAndCorrectQuestionListAnswers(Quiz);
    PrintQuizResult(Quiz);
}

// ============================= Game loop ===========================

void ResetScreen() {
    system("cls");
    system("color 0F");
}

void StartGame() {
    char PlayAgain = 'Y';
    do
    {
        ResetScreen();
        PlayMathGame();
        cout << "\nDo you want to play again ? Y/N ? ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}