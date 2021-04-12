#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>


using namespace std;

class Setup {
public:
	Setup() {
		cout << "Welcome to the EXPONOS Setup\n";
		PlaySound(TEXT("setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		cout << "Press any key to install EXPONOS";
		_getch();
		system("cls");
		for (int i = 0; i < 10; i++) {
			cout << "Installing . \n";
			Sleep(2000);
			system("cls");
			cout << "Installing . . \n";
			Sleep(2000);
			system("cls");
			cout << "Installing . . . \n";
			Sleep(2000);
			system("cls");
		}
	}
};

class texter {
public:
	texter() {
		system("cls");
		int opt;
		cout << "Welcome to texter a powerful text edditor designed for your needs\n1.Create new document\n";
		cin >> opt;
		system("cls");
		if (opt == 1) {
			string texte;
			for (int i = 0; i < 100; i++)
			{
				cin >> texte;
			}
		
				ofstream document("document1.txt");
				document << texte;
				if (document) {
					MessageBox(NULL, L"Document saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
					system("pause");
					system("cls");
				}
			

		}

	}

};

