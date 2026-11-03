/*
Project 1 (Stone-Paper-Scissor) :
Write a small game program for (Stone-Paper-Scissor) 
Requirements :
-Ask for how many rounds the game will be.
-Start each round Player vs Computer.
-If Computer wins the round ring a bill , and screed red .
-If Player won the round show game over the print gane results.
-Then ask the user if s/he wand to play again ?
*/

#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

enum EnGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum EnWinner { Player1 = 1, Computer = 2, NoWinner = 3 };

short HowManyRounds() {
	int NumRounds = 1;
	do
	{
		cout << "How Many Rounds 1 to 10 \n";
		cin >> NumRounds;
	} while (NumRounds < 1 || NumRounds>10);
	return NumRounds;
}

struct  StGameRound
{
	short NumberRound = 0;
	EnGameChoice PlayerChoice;
	EnGameChoice ComputerChoice;
	EnWinner Winner;
	string NameWinner = " ";
};

struct GameResult
{
	short 	GameRounds = 0;
	short PlayerWinTimes = 0;
	short ComputerWinTimes = 0;
	short DrawTimes = 0;
	EnWinner GameWinner;
	string WinnerName = " ";
};


int RandomNumber(int From, int To) {
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}


EnGameChoice ReadPlayerChoice() {
	int Choice = 1;
	cout << "Your Choice : [1]:Stone ,[2]:Paper ,[3]:Scissors ?\n";
	cin >> Choice;
	return (EnGameChoice)Choice;
}


EnGameChoice GetComputerChoice() {
	return (EnGameChoice)RandomNumber(1, 3);
}


string NameChoice(EnGameChoice Choice) {
	string arrNameChoice[3] = { "Stone","Paper","Scissors" };
	return arrNameChoice[Choice - 1];
}


string NameWinner(EnWinner Winner) {
	string arrNameWinner[3] = { "Player1","Computer","NoWinner" };
	return arrNameWinner[Winner - 1];
}


void ResetScreen() {
	system("cls");
	system("color 0F");
}


string Tabs(int NumberOfTabs) {
	string t = " ";
	for (int i = 1; i < NumberOfTabs; i++)
	{
		t = t + "\t";
	}
	return t;
}


void ShowGameOverScreen() {
	cout << endl << endl;
	cout << Tabs(2) << "-----------------------------------------------------------------------\n\n";
	cout << Tabs(2) << "                     +++ G A M E O V E R +++\n\n";
	cout << Tabs(2) << "-----------------------------------------------------------------------\n\n";
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


void SetWinnerScreenColor(EnWinner Winner) {
	switch (Winner)
	{
	case EnWinner::Player1:
		system("color 2F");
		break;
	case EnWinner::Computer:
		system("color 4F");
		cout << "\a";
		break;
	default:
		system("color 6F");
		break;
	}
}


EnWinner WhoWonTheGame(short PlayerWintimes, short ComputerWinTimes) {
	if (PlayerWintimes > ComputerWinTimes)
		return EnWinner::Player1;
	else if (ComputerWinTimes > PlayerWintimes)
		return EnWinner::Computer;
	else
		return EnWinner::NoWinner;
}


GameResult FillGameResult(short GameRound, short PlayerWinTimes, short ComputerWinTimes, short DrawTimes) {
	GameResult GemeRes;
	GemeRes.GameRounds = GameRound;
	GemeRes.PlayerWinTimes = PlayerWinTimes;
	GemeRes.ComputerWinTimes = ComputerWinTimes;
	GemeRes.DrawTimes = DrawTimes;
	GemeRes.GameWinner = WhoWonTheGame(PlayerWinTimes, ComputerWinTimes);
	GemeRes.WinnerName = NameWinner(GemeRes.GameWinner);
	return GemeRes;
}


void PrintRoundResult(StGameRound RoundInfo) {

	cout << "---------------------[" << RoundInfo.NumberRound << "]---------------------\n\n";
	cout << "Player Choice :" << NameChoice(RoundInfo.PlayerChoice) << endl;
	cout << "Computer Choice :" << NameChoice(RoundInfo.ComputerChoice) << endl;
	cout << "Round Winner :[" << RoundInfo.NameWinner << "]" << endl;
	cout << "\n---------------------------------------------------------------------------\n";
	SetWinnerScreenColor(RoundInfo.Winner);
}


GameResult PlayGame(short HowManyRounds) {
	StGameRound RoundInfo;
	short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
	for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
	{
		cout << "Round [" << GameRound << "] begins :" << endl;
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


void ShowFinalResultGame(GameResult Gameend) {

	cout << Tabs(2) << "--------------------------------------[ Game Result ]----------------------------\n";
	cout << Tabs(2) << "Game Round             :" << Gameend.GameRounds << endl;
	cout << Tabs(2) << "Player1 win Times      :" << Gameend.PlayerWinTimes << endl;
	cout << Tabs(2) << "Computer Won Times     :" << Gameend.ComputerWinTimes << endl;
	cout << Tabs(2) << "Draw Times             :" << Gameend.DrawTimes << endl;
	cout << Tabs(2) << "Final Winner           :" << Gameend.WinnerName << endl;
	cout << Tabs(2) << "--------------------------------------------------------------------------------\n";
	SetWinnerScreenColor(Gameend.GameWinner);
}


void StatGame() {
	char PlayAgin = 'Y';
	do
	{
		ResetScreen();
		GameResult GmaeRes = PlayGame(HowManyRounds());
		ShowGameOverScreen();
		ShowFinalResultGame(GmaeRes);
		cout << "Do you want to play agin ? Y/N ?";
		cin >> PlayAgin;
	} while (PlayAgin == 'y' || PlayAgin == 'Y');
}


int main() {
	srand((unsigned)time(NULL));
	StatGame();
	return 0;
}

