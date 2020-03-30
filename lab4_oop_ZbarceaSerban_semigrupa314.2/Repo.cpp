#include "Repo.h"
#include<iostream>

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
}
void Repo::addGymExercise(GymExercise g) {
	this->GymExercises[this->n++] = g;
}

GymExercise* Repo::getAll() {
	return this->GymExercises;
}
int Repo::getSize()
	{
		return this->n;
	}

int Repo::findElem(GymExercise g) {
	int i = 0;


	while (i < this->n) {

		if (GymExercises[i] == g) return i;

	}return -1;
}

void Repo::delElem(GymExercise g) {
	int i = findElem(g);
	if (i != -1)	

		GymExercises[i] = GymExercises[this->n - 1];
	n--;

}
void Repo::updateElem(GymExercise g, char* n, int noOfSeries, int noOfReps, int weightKg) {
	int i = findElem(g);
	cout << i;
	GymExercises[i].setName(n);
	GymExercises[i].setNoOfSeries(noOfSeries);
	GymExercises[i].setNoOfReps(noOfReps);
	GymExercises[i].setWeightKg(weightKg);

}