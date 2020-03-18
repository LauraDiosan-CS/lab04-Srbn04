#include "Repo.h"
#include "Tests.h"
#include<assert.h>
#include<iostream>
Repo r;

void testGetter()
{
	assert(r.getAll()[1].getNoOfReps() == 10);
	cout << "getter checked !";
	cout << endl;
}

void testSetter()
{
	GymExercise c((char*)"presa", 5, 5, 150);
	r.getAll()[2].setNoOfReps(25);
	assert(r.getAll()[2].getNoOfReps() == 25);
	cout << "setter checked !";
	cout << endl;
}

void testAdd()
{
	assert(r.getSize() == 0);
	GymExercise a((char*)"gantere", 10,10, 12);
	r.addGymExercise(a);
	assert(r.getSize() == 1);
	cout << "add checked !";
	cout << endl;
}

void testGetAllGetSize()
{
	assert(r.getSize() == 1);
	GymExercise* GymExercises;
	GymExercise b((char*)"gantere", 5, 10, 12);
	GymExercise c((char*)"presa", 5, 5, 150);
	GymExercise d((char*)"haltere", 10, 10, 55);
	r.addGymExercise(b);
	r.addGymExercise(c);
	r.addGymExercise(d);
	GymExercises = r.getAll();
	assert(r.getSize() == 4);
	GymExercise g1;
	GymExercise g2;
	GymExercise g3;
	g1 = b;
	g2 = c;
	g3 = d;
	assert(GymExercises[1] == g1);
	assert(GymExercises[2] == g2);
	assert(GymExercises[3] == g3);
	cout << "getAll&getSize checked !";
	cout << endl;

}

void testeConstructor()
{
	GymExercise g1((char*)"haltere", 10,10,55);
	GymExercise g2 = g1;	
	GymExercise g3;			
	g3 = g2;	
	g1 == g2;
	cout << "constructor checked !";
	cout << endl;
}
