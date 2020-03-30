#include "Service.h"
#include <iostream>
using namespace std;


Service::Service() {
	this->r;
}


Service::~Service() {
}

void Service::addGymExercise(GymExercise& g) {
	r.addGymExercise(g);
}


GymExercise* Service::getAll() {
	return r.getAll();
}


void Service::delGymExercise(GymExercise g) {
	r.delElem(g);
}


void Service::updateGymExercise(GymExercise& g, char* name, int noOfSeries, int noOfReps, int weightKg) {
	r.updateElem(g, name, noOfSeries, noOfReps, weightKg);
}


int Service::getSize() {
	return r.getSize();
}

void Service::filterGymExercises(int x, Service& s, int n, GymExercise result[], int& length)
{
	length = 0;
	for (int i = 0; i < n; i++) 
		if ((s.getAll()[i].getNoOfSeries()) * (s.getAll()[i].getNoOfReps()) * (s.getAll()[i].getWeightKg()) > x) {
			result[length] = s.getAll()[i];
			length++;
		}
	}

void Service::deleteExercises(Service& s, int& n) {
	int i = 0;
	while (i < n)
	{
		if (s.getAll()[i].getWeightKg() * s.getAll()[i] .getNoOfReps() < 5) {
			s.delGymExercise(s.getAll()[i]);
			n--;
		}
		else
			i++;
	}
}


