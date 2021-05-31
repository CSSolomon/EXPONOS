#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "exponos_features.cpp"
#include "exponos_setup.cpp"
#include <ctime>
#include <time.h>
#include <chrono>





using namespace std;
void notes() {
	system("cls");
	string opt;
	ifstream test("Notes.txt");
	cout << "Welcome to Notes designed for your needs\nType endl to end a line and type ^ if you want to quit.\n\n1. Create new note\n";

	if (test) {
		cout << "2. Notes.txt";
	}

	cin >> opt;
	system("cls");
	if (opt == "^") {

	}
	if (opt == "1") {
		ofstream documentt("Notes.txt");
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
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);

			MessageBox(NULL, L"Note saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
			system("pause");
			system("cls");
		}
	}
	if (opt == "2") {
		fstream document("Notes.txt");
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
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);

			MessageBox(NULL, L"Note saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
			system("pause");
			system("cls");
		}
	}
}

int main() {
	system("color 07");
	string first_name;
	string option_password;
	string setup;
	string rest;
	string main_menu;
	string last_name;
	string check;
	string password;
	string password_check;

	SetConsoleTitleA("EXPONOS");
	cout << "Want to set a password? Y/N\n";
	cin >> option_password;
	system("cls");

	if (option_password == "y" || option_password == "Y") {
		system("exit");
	Q:
		system("cls");
		cout << "Enter new password ";
		cin >> password;
		PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		system("cls");
		cout << "Enter password ";
		cin >> password_check;
		system("cls");
		int i = 0;
		string uit;
		if (password != password_check) {
			while (password != password_check) {
				cout << "Incorrect!\n";
				PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows XP Battery Critical.wav"), NULL, SND_SYNC);
				cout << "Enter password\n";
				cin >> password_check;
				system("cls");
			}
		}

		if (uit == "Y") {
			goto Q;
		}

		cout << "First Name\n";
		cin >> first_name;
		PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\done.wav"), NULL, SND_SYNC);
		system("cls");
		cout << "Last Name\n";
		cin >> last_name;
		system("cls");
	}
	else if (option_password == "N" || option_password == "n") {
		cout << "First Name\n";
		cin >> first_name;

		system("cls");
		cout << "Last Name\n";
		cin >> last_name;

		system("cls");
	}
	else {
		return 0;
	}
		Setup se;								// <-- Setup
		se.setupwiz();
	
	system("cls");
	system("color 07");
	cout << "Setup Complete\n";
	system("color 07");
	ofstream setupdone("setup.cpp");
	PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\done.wav"), NULL, SND_SYNC);
	Sleep(1000);
	cout << "A restart is required in order for the setup to apply the changes . . .\n";
	Sleep(4000);
	system("cls");
	cout << "Restart in 3 .\n";
	Sleep(1000);
	system("cls");
	cout << "Restart in 2 . .\n";
	Sleep(1000);
	system("cls");
	cout << "Restart in 1 . . .\n";
	Sleep(1000);

	system("color 07");

	W:
	system("cls");
	PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logoff Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
	for (int i = 0; i < 2; i++)
	{
		cout << "Restarting . " << endl;
		Sleep(950);
		system("cls");
		cout << "Restarting . ." << endl;
		Sleep(950);
		system("cls");
		cout << "Restarting . . ." << endl;
		Sleep(1000);
		system("cls");

	}

	system("cls");
	for (int i = 0; i < 2; i++)
	{
		cout << "Starting ." << endl;
		Sleep(950);
		system("cls");
		cout << "Starting . . " << endl;
		Sleep(950);
		system("cls");
		cout << "Starting . . ." << endl;
		Sleep(1000);
		system("cls");
	}
C:
	if (option_password == "y" || option_password == "Y") {
		cout << "Enter password ";
		cin >> check;
		system("cls");
		if (password != check) {
			do {
				cout << "Incorrect!\n";
				PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows XP Battery Critical.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				cout << "Enter password\n";
				cin >> password_check;
				system("cls");
			} while (password != password_check);
		}
	}
	PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logon Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
B:
	system("cls");
	cout << "Welcome " << first_name << " " << last_name;															//<-- Main Menu
	cout << "\n\n0.  Shutdown\n1.  Browser\n2.  Calculator\n3.  Credits\n4.  Media\n5.  Texter\n6.  Sorter\n7.  Report a bug or give feedback\n8.  Current Directory Command Prompt\n9.  Color\n10. Notes\n";
	raregg* ptr;
	raregg* ptr2;
	raregg2 alpha2;
	raregg alpha1;
	ptr = &alpha2;
	ptr2 = &alpha1;

	cin >> main_menu;
	if (main_menu == "10") { system("cls"); notes(); goto B; }
	if (main_menu == "8") { system("start cmd.exe"); goto B; }
	if (main_menu == "03") { EXPONOS expo; expo.functi(); system("cls"); goto C; }
	if (main_menu == "9") {
		system("cls");
		cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n0. Reset\n";
		int co;
		cin >> co;
		system("cls");
		string l;
		switch (co) {
		case 1:
			system("color 4");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 44");
					break;
				case 2:
					system("color 24");
					break;
				case 3:
					system("color 14");
					break;
				case 4:
					system("color 54");
					break;
				case 5:
					system("color 64");
					break;
				case 6:
					system("color 34");
					break;
				case 7:
					system("color 74");
					break;
				case 8:
					system("color 84");
					break;
				case 9:
					system("color 94");
					break;
				}
			}
			break;
		case 2:
			system("color a");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 4a");
					break;
				case 2:
					system("color 2a");
					break;
				case 3:
					system("color 1a");
					break;
				case 4:
					system("color 5a");
					break;
				case 5:
					system("color 6a");
					break;
				case 6:
					system("color 3a");
					break;
				case 7:
					system("color 7a");
					break;
				case 8:
					system("color 8a");
					break;
				case 9:
					system("color 9a");
					break;
				}
			}
			break;
		case 3:
			system("color 1");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 41");
					break;
				case 2:
					system("color 21");
					break;
				case 3:
					system("color 11");
					break;
				case 4:
					system("color 51");
					break;
				case 5:
					system("color 61");
					break;
				case 6:
					system("color 31");
					break;
				case 7:
					system("color 71");
					break;
				case 8:
					system("color 81");
					break;
				case 9:
					system("color 91");
					break;
				}
			}
			break;
		case 4:
			system("color 5");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 45");
					break;
				case 2:
					system("color 25");
					break;
				case 3:
					system("color 15");
					break;
				case 4:
					system("color 55");
					break;
				case 5:
					system("color 65");
					break;
				case 6:
					system("color 35");
					break;
				case 7:
					system("color 75");
					break;
				case 8:
					system("color 85");
					break;
				case 9:
					system("color 95");
					break;
				}
			}
			break;
		case 5:
			system("color 6");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 46");
					break;
				case 2:
					system("color 26");
					break;
				case 3:
					system("color 16");
					break;
				case 4:
					system("color 56");
					break;
				case 5:
					system("color 66");
					break;
				case 6:
					system("color 36");
					break;
				case 7:
					system("color 76");
					break;
				case 8:
					system("color 86");
					break;
				case 9:
					system("color 96");
					break;
				}
			}
			break;
		case 6:
			system("color 3");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 43");
					break;
				case 2:
					system("color 23");
					break;
				case 3:
					system("color 13");
					break;
				case 4:
					system("color 53");
					break;
				case 5:
					system("color 63");
					break;
				case 6:
					system("color 33");
					break;
				case 7:
					system("color 73");
					break;
				case 8:
					system("color 83");
					break;
				case 9:
					system("color 93");
					break;
				}

			}
			break;
		case 7:
			system("color 7");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 47");
					break;
				case 2:
					system("color 27");
					break;
				case 3:
					system("color 17");
					break;
				case 4:
					system("color 57");
					break;
				case 5:
					system("color 67");
					break;
				case 6:
					system("color 37");
					break;
				case 7:
					system("color 77");
					break;
				case 8:
					system("color 87");
					break;
				case 9:
					system("color 97");
					break;
				}

			}
			break;
		case 8:
			system("color 8");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 48");
					break;
				case 2:
					system("color 28");
					break;
				case 3:
					system("color 18");
					break;
				case 4:
					system("color 58");
					break;
				case 5:
					system("color 68");
					break;
				case 6:
					system("color 38");
					break;
				case 7:
					system("color 78");
					break;
				case 8:
					system("color 88");
					break;
				case 9:
					system("color 98");
					break;
				}

			}
			break;
		case 9:
			system("color 9");
			cout << "Change Background color? Y/N";
			l = _getch();
			system("cls");
			if (l == "y" || l == "Y") {
				cout << "1. Red\n2. Green\n3. Blue\n4. Purple\n5. Yellow\n6. Aqua\n7. White\n8. Gray\n9. Black\n";
				cin >> co;
				switch (co) {
				case 1:
					system("color 40");
					break;
				case 2:
					system("color 20");
					break;
				case 3:
					system("color 10");
					break;
				case 4:
					system("color 50");
					break;
				case 5:
					system("color 60");
					break;
				case 6:
					system("color 30");
					break;
				case 7:
					system("color 70");
					break;
				case 8:
					system("color 80");
					break;
				case 9:
					system("color 90");
					break;
				}
			}
			break;
		case 0:
			system("color 07");
		}

		system("cls");
		cout << "A restart is required in order to apply the changes . . .\n";
		Sleep(4000);
		system("cls");
		cout << "Restart in 3 .\n";
		Sleep(1000);
		system("cls");
		cout << "Restart in 2 . .\n";
		Sleep(1000);
		system("cls");
		cout << "Restart in 1 . . .\n";
		Sleep(1000);
		system("cls");
		goto W;
	}
	if (main_menu == "alpha1") {
		system("cls");

		ptr2->funciton();
		system("cls");													//<-- alpha1 Easter egg
		goto B;
	}
	if (main_menu == "alpha2") {
		system("cls");

		ptr->funciton();
		system("cls");													//<-- alpha2 Easter egg
		goto B;
	}
	if (main_menu == "4" || main_menu == "Media") {
		music mu;
		mu.ut();																			// <-- Media
		system("cls");
		goto B;
	}
	if (main_menu == "0" || main_menu == "Logoff" || main_menu == "logout" || main_menu == "Logout") {
		PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logoff Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		system("cls");
		cout << "Shutting Down .";
		Sleep(950);
		system("cls");
		cout << "Shutting Down . .";
		Sleep(950);
		system("cls");
		cout << "Shutting Down . . .";								// <-- Shut down
		Sleep(2500);
		system("cls");
		return 0;
	}
	if (main_menu == "sorter" || main_menu == "6") {
		system("cls");
		sorter so;									// <-- Sorter
		so.functi();
		system("cls");
		goto B;
	}
	if (main_menu == "time" || main_menu == "Time") {

		Time time;
		time.timee();							// <-- May be used for future development
		goto B;
	}
	if (main_menu == "7" || main_menu == "report" || main_menu == "feedback") {
		system("cls");
		system("start https://forms.office.com/Pages/ResponsePage.aspx?id=DQSIkWdsW0yxEjajBLZtrQAAAAAAAAAAAAO__SfovCZUN0ZIM1c3TTQ2SjYyMUlMQU5DVkJISDNKWC4u");
		cout << "Thank you for filling the form, press any key to go back to the main menu\n";
		_getch();
		system("cls");
		goto B;
	}
	if (main_menu == "texter" || main_menu == "5") {
		texter text;
		text.te();								//<-- Texter
		goto B;
	}
	if (main_menu == "HAND") {
		system("cls");
		source source;							//<-- HAND Easter Egg
		goto B;
	}
	if (main_menu == "EXPONOS" || main_menu == "exponos") {
		yfm ep;
		goto B;									//<-- EXPONOS Easter Egg
	}
	if (main_menu == "credits" || main_menu == "3") {
		system("cls");
		PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
		cout << "Made by Angelo Petrai 2021\n";
		cout << "Thank you for trying out my application\n";					//<-- Credits
		cout << "Press any key to go back to the main menu . . .\n";
		_getch();
		system("cls");
		PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		goto B;
	}
	else if (main_menu == "2" || main_menu == "calculator") {
		system("cls");
		cout << "1. Area  " << "2. Multiplication\n" << "3. Division ";
		string opt;
		cin >> opt;													//<-- Calculator
		if (opt == "division" || opt == "3") {
			system("cls");
			Division divide;
			divide.division();
			system("cls");
			goto B;
		}
		if (opt == "multiplication" || opt == "2") {
			system("cls");
			multiplication multi;

			system("cls");
			goto B;
			string optios;

		}
		if (opt == "1" || opt == "area") {
			string choice;
			system("cls");
			cout << "1. Square  2. Triangle\n3. Circle  4. Trapezium\n";
			cin >> choice;
			if (choice == "4" || choice == "trapezium") {
				Trapezoid trap;
				trapezoid(trap);
				goto B;
			}
			if (choice == "circle" || choice == "3") {
				system("cls");
				Circle c;
				circle(c);
				system("cls");
				goto B;
			}
			if (choice == "triangle" || choice == "2") {
				system("cls");
				triangle tri;
				goto B;
			}
			else if (choice == "square" || choice == "1") {
				square sq;
				system("cls");
				goto B;
			}

		}
	}

	string menu;
	if (main_menu == "internet" || main_menu == "1") {
		system("cls");
		cout << "Choose from the following search engines: \n 1. Google.com \n 2. Bing.com \n 3. DuckDuckGo.com \n 4. Yahoo.com \n";
		menu = _getch();
		if (menu == "1") {
			system("cls");
			system("start https://google.com");
			cout << "Press any key to go back to the main menu\n";

			_getch();																														// <-- Internet
			system("cls");
			goto B;
		}
		if (menu == "2") {
			system("cls");
			system("start https://Bing.com");
			cout << "Press any key to go back to the main menu\n";

			_getch();												
			system("cls");
			goto B;
		}
		if (menu == "3") {
			system("cls");
			system("start https://DuckDuckGo.com");
			cout << "Press any key to go back to the main menu\n";

			_getch();											
			system("cls");
			goto B;
		}
		if (menu == "4") {
			system("cls");
			system("start https://Yahoo.com");
			cout << "Press any key to go back to the main menu\n";

			_getch();											
			system("cls");
			goto B;
		}

	}

	PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows XP Critical Stop.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
	MessageBox(NULL, L"Option is not Valid.\nUse integer value.\nIf the problem still persists relaunch EXPONOS.", L"Error", MB_OK | MB_ICONERROR);
	goto B;

}