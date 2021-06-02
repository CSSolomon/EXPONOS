#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>


using namespace std;

class EXPONOS {
public:
	void functi() {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		system("cls");
		if (startup_sound) {
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows XP Logon Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		else {
			PlaySound(TEXT("Windows XP Logon Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		ofstream exp("EXPONOS.txt");
		system("cd");
		exp << "EXPONOS is an acronym for Expereience Of a New OS Setup, it was firstly made as a game (experiencing a setup of a new os) first ever build was on March 2021.\nEXPONOS now is starting to become more useful and more of a tool, and it will continue to do so.\nThank you for trying EXPONOS";
		Sleep(10000);
		if (shutdown_sound) {
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows XP Logoff Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		else {
			PlaySound(TEXT("Windows XP Logoff Sound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		system("cls");
	}
};

class music {
public:
	void ut() {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		while (true) {
			system("cls");
			if (task_completed_sound) {
				PlaySound(TEXT("done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			}
			else {
				PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			}
			cout << "1. EXPONOS Setup\n2. Credits Sound\n3. The Microsoft Sound\n4. EXPONOS Startup\n5. EXPONOS Shutdown\n6. Go back to main menu\n";
			int o;
			cin >> o;
			system("cls");
			if (o == 6) { break; }
			if (o == 2) {
				if (credits_sound) {
					PlaySound(TEXT("win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				else {
					PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				cout << "Press R to repeat\nPress any other key to quit";
				string option;
				option = _getch();
				if (option == "r" || option == "R") {
					if (credits_sound) {
						PlaySound(TEXT("win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					else {
						PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					option = _getch();
					system("cls");
					continue;
				}
				else {
					continue;
				}
			}
			if (o == 1) {
				if (setup_sound) {
					PlaySound(TEXT("setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				else {
					PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				cout << "Press R to repeat\nPress any other key to quit";
				string yo;
				yo = _getch();
				if (yo == "r" || yo == "R") {
					if (setup_sound) {
						PlaySound(TEXT("setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					else {
						PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					yo = _getch();
					system("cls");
					continue;
				}
				else {
					continue;
				}
			}
			if (o == 3) {
				if (microsoft_sound) {
					PlaySound(TEXT("mssound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				else {
					PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\mssound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				cout << "Press R to repeat\nPress any other key to quit";
				string yo;
				yo = _getch();
				if (yo == "r" || yo == "R") {
					if (microsoft_sound) {
						PlaySound(TEXT("mssound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					else {
						PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\mssound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					yo = _getch();
					system("cls");
					continue;
				}
				else {
					continue;
				}
			}

			if (o == 4) {
				if (startup_sound) {
					PlaySound(TEXT("Windows 2000 Logon Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				else {
					PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logon Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				cout << "Press R to repeat\nPress any other key to quit";
				string yo;
				yo = _getch();
				if (yo == "r" || yo == "R") {
					if (startup_sound) {
						PlaySound(TEXT("Windows 2000 Logon Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					else {
						PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logon Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					yo = _getch();
					system("cls");
					continue;
				}
				else {
					continue;
				}
			}
			if (o == 5) {
				if (shutdown_sound) {
					PlaySound(TEXT("Windows 2000 Logoff Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}
				else {
					PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logoff Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
				}

				cout << "Press R to repeat\nPress any other key to quit";
				string option;
				option = _getch();
				if (option == "r" || option == "R") {
					if (shutdown_sound) {
						PlaySound(TEXT("Windows 2000 Logoff Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					else {
						PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\Windows 2000 Logoff Sound"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
					}
					option = _getch();
					system("cls");
					continue;
				}
				else {
					continue;
				}

			}
		}
	}
};

class sorter {
public:
	string array[100];
	void functi() {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		fstream srt("sorted.txt");
		string option;
		cout << "Welcome to Sorter, sorting words alphabetically made easier with Sorter" << endl << "To quit from sorter type ^ " << endl << endl << "1. Create a New Document" << endl;
		if (srt) {
			cout << "2. sorted.txt" << endl;
		}
		option = _getch();
		if (option == "^") {
			system("cls");
		}
		if (option == "1" || option == "2") {
			system("cls");
			for (int i = 0; i < 100; i++)
			{
				cin >> array[i];
				if (array[i] == "^") {
					array[i] = " ";
					break;
				}
			}
			sort(begin(array), end(array));
			ofstream sorted("sorted.txt");
			system("cls");
			for (string i : array)
			{
				cout << i << " ";
				if (i == "") { system("cls"); continue; }
				sorted << i << " ";
				
			}
			cout << endl;
			cout << "Press any key to save the document and go back to the main menu . . ." << endl;
			_getch();
			if (notice_sound) {
				PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			}
			else {
				PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			}
			MessageBox(NULL, L"Document saved at app directory", L" ", MB_OK | MB_ICONINFORMATION);
		}
	}
};

class square {
public:
	square() {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		system("cls");
		int a, b;
		cout << "Enter Width: ";
		cin >> a;
		system("cls");
		cout << "Enter Length: ";
		cin >> b;
		system("cls");
		cout << a * b << "\n";
		if (notice_sound) {
			PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		else {
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		MessageBox(NULL, L"Result saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
	}
};

class triangle {
public:
	int c, d;
	triangle() {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		system("cls");
		cout << "Enter Width: ";
		cin >> c;
		system("cls");
		cout << "Enter Length: ";
		cin >> d;
		system("cls");
		cout << c * d / 2 << "\n";
		int resulttt = c * d / 2;
		ofstream file("result of triangle.txt");
		file << resulttt;
		if (notice_sound) {
			PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		else {
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		MessageBox(NULL, L"Result saved at app directory", L" ", MB_OK | MB_ICONINFORMATION);
		system("pause");
		system("cls");
	}
};

class Circle {
private:
	double radius;
	double pi = 3.141592653589;
public:

	friend void circle(Circle c) {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		system("cls");
		cout << "Radius ";
		cin >> c.radius;
		system("cls");
		cout << c.pi * c.radius * c.radius << "\n";
		double resultt = c.pi * c.radius * c.radius;
		system("pause");
		ofstream re("result of circle.txt");
		re << resultt;
		if (notice_sound) {
			PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		else {
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		MessageBox(NULL, L"Result saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
	}
};

class Trapezoid {
private:
	double a, b, h;
	double c = 2;
public:
	friend void trapezoid(Trapezoid trap) {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		system("cls");
		cout << "Base ";
		cin >> trap.a;
		system("cls");
		cout << "Second base ";
		cin >> trap.b;
		system("cls");
		cout << "Height ";
		cin >> trap.h;
		system("cls");
		cout << trap.a + trap.b / 2 * trap.h << "\n";
		double res = trap.a + trap.b / 2 * trap.h;
		system("pause");
		ofstream doc("result of trapezoid.txt");
		doc << res;
		if (notice_sound) {
			PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		else {
			PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		}
		MessageBox(NULL, L"Result saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
		system("cls");
	}
};

class multiplication {
public:
	multiplication() {
		int a, b;
		cout << "How many numbers would you like to multiply (min 2 - max 10) \n";
		cin >> a;
		switch (a) {
		case 2:
			double n, u, m, l, v, j, h, y, z, k;
			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << n * u << "\n";
			system("pause");
			break;
		case 3:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << n * u * m << "\n";
			system("pause");
			break;
		case 4:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << n * u * m * l << "\n";
			system("pause");
			break;
		case 5:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << "Enter fith number: ";
			cin >> v;
			system("cls");
			cout << n * u * m * l * v << "\n";
			system("pause");

			break;
		case 6:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << "Enter fith number: ";
			cin >> j;
			system("cls");
			cout << "Enter sixth number: ";
			cin >> v;
			system("cls");
			cout << n * u * m * l * v * j << "\n";
			system("pause");
			break;
		case 7:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << "Enter fith number: ";
			cin >> j;
			system("cls");
			cout << "Enter sixth number: ";
			cin >> v;
			system("cls");
			cout << "Enter seventh number: ";
			cin >> h;
			system("cls");
			cout << n * u * m * l * v * h * j << "\n";
			system("pause");
			break;
		case 8:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << "Enter fith number: ";
			cin >> j;
			system("cls");
			cout << "Enter sixth number: ";
			cin >> v;
			system("cls");
			cout << "Enter seventh number: ";
			cin >> h;
			system("cls");
			cout << "Enter eigth number: ";
			cin >> y;
			system("cls");
			cout << n * u * m * l * v * h * j * y << "\n";
			system("pause");
			break;
		case 9 :

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << "Enter fith number: ";
			cin >> j;
			system("cls");
			cout << "Enter sixth number: ";
			cin >> v;
			system("cls");
			cout << "Enter seventh number: ";
			cin >> h;
			system("cls");
			cout << "Enter eigth number: ";
			cin >> y;
			system("cls");
			cout << "Enter ninth number: ";
			cin >> z;
			system("cls");
			cout << n * u * m * l * v * h * y * j * z << "\n";
			system("pause");
			break;
		case 10:

			cout << "Enter first number: ";
			cin >> n;
			system("cls");
			cout << "Enter second number: ";
			cin >> u;
			system("cls");
			cout << "Enter third number: ";
			cin >> m;
			system("cls");
			cout << "Enter fourth number: ";
			cin >> l;
			system("cls");
			cout << "Enter fith number: ";
			cin >> j;
			system("cls");
			cout << "Enter sixth number: ";
			cin >> v;
			system("cls");
			cout << "Enter seventh number: ";
			cin >> h;
			system("cls");
			cout << "Enter eigth number: ";
			cin >> y;
			system("cls");
			cout << "Enter ninth number: ";
			cin >> z;
			system("cls");
			cout << "Enter tenth number: ";
			cin >> k;
			system("cls");
			cout << n * u * m * l * v * h * y * j * z * k << "\n";
			system("pause");
			break;
		}
	}
};

class Division {
public:
		void division() {
			int a, b;
			cout << "How many numbers would you like to divide (min 2 - max 10) \n";
			cin >> a;
			switch (a) {
			case 2:
				double n, u, m, l, v, j, h, y, z, k;
				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << n / u << "\n";
				system("pause");
				break;
			case 3:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << n / u / m << "\n";
				system("pause");
				break;
			case 4:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << n / u / m / l << "\n";
				system("pause");
				break;
			case 5:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << "Enter fith number: ";
				cin >> v;
				system("cls");
				cout << n / u / m / l / v << "\n";
				system("pause");

				break;
			case 6:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << "Enter fith number: ";
				cin >> j;
				system("cls");
				cout << "Enter sixth number: ";
				cin >> v;
				system("cls");
				cout << n / u / m / l / v / j << "\n";
				system("pause");
				break;
			case 7:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << "Enter fith number: ";
				cin >> j;
				system("cls");
				cout << "Enter sixth number: ";
				cin >> v;
				system("cls");
				cout << "Enter seventh number: ";
				cin >> h;
				system("cls");
				cout << n / u / m / l / v / h / j << "\n";
				system("pause");
				break;
			case 8:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << "Enter fith number: ";
				cin >> j;
				system("cls");
				cout << "Enter sixth number: ";
				cin >> v;
				system("cls");
				cout << "Enter seventh number: ";
				cin >> h;
				system("cls");
				cout << "Enter eigth number: ";
				cin >> y;
				system("cls");
				cout << n / u / m / l / v / h / j / y << "\n";
				system("pause");
				break;
			case 9:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << "Enter fith number: ";
				cin >> j;
				system("cls");
				cout << "Enter sixth number: ";
				cin >> v;
				system("cls");
				cout << "Enter seventh number: ";
				cin >> h;
				system("cls");
				cout << "Enter eigth number: ";
				cin >> y;
				system("cls");
				cout << "Enter ninth number: ";
				cin >> z;
				system("cls");
				cout << n / u / m / l / v / h / y / j / z << "\n";
				system("pause");
				break;
			case 10:

				cout << "Enter first number: ";
				cin >> n;
				system("cls");
				cout << "Enter second number: ";
				cin >> u;
				system("cls");
				cout << "Enter third number: ";
				cin >> m;
				system("cls");
				cout << "Enter fourth number: ";
				cin >> l;
				system("cls");
				cout << "Enter fith number: ";
				cin >> j;
				system("cls");
				cout << "Enter sixth number: ";
				cin >> v;
				system("cls");
				cout << "Enter seventh number: ";
				cin >> h;
				system("cls");
				cout << "Enter eigth number: ";
				cin >> y;
				system("cls");
				cout << "Enter ninth number: ";
				cin >> z;
				system("cls");
				cout << "Enter tenth number: ";
				cin >> k;
				system("cls");
				cout << n / u / m / l / v / h / y / j / z / k << "\n";
				system("pause");
				break;
			}
		}
};

class egg {
public:
	void setv(string x) {
		easter = x;
	}
	void setv2(string b) {
		eggy = b;
	}
	void setv3(string c) {
		eggg = c;
	}
	string variable1() {
		return easter;
	}
	string variable2() {
		return eggy;
	}
	string variable3() {
		return eggg;
	}
private:
	string easter, eggy, eggg;
};





class source : public egg {
public:
	egg a;
	source() {
		std::fstream task_completed_sound("done.wav");
		std::fstream setup_sound("setup.wav");
		std::fstream microsoft_sound("mssound.wav");
		std::fstream credits_sound("win98.wav");
		std::fstream startup_sound("Windows 2000 Logon Sound.wav");
		std::fstream shutdown_sound("Windows 2000 Logoff Sound.wav");
		std::fstream critical_error_sound("Windows XP Battery Critical.wav");
		std::fstream notice_sound("ding.wav");
		std::fstream error_sound("Windows XP Critical Stop.wav");
		string a, b, c;
		cin >> a;
		system("cls");
		cin >> b;
		system("cls");
		cin >> c;
		system("cls");
		if (a == "7" && b == "5" && c == "8") {
			if (notice_sound) {
				PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			}
			else {
				PlaySound(TEXT("F:\\Programming\\EXPONOS\\EXPONOS Beta\\media\\ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			}
			MessageBox(NULL, L"Have A Nice Day", L"HAND", MB_OK | MB_ICONWARNING);
		}
	}
};

class raregg {
public:
	 virtual void funciton() {
		system("cls");
		system("start project1.exe");
		system("exit");
	}
};

class raregg2 : public raregg {
public:
	 void funciton() {
		system("cls");
		system("start project2.exe");
		system("cls");
	}
};

class EXPONOSs {
public:
	virtual void func() {
	}
};
