// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "GymExercise.h"
#include "Repo.h"
#include "Tests.h"
using namespace std;

void  menu() {
	cout << "Alegeti o optiune: " << endl;
	cout << "1. Adaugare exercitiu " << endl;
	cout << "2. Afisare exercitii " << endl;
	cout << "3.Afisati numarul de persoane din program" << endl;
	cout << "4. Exit " << endl;
	cout << endl;
}
void PrintMenu()
{
	char name[10];
	int noOfSeries = {}, noOfReps = {};
	int weightKg = {};
	Repo r;
	int option;
	do {
		menu();
		while (true) {

			cin >> option;
			if (option == 1) {
				cout << "Introduceti numele: ";
				cin >> name;
				cout << "Introduceti nr.de serii: ";
				cin >> noOfSeries;
				cout << "Introduceti nr. de repetari:  ";
				cin >> noOfReps;
				cout << "Introduceti greutatea: ";
				cin >> weightKg;
				cout << endl;

				GymExercise g(name, noOfSeries, noOfReps, weightKg);
				r.addGymExercise(g);

				break;
			}
			if (option == 2) {
				for (int i = 0; i < r.getSize(); i++)
				{
					cout << "name: " << r.getAll()[i].getName() << endl;
					cout << "no of series: " << r.getAll()[i].getNoOfSeries() << endl;
					cout << "no of reps: " << r.getAll()[i].getNoOfReps() << endl;
					cout << "weight:  " << r.getAll()[i].getWeightKg() << endl;
					cout << endl;
				}
				break;

			}
			if (option == 3) {
				cout << "Numarul de exercitii din program este " << r.getSize() << endl;
				cout << endl;
				break;
			}
			if (option == 4)
				exit(0);
			else
				if (option != 1 && option != 2 && option != 3 && option != 4)
				{
					cout << "Ati selectat o optiune inexistenta. ";
					cout << endl;
					break;
				}

		}
	} while (option != 4);
}

int main()
{
	//cout << "Serban Zbarcea , semigrupa 314/2. Nu stiu daca apare numele undeva sau doar usernameul dar nu stiu sa il schimb";
	//cout << endl;
	testAdd();
	testGetAllGetSize();
	testeConstructor();
	testGetter();
	testSetter();
	PrintMenu();
}



