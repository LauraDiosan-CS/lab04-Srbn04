// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "GymExercise.h"
#include "Repo.h"
#include "Tests.h"
#include "User_Interfac.h"
using namespace std;


int main()
{
	tests();
	Service s;
	UI ui;
	char* name;
	int noOfSeries;
	int noOfReps;
	int weightKg;
	int option;
	do 	{
		ui.printMenu();
		cout << endl;
		while (true)
		{

			cin >> option;
			if (option == 1) {
				ui.addGymExercise(s);
				cout << endl;
				break;
			}
			if (option == 2) {
				ui.getAll(s);
				cout << endl;
				break;

			}
			if (option == 3) {
				ui.updateGymExercise(s);
				cout << endl;
				break;
			}
			if (option == 4)
			{
				ui.delGymExercise(s);
				cout << endl;
				break;
			}
			if (option == 5)
			{
				ui.filterGymExercises(s);
				cout << endl;
				break;
			}
			if (option == 6)
			{
				ui.deleteExercises(s);
				cout << endl;
				break;
			}
			if (option == 7)
				exit(0);
			else
				if (option != 1 && option != 2 && option != 3 && option != 4 && option!=5 && option!=6 && option!=7)
				{
					cout << "Ati selectat o optiune inexistenta. ";
					cout << endl;
					break;
				}

		}
	} while (option != 7);
}




