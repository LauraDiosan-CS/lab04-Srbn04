#include "User_Interfac.h"
#include <iostream>
using namespace std;

UI::UI()
{
	this->s;
}

UI::~UI()
{
}


void UI::printMenu()
{
	cout << "1. Adaugare." << endl;
	cout << "2. Afisare" << endl;
	cout << "3. Update" << endl;
	cout << "4. Stergere" << endl;
	cout << "5. Afisare exercitii care au noOfSeries * noOfReps * weightKg > X" << endl;
	cout << "6. Eliminare exercitii care au weightKg * noOfReps < 5" << endl;
	cout << "7. Iesire." << endl;
}


void UI::addGymExercise(Service& s)
{
	char name[100];
	int noOfSeries; int noOfReps; int weightKg; int n = 0;
	cout << "Dati exercitiul: ";
	cin >> name;
	cout << "Dati numarul de serii: ";
	cin >> noOfSeries;
	cout << "Dati numarul de repetari: ";
	cin >> noOfReps;
	cout << "Dati hreutatea: ";
	cin >> weightKg;
	GymExercise g(name, noOfSeries, noOfReps, weightKg);
	s.addGymExercise(g);
	n++;
	cout << endl;
}

void UI::getAll(Service& s)
{
	for (int i = 0; i < s.getSize(); i++) 
	{
		cout << s.getAll()[i] << " ";
		cout << endl;
	}

	cout << endl;
}


void UI::delGymExercise(Service& s)
{
	cout << "Sterge exercitiul cu numarul: ";
	int i; cin >> i; int n = s.getSize();
	s.delGymExercise(s.getAll()[i-1]); 
	n --;
}



void UI::updateGymExercise(Service& s)
{
	cout << "Update la exercitiul cu numarul: "; int i; cin >> i;
	GymExercise g = s.getAll()[i-1];
	cout << "new name: "; char  newName[20];  cin >> newName;
	cout << "new noOfSeries: "; int newNoOfSeries;  cin >> newNoOfSeries;
	cout << "new noOfReps: "; int newNoOfReps;  cin >> newNoOfReps;
	cout << "new weightKg: "; int newWeightKg;  cin >> newWeightKg;
	s.updateGymExercise(g, newName, newNoOfSeries, newNoOfReps, newWeightKg);
}



void UI::filterGymExercises(Service& s)
{
	int x; int length = 0; GymExercise result[10];
	cout << "dati x: " << endl;
	cin >> x;
	int n = s.getSize();
	s.filterGymExercises(x, s, n, result, length);
	cout << endl << "Exercitiile sunt: " << endl;
	for (int i = 0; i < length; i++) {
		cout << result[i] << " ";
		cout << endl;
	}
	cout << endl;
}


void UI::deleteExercises(Service& s)
{
	int n = s.getSize();
	s.deleteExercises(s, n);
}
