#include "Repo.h"

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
