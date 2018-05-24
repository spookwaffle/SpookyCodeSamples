// Tic Tac Toe.cpp 
//Schuyler Clark
//COSC 237 
//4/12/2013


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void printboard();
bool userwon = true;
void setboard();
void usermoves();
void checkboard();
char board[3][3] = 
{{'1', '2', '3'}, 
{'4', '5', '6'}, 
{'7', '8', '9'}};
void searchboard();
void computermoves1();
void computermoves2();
void computermoves3();
void checkboard2();
void setboard();
int main()
{
	char option = 'L';

	srand((unsigned int)time(NULL));
	

		
		do
		{
			cout << "Would you like to play tic tac toe? ('Y' for yes and 'N' for no) " << endl;
			cin >> option;
			
			cout << "Lets play tic tac toe! You will be X and the CPU will be O. You go first. " << endl;

			
			printboard();
			usermoves();
			computermoves1();
			usermoves();
			computermoves2();
			usermoves();
			checkboard();
			computermoves3();
			checkboard2();
			printboard();
			setboard();
			cout << "Lets play again. " <<endl;
		}
		while (option != 'N');
		cout << "Good bye. " << endl;
		



	return 0;
}


void printboard()
{
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c<3; c++)
		{
			cout << setw(2) << "  |  " << board[r][c];
		}
		cout << endl << endl;;
	}

}
void setboard()
{
	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';
}



void usermoves()
{
	int spot =0;
	cout << "User X, Please enter a spot (1 -9) you would like to place your next move." << endl;
	cin >> spot;
	switch (spot)
	{
	case 1 :
		{

			if (board[0][0] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[0][0] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[0][0] = 'X';
			}

			break;
		}
	case 2:
		{

			if (board[0][1] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[0][1] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[0][1] = 'X';
			}

			break;
		}
	case 3:
		{

			if (board[0][2] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[0][2] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[0][2] = 'X';
			}

			break;
		}
	case 4: 
		{

			if (board[1][0] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[1][0] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[1][0] = 'X';
			}

			break;
		}
	case 5:
		{

			if (board[1][1] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[1][1] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[1][1] = 'X';
			}

			break;
		}
	case 6:
		{

			if (board[1][2] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[1][2] =='O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[1][2] = 'X';
			}

			break;
		}
	case 7:
		{

			if (board[2][0] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[2][0] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[2][0] = 'X';
			}

			break;
		}
	case 8:
		{

			if (board[2][1] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[2][1] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[2][1] = 'X';
			}

			break;
		}
	case 9:
		{

			if (board[2][2] == 'X')
			{
				cout << "You have already placed an X in this spot. " << endl;
			}
			else if (board[2][2] == 'O')
			{
				cout << "The computer has already placed an O in this spot. " << endl;
			}
			else
			{
				board[2][2] = 'X';
			}

			break;
		}
	default:
		{
			cout << "That number is not an option on the board. " << endl;
			cout << "Please enter another number (1-9). " << endl;
			usermoves();
		}
	}
	printboard();
}
void computermoves1()
{

	srand((unsigned int)time(NULL));
	int initialmove = 0;
	int initialmove2 = 0;
	initialmove = rand() % 5 + 1; 
	initialmove2 = rand() % 4 + 1;
	if (userwon= true)
	{
		if (board[1][1] != 'X')
		{
			board[1][1] = 'O';
			printboard();

		}
		else
		{
			switch(initialmove2)
			{
			case 1: 
				{
					if (board[0][0] == 'X')
					{
						cout << "Computer is searching...." <<endl;
					}
					else
					{
						board [0][0] = 'O';
						break;
					}
				}
			case 2: 
				{
					if (board[0][2] == 'X')
					{
						cout << "Computer is searching...." <<endl;
					}
					else
					{
						board [0][2] = 'O';
						break;
					}
				}
			case 3:
				{
					if (board[2][0] == 'X')
					{
						cout << "Computer is searching...." <<endl;
					}
					else
					{
						board[2][0] = 'O';
						break;
					}

				}
			case 4:
				{
					if (board[2][2] == 'X')
					{
						cout << "Computer is searching...." <<endl;
					}
					else
					{
						board[2][2] = 'O';
						break;
					}
				}


			}
			printboard();
		}
	}
	else
	{
		switch(initialmove)
		{
		case 1: 
			{
				board[1][1] = 'O';
				break;
			}
		case 2: 
			{
				board [0][0] = 'O';
				break;
			}
		case 3: 
			{
				board [0][2] = 'O';
				break;
			}
		case 4:
			{
				board[2][0] = 'O';
				break;
			}
		case 5:
			{
				board[2][2] = 'O';
				break;
			}
		}
		printboard();
	}
}
void computermoves2()
{
	srand((unsigned int)time(NULL));

	int option2 = 0;

	if (userwon = true)
	{
		if (board[0][0] == 'X' && board[0][2] =='X' && board[0][1] != 'O' && board[0][1] != 'X' )
		{
			board[0][1] = 'O';
		}
		else if (board[1][0] == 'X' && board[1][2] =='X' && board[1][1] != 'O' && board [1][1] != 'X')
		{
			board[1][1] = 'O';
		}
		else if (board[2][0] == 'X' && board[2][2] =='X' && board[2][1] != 'O' && board [2][1] != 'X')
		{
			board[2][1] = 'O';
		}
		else if (board[0][0] == 'X' && board[2][0] =='X' && board[1][0] != 'O' && board[1][0] != 'X')
		{
			board[1][0] = 'O';
		}
		else if (board[0][1] == 'X' && board[2][1] =='X' && board[1][1] != 'O' && board[1][1] != 'X')
		{
			board[0][2] = 'O';
		}
		else if (board[0][2] == 'X' && board[2][2] =='X' && board[1][2] != 'O' && board[1][2] != 'X')
		{
			board[1][2] = 'O';
		}
		else if (board[0][0] == 'X' && board[2][2] == 'X' && board[1][1] != 'O' && board[1][1] != 'X')
		{
			board[1][1] = 'O';
		}
		else if (board[2][0] == 'X' && board[0][2] =='X' && board[1][1] != 'O' && board[1][1] != 'X')
		{
			board[1][1] = 'O';
		}
		else if (board[0][0] == 'X' && board[0][1] =='X' && board[0][2] != 'O' && board[0][2] != 'X')
		{
			board[0][2] = 'O';
		}
		else if (board[0][1] == 'X' && board[0][2] =='X' && board[0][0] != 'O' && board[0][0] != 'X')
		{
			board[0][0] = 'O';
		}
		else if (board[1][0] == 'X' && board[1][1] =='X' && board[1][2] != 'O' && board[1][2] != 'X')
		{
			board[1][2] = 'O';
		}
		else if (board[1][1] == 'X' && board[1][2] =='X' && board[1][0] != 'O' && board[1][0] != 'X')
		{
			board[1][0] = 'O';
		}
		else if (board[2][0] == 'X' && board[2][1] =='X' && board[2][2] != 'O' && board[2][2] != 'X')
		{
			board[2][2] = 'O';
		}
		else if (board[0][0] == 'X' && board[0][1] =='X' && board[0][2] != 'O' && board[0][2] != 'X')
		{
			board[0][2] = 'O';
		}
		else if (board[0][1] == 'X' && board[0][2] =='X' && board[0][0] != 'O' && board[0][0] != 'X')
		{
			board[0][0] = 'O';
		}
		else if (board[1][0] == 'X' && board[1][1] =='X' && board[1][2] != 'O' && board[1][2] != 'X')
		{
			board[1][2] = 'O';
		}
		else if (board[1][1] == 'X' && board[1][2] =='X' && board[1][0] != 'O' && board[1][0] != 'X')
		{
			board[1][0] = 'O';
		}
		else if (board[2][0] == 'X' && board[2][1] =='X' && board[2][2] != 'O' && board[2][2] != 'X')
		{
			board[2][2] = 'O';
		}
		else if (board[2][1] == 'X' && board[2][2] =='X' && board[2][0] != 'O' && board[2][0] != 'X')
		{
			board[2][0] = 'O';
		}
		else
		{
			bool found = false;
			do
			{
				option2 = rand() % 9 + 1;
				switch(option2)
				{
				case 1:
					{
						if(board[0][0] == 'O' || board[0][0] == 'X')
						{
							cout << "Computer is searching..." <<endl;
						}
						else
						{
							board[0][0] = 'O';
							found = true;
							break;
						}
					}
				case 2:
					{
						if (board[0][1] == '0' || board[0][1] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[0][1] = 'O';
							found = true;
							break;
						}
					}
				case 3:
					{
						if (board[0][2] == '0' || board[0][2] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[0][2] = 'O';
							found = true;
							break;
						}
					}
				case 4:
					{
						if (board[1][0] == '0' || board[1][0] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[1][0] = 'O';
							found = true;
							break;
						}
					}
				case 5:
					{
						if (board[1][1] == '0' || board[1][1] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[1][1] = 'O';
							found = true;
							break;
						}
					}
				case 6:
					{
						if (board[1][2] == '0' || board[1][2] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[1][2] = 'O';
							found = true;
							break;
						}
					}
				case 7 :
					{
						if (board[2][0] == '0' || board[2][0] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[2][0] = 'O';
							found = true;
							break;
						}
					}
				case 8:
					{
						if (board[2][1] == '0' || board[2][1] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[2][1] = 'O';
							found = true;
							break;
						}
					}
				case 9:
					{
						if (board[2][2] == '0' || board[2][2] =='X')
						{
							cout << "Computer is searching..." << endl;
						}
						else
						{
							board[2][2] = 'O';
							found = true;
							break;
						}
					}

				}
			}
			while (found != true);

			
		}
		printboard();
	}



	else
	{
		bool found = false;

		do
		{
			option2 = rand() % 9 + 1;

			switch(option2)
			{
			case 1:
				{
					if(board[0][0] == 'O' || board[0][0] == 'X')
					{
						cout << "Computer is searching..." <<endl;
					}
					else
					{
						board[0][0] = 'O';
						found = true;
						break;
					}
				}
			case 2:
				{
					if (board[0][1] == '0' || board[0][1] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[0][1] = 'O';
						found = true;
						break;
					}
				}
			case 3:
				{
					if (board[0][2] == '0' || board[0][2] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[0][2] = 'O';
						found = true;
						break;
					}
				}
			case 4:
				{
					if (board[1][0] == '0' || board[1][0] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[1][0] = 'O';
						found = true;
						break;
					}
				}
			case 5:
				{
					if (board[1][1] == '0' || board[1][1] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[1][1] = 'O';
						found = true;
						break;
					}
				}
			case 6:
				{
					if (board[1][2] == '0' || board[1][2] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[1][2] = 'O';
						found = true;
						break;
					}
				}
			case 7 :
				{
					if (board[2][0] == '0' || board[2][0] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[2][0] = 'O';
						found = true;
						break;
					}
				}
			case 8:
				{
					if (board[2][1] == '0' || board[2][1] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[2][1] = 'O';
						found = true;
						break;
					}
				}
			case 9:
				{
					if (board[2][2] == '0' || board[2][2] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[2][2] = 'O';
						found = true;
						break;
					}
				}

			}
		}
		while (found != true);
		}

		printboard();
	
}
void computermoves3()
{
	if (board[0][0] == 'O' && board[0][2] =='O' && board[0][1] != 'X' && board[0][1] != 'O')
	{
		board[0][1] = 'O';
	}
	else if (board[1][0] == 'O' && board[1][2] =='O' && board[1][1] != 'X' && board[1][1] != 'O')
	{
		board[1][1] = 'O';
	}
	else if (board[2][0] == 'O' && board[2][2] =='O' && board[2][1] != 'X' && board[2][1] != 'O')
	{
		board[2][1] = 'O';
	}
	else if (board[0][0] == 'O' && board[2][0] =='O' && board[1][0] != 'X' && board[1][0] != 'O')
	{
		board[1][0] = 'O';
	}
	else if (board[0][1] == 'O' && board[2][1] =='O' && board[1][1] != 'X' && board[1][1] != 'O')
	{
		board[0][2] = 'O';
	}
	else if (board[0][2] == 'O' && board[2][2] =='O' && board[1][2] != 'X' && board[1][2] != 'O')
	{
		board[1][2] = 'O';
	}
	else if (board[0][0] == 'O' && board[2][2] == 'O' && board[1][1] != 'X' && board[1][1] != 'O')
	{
		board[1][1] = 'O';
	}
	else if (board[2][0] == 'O' && board[0][2] =='O' && board[1][1] != 'X' && board[1][1] != 'O')
	{
		board[1][1] = 'O';
	}
	else if (board[0][0] == 'O' && board[0][1] =='O' && board[0][2] != 'X' && board[0][2] != 'O')
	{
		board[0][2] = 'O';
	}
	else if (board[0][1] == 'O' && board[0][2] =='O' && board[0][0] != 'X' && board[0][0] != 'O')
	{
		board[0][0] = 'O';
	}
	else if (board[1][0] == 'O' && board[1][1] =='O' && board[1][2] != 'X' && board[1][2] != 'O')
	{
		board[1][2] = 'O';
	}
	else if (board[1][1] == 'O' && board[1][2] =='O' && board[1][0] != 'X' && board[1][0] != 'O')
	{
		board[1][0] = 'O';
	}

	else if (board[2][0] == 'O' && board[2][1] =='O' && board[2][2] != 'X' && board[2][2] != 'O')
	{
		board[2][2] = 'O';
	}
	else if (board[0][0] == 'O' && board[0][1] =='O' && board[0][2] != 'X' && board[0][2] != 'O')
	{
		board[0][2] = 'O';
	}
	else if (board[0][1] == 'O' && board[0][2] =='O' && board[0][0] != 'X' && board[0][0] != 'O')
	{
		board[0][0] = 'O';
	}
	else if (board[1][0] == 'O' && board[1][1] =='O' && board[1][2] != 'X' && board[1][2] != 'O')
	{
		board[1][2] = 'O';
	}
	else if (board[1][1] == 'O' && board[1][2] =='O' && board[1][0] != 'X' && board[1][0] != 'O')
	{
		board[1][0] = 'O';
	}
	else if (board[2][0] == 'O' && board[2][1] =='O' && board[2][2] != 'X' && board[2][2] != 'O')
	{
		board[2][2] = 'O';
	}
	else if (board[2][1] == 'O' && board[2][2] =='O' && board[2][0] != 'X' && board[2][0] != 'O')
	{
		board[2][0] = 'O';
	}
	else if (board[0][0] == 'O' && board [1][1] == 'O' && board[2][2] != 'X' && board[2][2] != 'O')
	{
		board[2][2] = 'O';
	}
	else if (board[2][0] == 'O' && board [1][1] == 'O' && board[0][2] != 'X' && board[0][2] != 'O')
	{
		board[0][2]= 'O';
	}
	else if (board[0][2] =='O' && board [1][1] == 'O' && board[2][0] != 'X' && board[2][0] != 'O')
	{
		board[2][0] = 'O';
	}
	else if (board[1][1] == 'O' && board[2][2] == 'O' && board[0][0] != 'X' && board[0][0] != 'O')
	{
		board[0][0] = 'O';
	}
	else
	{
		bool found = false;
		do
		{
			int option2 = rand() % 9 + 1;
			switch(option2)
			{
			case 1:
				{
					if(board[0][0] == 'O' || board[0][0] == 'X')
					{
						cout << "Computer is searching..." <<endl;
					}
					else
					{
						board[0][0] = 'O';
						found = true;
						break;
					}
				}
			case 2:
				{
					if (board[0][1] == '0' || board[0][1] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[0][1] = 'O';
						found = true;
						break;
					}
				}
			case 3:
				{
					if (board[0][2] == '0' || board[0][2] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[0][2] = 'O';
						found = true;
						break;
					}
				}
			case 4:
				{
					if (board[1][0] == '0' || board[1][0] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[1][0] = 'O';
						found = true;
						break;
					}
				}
			case 5:
				{
					if (board[1][1] == '0' || board[1][1] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[1][1] = 'O';
						found = true;
						break;
					}
				}
			case 6:
				{
					if (board[1][2] == '0' || board[1][2] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[1][2] = 'O';
						found = true;
						break;
					}
				}
			case 7 :
				{
					if (board[2][0] == '0' || board[2][0] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[2][0] = 'O';
						found = true;
						break;
					}
				}
			case 8:
				{
					if (board[2][1] == '0' || board[2][1] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[2][1] = 'O';
						found = true;
						break;
					}
				}
			case 9:
				{
					if (board[2][2] == '0' || board[2][2] =='X')
					{
						cout << "Computer is searching..." << endl;
					}
					else
					{
						board[2][2] = 'O';
						found = true;
						break;
					}
				}

			}
		}
		while (found != true);

		printboard();
	}
}
void checkboard()
{
	
	
	
		for (int c = 0; c < 3; c++)
		{
			
			if (board[0][c] == 'X' && board[0][c + 1] == 'X' && board[0][c+2] == 'X')
			{
				cout << "You have won the game." << endl;
				userwon = true;
				break;
			}
			else if (board[1][c] == 'X' && board[1][c + 1] == 'X' && board[1][c+2] == 'X')
			{
				cout << "You have won the game." << endl;
				userwon = true;
				break;
			}
			else if (board[2][c] == 'X' && board[2][c + 1] == 'X' && board[2][c+2] == 'X')
			{
				cout << "You have won the game." << endl;
				userwon = true;
				break;
			}
			else if (board[0][c] == 'O' && board[0][c + 1] == 'O' && board[0][c+2] == 'O')
			{
				cout << "The Computer has won the game." << endl;
				userwon = true;
				break;
			}
			else if (board[1][c] == 'O' && board[1][c + 1] == 'O' && board[1][c+2] == 'O')
			{
				cout << "The Computer has won the game." << endl;
				userwon = false;
				break;

			}
			else if (board[2][c] == 'O' && board[2][c + 1] == 'O' && board[2][c+2] == 'O')
			{
				cout << "The Computer has won the game." << endl;
				userwon = false;
				break;
			}
			else
			{
				break;
			}
			for ( int r = 0; r < 3; r++)
			{
				if (board[r][0] == 'X' && board[r+1][0]== 'X' && board[r+2][0] == 'X')
				{
					cout << "You have won the game. "<<endl;
					userwon = true;
					break;
				}
				else if(board[r][1] == 'X' && board[r+1][1] == 'X' && board[r+2][1] == 'X')
				{
					cout << "You have won the game. " << endl;
					userwon = true;
					break;
				}
				else if(board[r][2] == 'X' && board[r+1][2] == 'X' && board[r+2][2] == 'X')
				{
					cout << "You have won the game. " << endl;
					userwon = true;
					break;
				}
				if (board[r][0] == 'O' && board[r+1][0]== 'O' && board[r+2][0] == 'O')
				{
					cout << "The Computer has won the game. "<<endl;
					userwon = false;
					break;
				}
				else if(board[r][1] == 'O' && board[r+1][1] == 'O' && board[r+2][1] == 'O')
				{
					cout << "The Computer has won the game. " << endl;
					userwon = false;
					break;

				}
				else if(board[r][2] == 'O' && board[r+1][2] == 'O' && board[r+2][2] == 'O')
				{
					cout << "The Computer has won the game. " << endl;
					userwon = false;
					break;
				}
				else
				{
					break;
				
				}
			}
		}
}
void checkboard2()
{
	for (int c = 0; c < 3; c++)
		{
			
			if (board[0][c] == 'X' && board[0][c + 1] == 'X' && board[0][c+2] == 'X')
			{
				cout << "You have won the game." << endl;
				userwon = true;
			}
			else if (board[1][c] == 'X' && board[1][c + 1] == 'X' && board[1][c+2] == 'X')
			{
				cout << "You have won the game." << endl;
				userwon = true;
			}
			else if (board[2][c] == 'X' && board[2][c + 1] == 'X' && board[2][c+2] == 'X')
			{
				cout << "You have won the game." << endl;
				userwon = true;
			}
			else if (board[0][c] == 'O' && board[0][c + 1] == 'O' && board[0][c+2] == 'O')
			{
				cout << "The Computer has won the game." << endl;
				userwon = true;
			}
			else if (board[1][c] == 'O' && board[1][c + 1] == 'O' && board[1][c+2] == 'O')
			{
				cout << "The Computer has won the game." << endl;
				userwon = false;

			}
			else if (board[2][c] == 'O' && board[2][c + 1] == 'O' && board[2][c+2] == 'O')
			{
				cout << "The Computer has won the game." << endl;
				userwon = false;
			}
			else
			{
				break;
			}
			for ( int r = 0; r < 3; r++)
			{
				if (board[r][0] == 'X' && board[r+1][0]== 'X' && board[r+2][0] == 'X')
				{
					cout << "You have won the game. "<<endl;
					userwon = true;
				}
				else if(board[r][1] == 'X' && board[r+1][1] == 'X' && board[r+2][1] == 'X')
				{
					cout << "You have won the game. " << endl;
					userwon = true;
				}
				else if(board[r][2] == 'X' && board[r+1][2] == 'X' && board[r+2][2] == 'X')
				{
					cout << "You have won the game. " << endl;
					userwon = true;
				}
				if (board[r][0] == 'O' && board[r+1][0]== 'O' && board[r+2][0] == 'O')
				{
					cout << "The Computer has won the game. "<<endl;
					userwon = false;
				}
				else if(board[r][1] == 'O' && board[r+1][1] == 'O' && board[r+2][1] == 'O')
				{
					cout << "The Computer has won the game. " << endl;
					userwon = false;

				}
				else if(board[r][2] == 'O' && board[r+1][2] == 'O' && board[r+2][2] == 'O')
				{
					cout << "The Computer has won the game. " << endl;
					userwon = false;
				}
			}
			
		}
}


			

	





			















