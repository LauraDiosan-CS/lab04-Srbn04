#pragma once
#include "GymExercise.h"

class Repo {
private:
	GymExercise GymExercises[101];
	int n;
public:
	Repo();
	~Repo();
	void addGymExercise(GymExercise g);
	GymExercise* getAll();
	int getSize();
	int findElem(GymExercise g);
	void delElem(GymExercise g);
	void updateElem(GymExercise g, char* n, int, int, int);


};

