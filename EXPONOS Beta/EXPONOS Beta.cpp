#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "EXPONOS1.cpp"
#include "EXPONOS2.cpp"
#include <ctime>
#include <time.h>
#include <chrono>
#pragma warning(disable : 4996)


using namespace std;


int main() {




	SetConsoleTitleA("EXPONOS");
	string username;
	string yn;
	cout << "Want to set a password? Y/N\n";
	cin >> yn;
	system("cls");

	if (yn == "y" || yn == "Y") {
		string pass;
		string passs;
		system("cls");
		cout << "Enter new password ";
		cin >> pass;
		PlaySound(TEXT("done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		system("cls");
		cout << "Enter password ";
		cin >> passs;
		system("cls");

		if (pass != passs) {
			do {
				cout << "Incorrect!\n";
				PlaySound(TEXT("chord.wav"), NULL, SND_SYNC);
				cout << "Enter password\n";
				cin >> passs;
				system("cls");
			} while (pass != passs);
		}


		cout << "Set Username\n";
		cin >> username;
		PlaySound(TEXT("done.wav"), NULL, SND_SYNC);
		system("cls");


	}
	else if (yn == "N" || yn == "n") {
		cout << "Set Username\n";
		cin >> username;

		system("cls");
	}
	else {
		return 0;
	}

	string setup;
	PlaySound(TEXT("Windows_Logon_Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
	cout << "Welcome " << username << "\n";
	cout << "Setup\n";
	cin >> setup;
	system("cls");
	if (setup == "setup" || setup == "Setup") {

		Setup se;								// <-- Setup
		se.et();
	}
	else {
		return 0;
	}
	string rest;
	system("cls");
	cout << "Setup Complete\n";
	PlaySound(TEXT("done.wav"), NULL, SND_SYNC);
	Sleep(1000);
	cout << "A restart is required in order for the setup to apply the changes . . .\n";
	Sleep(2000);
	cout << "Restart now? Y/N\n";
	cin >> rest;
	string oobe;


	if (rest == "Y" || rest == "y") {
		system("cls");
		PlaySound(TEXT("Windowslogoff.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		cout << "Restarting . . .";
		Sleep(2000);
		Sleep(3000);
		system("cls");
	C:
		PlaySound(TEXT("xpstart.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
	B:
		system("cls");
		cout << "Welcome " << username << "\n";															//<-- Main Menu
		cout << "\n\n1. Internet\n2. Calculator\n3. Credits\n4. Media\n5. Texter\n6. Sorter\n7. Report a bug or give feedback\n8. Logoff\n";
		cin >> oobe;	
		if (oobe == "alpha1") {
			system("cls");
			raregg e;
			e.fu();
			system("cls");													//<-- alpha1 Easter egg
			goto B;
		}
		if (oobe == "alpha2") {
			system("cls");
			raregg e;
			e.ou();
			system("cls");													//<-- alpha2 Easter egg
			goto B;
		}
		if (oobe == "4" || oobe == "Media") {
			music mu;
			mu.u();																			// <-- Media
			system("cls");
			goto B;
			
		}
		if (oobe == "8" || oobe == "Logoff" || oobe == "logout" || oobe == "Logout") {
			PlaySound(TEXT("Windowslogoff.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
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

		
			
		}
		if (oobe == "sorter" || oobe == "6") {
			system("cls");
			sorter so;									// <-- Sorter
			so.functio();
			system("cls");
			goto B;
		}
		if (oobe == "time" || oobe == "Time") {

			Time time;
			time.timee();							// <-- May be used for future development
			goto B;
		}
		if (oobe == "7" || oobe == "report" || oobe == "feedback") {
			system("cls");
			system("start https://forms.office.com/Pages/ResponsePage.aspx?id=DQSIkWdsW0yxEjajBLZtrQAAAAAAAAAAAAO__SfovCZUN0ZIM1c3TTQ2SjYyMUlMQU5DVkJISDNKWC4u");
			cout << "Thank you for filling the form, press any key to go back to the main menu\n";
			_getch();
			system("cls");
			goto B;

		}
		if (oobe == "texter" || oobe == "5") {
			texter text;
			text.exter();								//<-- Texter
			goto B;
		}
		if (oobe == "HAND") {
			system("cls");
			source source;							//<-- HAND Easter Egg
			goto B;
		}
		if (oobe == "EXPONOS" || oobe == "exponos") {
			yfm ep;
			goto C;									//<-- EXPONOS Easter Egg
		}
		if (oobe == "credits" || oobe == "3") {
			system("cls");
			PlaySound(TEXT("setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
			cout << "Made by Angelo Petrai 2021\n";
			cout << "Thank you for trying out my application\n";					//<-- Credits
			cout << "Press any key to go back to the main menu . . .\n";
			_getch();
			system("cls");
			PlaySound(TEXT("done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			goto B;
		}
		else if (oobe == "2r" || oobe == "calculator") {
			system("cls");
			cout << "Area  " << "Multiplication\n" << "Division ";
			string opt;
			cin >> opt;													//<-- Calculator
			if (opt == "division" || opt == "Division") {
				system("cls");
				Division divide;
				divide.division();
				system("cls");
				goto B;
			}
			if (opt == "multiplication" || opt == "Multiplication") {
				system("cls");
				multiplication multi;

				system("cls");
				goto B;
				string optios;

			}
			if (opt == "Area" || opt == "area") {
				string str;
				system("cls");
				cout << "Square  Triangle\nCircle  Trapezoid\n";
				cin >> str;
				if (str == "Trapezoid" || str == "trapezoid") {
					Trapezoid trap;
					trapezoid(trap);
					goto B;
				}
				if (str == "circle" || str == "Circle") {
					system("cls");
					Circle c;
					circle(c);
					system("cls");
					goto B;
				}
				if (str == "triangle" || str == "Triangle") {
					system("cls");
					triangle tri;
					goto B;
				}
				else if (str == "square" || str == "Square") {
					square sq;
					cout << "Do you want to go back to go to the main menu? Y/N\n";
					string rt;
					rt = _getch();
					system("cls");
					if (rt == "Y" || rt == "y") {
						goto B;
					}
				}

			}
		}
	}
	string menu;
	if (oobe == "internet" || oobe == "1") {
		system("cls");
		system("start https://google.com");
		cout << "Press any key to go back to the main menu\n";

		_getch();												// <-- Internet
		system("cls");
		goto B;

	}

}
