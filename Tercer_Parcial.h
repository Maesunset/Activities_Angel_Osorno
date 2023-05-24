#pragma once
#include <iostream>

void Menu3P();
void tikTakToe();
void showBoard(char board[][5], int ROWS, int COLUMS);

void Menu3P()
{
	int menu3p;
	system("cls");
	cout << "Bienvenido a la secccion de actividades del tercer parcial" << endl;
	cout << " a que actividad dessea ingresar " << endl;
	cout << "---------- menu ----------" << endl;
	cout << "1) tik-tak-toe" << endl;
	cin >> menu3p;

	switch (menu3p)
	{
	case 1:
		tikTakToe();
		break;

	default:
		break;
	}
}

void tikTakToe() 
{
	const int ROWS = 5;
	const int COLUMS = 5;
	char board[ROWS][COLUMS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMS; j++) 
		{
			if (j==1||j==3)
			{
				board[i][j] = '|';
			}
			else if(i==1||i==3)
			{
				board[i][j] = '-';
			}
			else
			{
				board[i][j] = '0';
			}
		}
	}
	cout << "welcome to TikTakToe" << endl;
	showBoard(board, ROWS, COLUMS);
	system("pause");
}

void showBoard(char board[][5], int ROWS, int COLUMS)
{
	cout << "  01234" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		cout << i << " ";
		for (int j = 0; j < COLUMS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}