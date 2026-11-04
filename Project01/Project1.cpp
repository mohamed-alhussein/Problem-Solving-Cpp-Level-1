/*
Project 1 (Stone-Paper-Scissors):
Write a small game program for Stone-Paper-Scissors.

Requirements:
- Ask for how many rounds the game will be.
- Start each round: Player vs Computer.
- If the computer wins the round, ring a bell and turn the screen red.
- After all the rounds, show the Game Over screen, then print the game results.
- Then ask the user if he/she wants to play again.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

// ============================== Enums ==============================

enum EnGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum EnWinner { Player1 = 1, Computer = 2, NoWinner = 3 };

// ============================= Structs =============================

struct StGameRound
{
  short NumberRound = 0;
  EnGameChoice PlayerChoice = Stone;
  EnGameChoice ComputerChoice = Stone;
  EnWinner Winner = NoWinner;
  string NameWinner = "";
};

struct GameResult
{
  short GameRounds = 0;
  short PlayerWinTimes = 0;
  short ComputerWinTimes = 0;
  short DrawTimes = 0;
  EnWinner GameWinner = NoWinner;
  string WinnerName = "";
};

// ========================= Helper functions ========================

int RandomNumber(int From, int To) {
  int randnum = rand() % (To - From + 1) + From;
  return randnum;
}

string Tabs(short NumberOfTabs) {
  string t = "";
  for (short i = 1; i <= NumberOfTabs; i++)
  {
    t = t + "\t";
  }
  return t;
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

// =============================== Names =============================

string NameChoice(EnGameChoice Choice) {
  string arrNameChoice[3] = { "Stone", "Paper", "Scissors" };
  return arrNameChoice[Choice - 1];
}

string NameWinner(EnWinner Winner) {
  string arrNameWinner[3] = { "Player1", "Computer", "NoWinner" };
  return arrNameWinner[Winner - 1];
}

// =============================== Screen ============================

void ResetScreen() {
  system("cls");
  system("color 0F");
}

void ShowGameOverScreen() {
  cout << endl << endl;
  cout << Tabs(2) << "-----------------------------------------------------------------------\n\n";
  cout << Tabs(2) << "                     +++ G A M E  O V E R +++\n\n";
  cout << Tabs(2) << "-----------------------------------------------------------------------\n\n";
}

void SetWinnerScreenColor(EnWinner Winner) {
  switch (Winner)
  {
  case EnWinner::Player1:
    system("color 2F");   // green
    break;
  case EnWinner::Computer:
    system("color 4F");   // red
    cout << "\a";         // bell
    break;
  default:
    system("color 6F");   // yellow
    break;
  }
}

// ============================ Game logic ===========================

short HowManyRounds() {
  return ReadNumberInRange("How Many Rounds 1 to 10 ? ", 1, 10);
}

EnGameChoice ReadPlayerChoice() {
  short Choice = ReadNumberInRange("Your Choice : [1]:Stone ,[2]:Paper ,[3]:Scissors ? ", 1, 3);
  return (EnGameChoice)Choice;
}

EnGameChoice GetComputerChoice() {
  return (EnGameChoice)RandomNumber(1, 3);
}

EnWinner WhoWonTheRound(StGameRound RoundInfo) {
  if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
  {
    return EnWinner::NoWinner;
  }

  switch (RoundInfo.PlayerChoice)
  {
  case EnGameChoice::Stone:
    if (RoundInfo.ComputerChoice == EnGameChoice::Paper)
    {
      return EnWinner::Computer;
    }
    break;

  case EnGameChoice::Paper:
    if (RoundInfo.ComputerChoice == EnGameChoice::Scissors)
    {
      return EnWinner::Computer;
    }
    break;

  case EnGameChoice::Scissors:
    if (RoundInfo.ComputerChoice == EnGameChoice::Stone)
    {
      return EnWinner::Computer;
    }
    break;
  }

  return EnWinner::Player1;
}

EnWinner WhoWonTheGame(short PlayerWinTimes, short ComputerWinTimes) {
  if (PlayerWinTimes > ComputerWinTimes)
    return EnWinner::Player1;
  else if (ComputerWinTimes > PlayerWinTimes)
    return EnWinner::Computer;
  else
    return EnWinner::NoWinner;
}

GameResult FillGameResult(short GameRounds, short PlayerWinTimes, short ComputerWinTimes, short DrawTimes) {
  GameResult GameRes;
  GameRes.GameRounds = GameRounds;
  GameRes.PlayerWinTimes = PlayerWinTimes;
  GameRes.ComputerWinTimes = ComputerWinTimes;
  GameRes.DrawTimes = DrawTimes;
  GameRes.GameWinner = WhoWonTheGame(PlayerWinTimes, ComputerWinTimes);
  GameRes.WinnerName = NameWinner(GameRes.GameWinner);
  return GameRes;
}

// ============================= Printing ============================

void PrintRoundResult(StGameRound RoundInfo) {
  cout << "---------------------[" << RoundInfo.NumberRound << "]---------------------\n\n";
  cout << "Player Choice   :" << NameChoice(RoundInfo.PlayerChoice) << endl;
  cout << "Computer Choice :" << NameChoice(RoundInfo.ComputerChoice) << endl;
  cout << "Round Winner    :[" << RoundInfo.NameWinner << "]" << endl;
  cout << "\n---------------------------------------------------------------------------\n";
  SetWinnerScreenColor(RoundInfo.Winner);
}

void ShowFinalResultGame(GameResult GameEnd) {
  cout << Tabs(2) << "--------------------------------------[ Game Result ]----------------------------\n";
  cout << Tabs(2) << "Game Rounds        :" << GameEnd.GameRounds << endl;
  cout << Tabs(2) << "Player1 Won Times  :" << GameEnd.PlayerWinTimes << endl;
  cout << Tabs(2) << "Computer Won Times :" << GameEnd.ComputerWinTimes << endl;
  cout << Tabs(2) << "Draw Times         :" << GameEnd.DrawTimes << endl;
  cout << Tabs(2) << "Final Winner       :" << GameEnd.WinnerName << endl;
  cout << Tabs(2) << "--------------------------------------------------------------------------------\n";
  SetWinnerScreenColor(GameEnd.GameWinner);
}

// ============================= Game loop ===========================

GameResult PlayGame(short HowManyRounds) {
  StGameRound RoundInfo;
  short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

  for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
  {
    cout << "\nRound [" << GameRound << "] begins :" << endl;
    RoundInfo.NumberRound = GameRound;
    RoundInfo.PlayerChoice = ReadPlayerChoice();
    RoundInfo.ComputerChoice = GetComputerChoice();
    RoundInfo.Winner = WhoWonTheRound(RoundInfo);
    RoundInfo.NameWinner = NameWinner(RoundInfo.Winner);

    if (RoundInfo.Winner == EnWinner::Player1)
      PlayerWinTimes++;
    else if (RoundInfo.Winner == EnWinner::Computer)
      ComputerWinTimes++;
    else
      DrawTimes++;

    PrintRoundResult(RoundInfo);
  }
  return FillGameResult(HowManyRounds, PlayerWinTimes, ComputerWinTimes, DrawTimes);
}

void StartGame() {
  char PlayAgain = 'Y';
  do
  {
    ResetScreen();
    GameResult GameRes = PlayGame(HowManyRounds());
    ShowGameOverScreen();
    ShowFinalResultGame(GameRes);
    cout << "\n" << Tabs(2) << "Do you want to play again ? Y/N ? ";
    cin >> PlayAgain;
  } while (PlayAgain == 'y' || PlayAgain == 'Y');
}

int main() {
  srand((unsigned)time(NULL));
  StartGame();
  return 0;
}

