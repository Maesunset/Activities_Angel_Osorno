#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void vectores();
void guessTheWord();
void mainScores();
void scores(int &score1, int &score2);
void mainDisplay();

void display(const vector<string>& inventory);

void Menu2P() {
	int menu2p;
	system("cls");
	cout << "Bienvenido a la secccion de actividades del segundo parcial" << endl;
	cout << " a que actividad dessea ingresar " << endl;
	cout << "---------- menu ----------" << endl;
	cout << "1) Vectores" << endl;
	cout << "2) guess the word" << endl;
	cout << "3) cambio de scores" << endl;
	cout << "4) display" << endl;
		cin >> menu2p;
		switch (menu2p)
		{
		case 1:
			vectores();
			break;
		case 2:
			guessTheWord();
			break;
		case 3:
			mainScores();
			break;
		case 4:
			mainDisplay();
			break;
		default:
			break;
		}

}
void vectores() 
{
	vector<string> inventory(5);

	for (int i = 0; i < 5; i++)
	{
		cout << "tiene " << inventory.size()-i << " espacios en tu inventario" << endl;
		cin >> inventory[i];
	}
	cout << endl << " esta es la lista de items que tiene en el inventario" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << inventory[i] << endl;
	}

	system("pause");
}
void guessTheWord()
{
	// constante con el numero de vidas
	const int vidas = 3;
	//declarado del vector con las palabras
	vector<string> palabras;
	palabras.push_back("GATO");
	palabras.push_back("PERRO");
	palabras.push_back("DELFIN");
	palabras.push_back("AVESTRUZ");
	palabras.push_back("CAPIBARA");
	string PalabraUsuario;
	//
	int intentos = 0, random;
	srand(static_cast<unsigned int>(time(0)));
	random = (rand() % palabras.size());
	string palabraSeleccionada = palabras[random];
	random_shuffle(palabraSeleccionada.begin(), palabraSeleccionada.end());
	do
	{
		cout << " Su palabra es: " << palabraSeleccionada << endl;
		cin >> PalabraUsuario;
		transform(PalabraUsuario.begin(), PalabraUsuario.end(), PalabraUsuario.begin(), ::toupper);
		if (PalabraUsuario==palabras[random])
		{
			cout << "adivinaste la palabra, felicidades invocador" << endl;
			break;
		}
		else {
			intentos++;
			cout << "Fallaste vuelve a intentarlo baboso, te quedan " << vidas - intentos << endl;
		}
	} while (intentos != vidas);

	if (intentos== vidas)
	{
		cout << " perdiste, la palabra era" << palabras[random] << endl;
	}
	else
	{
		cout << " felicidades, ganaste " << endl;
	}
}
void mainScores() 
{
	int score1 = 100, score2 = 40;
	cout << "tus scores son: " << score1 << " , " << score2 << endl;
	scores(score1, score2);
	cout << "tus scores actualizados son:" << score1 << " , " << score2 << endl;
	system("pause");
}
void scores(int &score1, int &score2) 
{
	int swap;
	swap = score1;
	score1 = score2;
	score2 = swap;
}
void mainDisplay() 
{
	vector<string> inventory;
	inventory.push_back("espada");
	inventory.push_back("armadura");
	inventory.push_back("pistola");
	inventory.push_back("granada");
	display(inventory);
}
void display(const vector<string>& inventory) 
{
	for (int i = 0; i < inventory.size() ; i++)
	{
		cout << inventory[i] << endl;
	}
	system("pause");
}