#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include <time.h>
#pragma warning(disable : 4996)

using namespace std;

class Setup {
public:
	void set() {
		cout << "Welcome to the EXPONOS Setup\n";

		PlaySound(TEXT("win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);

		cout << "Press any key to install EXPONOS";
		_getch();
		system("cls");
		for (int i = 0; i < 3; i++) {


			cout << "Thank you for installing EXPONOS\n";
			cout << "Installing . \n";
			Sleep(2000);
			system("cls");
			cout << "HINT: Easter Eggs are included\n";
			cout << "Installing . . \n";
			Sleep(2000);
			system("cls");
			cout << "Texter is included, a powerful text editor, designed for your needs!\n";
			cout << "Installing . . . \n";
			Sleep(2000);
			system("cls");
			cout << "Do arithmatic faster with the new calculator\n";
			cout << "Installing . \n";
			Sleep(2000);
			system("cls");
			cout << "To quit from the texter, type ^ \n";
			cout << "Installing . . \n";
			Sleep(2000);
			system("cls");
			cout << "EXPONOS stands for Experience Of a New OS Setup\n";
			cout << "Installing . . . \n";
			Sleep(2000);
			system("cls");
			cout << "To give feedback or report a bug type 'report'\n";
			cout << "Installing . \n";
			Sleep(2000);
			system("cls");
			cout << "To end a line in texter type endl\n";
			cout << "Installing . . \n";
			Sleep(2000);
			system("cls");
			cout << "EXPONOS was first released (Alpha Version) in March 2021\n";
			cout << "Installing . . . \n";
			Sleep(2000);
			system("cls");


		}
	}
};

class texter {
public:
	void te() {
		system("cls");
		int opt;
		ifstream test("document1.txt");
		cout << "Welcome to texter a powerful text edditor designed for your needs\n1. Create new document\n";

		if (test) {
			cout << "2. document1.txt";
		}

		cin >> opt;
		system("cls");
		
		if (opt == 1) {
			ofstream documentt("document1.txt");
			string ab;
			for (int i = 0; i < 999999999; i++)
			{


				getline(cin, ab);
				if (ab == "^") {
					break;
				}
				if (ab == "endl") {
					documentt << endl;
					continue;

				}
				documentt << ab;
			}
			if (documentt) {
				PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);

				MessageBox(NULL, L"Document saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
				system("pause");
				system("cls");
			}
		}
		if (opt == 2) {
			fstream document("document1.txt");
			if (document.is_open()) {
				cout << document.rdbuf();
			}
			
			string ab;
			for (int i = 0; i < 999999999; i++)
			{
				
				
				getline(cin, ab);
				if (ab == "^") {
					break;
				}
				if (ab == "endl") {
					document << endl;
					continue;
					
				}
				document << ab;
			}
			if (document) {
				PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);

				MessageBox(NULL, L"Document saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
				system("pause");
				system("cls");
			}
		}
		

				
				
			

		

	}

};

class Time {
public:
											// <-- May be used for future developement
	void timee() {
		time_t t = time(0);
		char* date_time = ctime(&t);
		int i = 0;
		while (i != 10) {
			system("cls");
			
			cout << date_time;
			Sleep(2000);
			i++;
			
		}
	}
};

