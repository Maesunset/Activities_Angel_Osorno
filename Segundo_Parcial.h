#pragma once
#include <iostream>
#include <vector>
using namespace std;
void Menu2P();
void jankenpon();
void instrucciones();
void jugar();
int generator();
void playMode(string seleccion);
void vectores();
void MenuPalabras();
void JugarPalabras();

void Menu2P() {
	int menu2p;
	system("cls");
	cout << "Bienvenido a la secccion de actividades del segundo parcial" << endl;
	cout << " a que actividad dessea ingresar " << endl;
	cout << "---------- menu ----------" << endl;
	cout << "1) JanKenPon" << endl;
	cout << "2) Vectores" << endl;
		cin >> menu2p;
		switch (menu2p)
		{
		case 1:
				jankenpon();
			break;
		case 2:
			vectores();
			break;
		default:
			break;
		}

}
void jankenpon()
{
	int menu;
	cout << "bienvenidos, que dessea hacer" << endl;
	cout << "1) instrucciones" << endl;
	cout << "2) jugar" << endl;
	cin >> menu;
	switch (menu)
	{
	case 1: 
		instrucciones();
		break;
	case 2:
		jugar();
		break;
	default:
		break;
	}
}
void instrucciones()
{
	cout << "Piedra, Papel, Tijera, Lagarto, Spock" << endl;
	cout << "Tijera corta papel y decapita lagarto " << endl;
	cout << "Papel envuelve piedra y desautoriza spock" << endl;
	cout << "Piedra aplasta tijeta y lagarto" << endl;
	cout << "Lagarto envenena spock y debora papel" << endl;
	cout << "Spock rompe tijera y Vaporiza piedra" << endl;
	system("pause");
}
void jugar() 
{
	int menu;
	cout << "Piedra, Papel, Tijera, Lagarto, Spock" << endl;
	cout << "1) Piedra" << endl;
	cout << "2) Papel" << endl;
	cout << "3) Tijera" << endl;
	cout << "4) Lagarto" << endl;
	cout << "5) Spock" << endl;
	cin >> menu;
	switch (menu)
	{
	// piedra
	case 1:
		playMode("piedra");
		break;
	// papel
	case 2:
		playMode("papel");
		break;
	// tijera
	case 3:
		playMode("tijera");
		break;
	// lagarto
	case 4:
		playMode("lagarto");
		break;
	// spock
	case 5:
		playMode("spock");
		break;
	default:
		cout << "Opcion equivocada " << endl;
		break;
	}
}
int generator() 
{
	srand((unsigned)time(NULL));
	int random = rand() % 5 + 1;
	return random;
}
void playMode(string seleccion) 
{




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
	// srand(time(null)
	// random_shuffle()
	// sort(scores.begin(), scores.end());
}

void MenuPalabras()
{
	int menu;
	cout << "1) jugar" << endl;
	cout << "2) salir" << endl;
	cin >> menu;
	switch (menu)
	{
	case 1:
		JugarPalabras();
		break;
	case 2:
		break;
	default:
		break;
	}
}
void JugarPalabras()
{
	do
	{
	vector<string> palabras(5);
	palabras.push_back("gato");
	palabras.push_back("perro");
	palabras.push_back("delfin");
	palabras.push_back("avestruz");
	palabras.push_back("capibara");
	string PalabraUsuario;
	int vidas = 3, random;
	srand(static_cast<unsigned int>(time(0)));
	random = (rand() % 5) + 1;
	} while (true);
}