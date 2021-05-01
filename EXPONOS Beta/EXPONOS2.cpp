#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>


using namespace std;


class music {
public:
	void ut() {
	A:
		system("cls");
		PlaySound(TEXT("done.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		cout << "1. EXPONOS Setup\n2. Windows XP Setup\n3. The Microsoft Sound\n4. EXPONOS Startup\n5. EXPONOS Shut down\n6. Go back to main menu\n";
		int o;
		cin >> o;
		system("cls");
		if (o == 6) {

		}
		if (o == 1) {
			PlaySound(TEXT("win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		
			cout << "Press R to repeat  Press any other key to quit";
			string yo;
			yo = _getch();
			if (yo == "r" || yo == "R") {
				PlaySound(TEXT("win98.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);

				yo = _getch();
				system("cls");
				goto A;
				

			}
	
		}
		if (o == 2) {
			PlaySound(TEXT("setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		
			cout << "Press R to repeat  Press any other key to quit";
			string yo;
			yo = _getch();
			if (yo == "r" || yo == "R") {
				PlaySound(TEXT("setup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
				yo = _getch();
				system("cls");
				goto A;
				
				


			}
		
		}
		if (o == 3) {
			PlaySound(TEXT("mssound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		
			cout << "Press R to repeat  Press any other key to quit";
			string yo;
			yo = _getch();
			if (yo == "r" || yo == "R") {
				PlaySound(TEXT("mssound.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
				yo = _getch();
				system("cls");
				goto A;
				


			}

		}
		if (o == 4) {
			PlaySound(TEXT("Windows2000Beta3Startup"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		
			cout << "Press R to repeat  Press any other key to quit";
			string yo;
			yo = _getch();
			if (yo == "r" || yo == "R") {
				PlaySound(TEXT("Windows2000Beta3Startup.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
				yo = _getch();
				system("cls");
				goto A;


			}
			
		}
		if (o == 5) {
			PlaySound(TEXT("Windows2000Beta3Shutdown.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		
			cout << "Press R to repeat  Press any other key to quit";
			string yo;
			yo = _getch();
			if (yo == "r" || yo == "R") {
				PlaySound(TEXT("Windows2000Beta3Shutdown.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
				yo = _getch();
				system("cls");
				goto A;


			}
			
		}
	}
};


class sorter {
public:
	string array[100];

	void functio() {
		cout << "Welcome to Sorter, sorting words alphabetically made easier with Sorter" << endl;
		system("pause");
		system("cls");
		for (int i = 0; i < 100; i++)
		{
			cin >> array[i];
			if (array[i] == " ") {
				array[i] = " ";
			}
			if (array[i] == "^") {
				break;
			}
		}

		sort(begin(array), end(array));

		ofstream sorted("sorted.txt");
		system("cls");
		for (string i : array)
		{
			cout << i ;
			sorted << i;
		}

		_getch();
		PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		MessageBox(NULL, L"Document saved at app directory", L" ", MB_OK | MB_ICONINFORMATION);

	}
};

class square {
public:
	square() {
		system("cls");
		int a, b;
		cout << "Enter Width: \n";
		cin >> a; 
		system("cls");
		cout << "Enter Length: \n";
		cin >> b;
		system("cls");
		cout << a * b << "\n";
		PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		MessageBox(NULL, L"Result saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
	}
};

class triangle {
public:
	int c, d;
	triangle() {
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
		PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		MessageBox(NULL, L"Result saved at app directory", L" ", MB_OK | MB_ICONINFORMATION);
		system("pause");
		system("cls");
	}
};

class Circle {
private:
	double radius;
	double pi = 3.14;
public:
	friend void circle(Circle c) {
		
		system("cls");
		cout << "Radius";
		cin >> c.radius;
		system("cls");
		cout << c.pi * c.radius * c.radius << "\n";
		double resultt = c.pi * c.radius * c.radius;
		system("pause");
		ofstream re("result of circle.txt");
		re << resultt;
		PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		MessageBox(NULL, L"Result saved at app directory", L"Info", MB_OK | MB_ICONINFORMATION);
	}
};

class Trapezoid {
private:
	double a, b, h;
	double c = 2;
public:

	friend void trapezoid(Trapezoid trap) {
		system("cls");
		cout << "Base";
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
		PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
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



class yfm : public egg {
public:
	yfm() {
		
		system("cls");
		ofstream me("about me.txt");
		me << "About me:\nMy name is Angelo Petrai, the developer of this app. I was born on May 7th 2008. I've been a tech enthusiast since I was 3 years old. I've been learning C++ for about 5 months and I'm still continuing to do so. If you found this easter egg then congratulations. I really appreciate you User, for taking your time to try out my app. I hope that you enjoyed my app :)";
		me.close();
		system("cd");
		
		Sleep(10000);
		system("cls");
		
	}
};

class source : public egg {

public:
	egg a;
	source() {
		string a, b, c;
		cin >> a;
		system("cls");
		cin >> b;
		system("cls");
		cin >> c;
		system("cls");
		if (a == "7" && b == "5" && c == "8") {

			PlaySound(TEXT("ding.wav"), GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
			MessageBox(NULL, L"Have A Nice Day", L"HAND", MB_OK | MB_ICONWARNING);
			

		}
	}

};

class raregg {
public:
	void fu() {
		
		system("cls");
		system("start project1.exe");
		system("exit");
	}

	void ou() {
		system("cls");
		system("start project2.exe");
		system("cls");
	}
};