#pragma once
#include "GymExercise.h"
#include "Repo.h"

class Service {
private:
	Repo r;
public:
	Service();
	~Service();
	void addGymExercise(GymExercise& g);
	GymExercise* getAll();
	void delGymExercise(GymExercise g);
	void updateGymExercise(GymExercise& g, char* name, int noOfSeries, int noOfReps, int weightKg);
	int getSize();
	void filterGymExercises(int x, Service& s, int n, GymExercise result[], int& length);
	void deleteExercises(Service& s, int& n);
};
