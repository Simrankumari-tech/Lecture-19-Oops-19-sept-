#include <iostream>
#include<string.h>
using namespace std;
//////////////// BLUEPRINT //////////////////////////
class Car {
private:
	int price;

public:
	char *name;
	int model;
	int seats;

	Car() {
		cout << "Inside Default Constructor\n";
		name = NULL;
	}

	Car(char*n, int p, int m, int s) {
		cout << "Inside Parameterised Constructor\n";
		// constructor mei name pehle se present ho hi nhi skta, no need to free the previous
		// memory of name
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		// constructor mei name pehle se present ho hi nhi skta, no need to free the previous
		// memory of name
		// This will make a deep copy
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name; // This will create shallow copy
		price = X.price;
		model = X.model;
		seats = X.seats;
	}


	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}
	// Setter of price
	void setPrice(int p) {
		if (p > 100 && p < 200)
			price = p;
		else price = 150;
	}
	// getter of price
	int getPrice() {
		return price;
	}

	void setName(char*n) {
		if (name) delete[]name;

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
};
//////////////// BLUEPRINT //////////////////////////



int main() {
	Car A;

	// strcpy(A.name, "AUDI");  // We cannot add "AUDI" to name, because name is NULL
	A.setName("AUDI");
	// A.price = -100;
	A.setPrice(-100);
	A.model = 2020;
	A.seats = 4;

	char name[] = "Maruti";
	Car B(name, 100, 2022, 7);
	char name1[] = "BMW";
	Car C(name1, 100, 2021, 4);

	C.setName("ROLLS");

	Car D = C;
	Car E = C;

	E.name[0] = 'L';

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();





	return 0;
}