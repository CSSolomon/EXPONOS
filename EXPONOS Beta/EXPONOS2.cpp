 #include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>


using namespace std;

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


			MessageBox(NULL, L"Have A Nice Day", L"HAND", MB_OK | MB_ICONWARNING);
			

		}
	}

};