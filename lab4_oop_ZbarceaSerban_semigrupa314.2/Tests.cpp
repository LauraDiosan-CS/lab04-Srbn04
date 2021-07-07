#include "Repo.h"
#include "Tests.h"
#include "Service.h"
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

void testeRepo()
{
	Repo r;
	char a[10] = "gantere";
	GymExercise g(a, 10, 5, 10);
	r.addGymExercise(g); 
	assert(r.getSize() == 1);
	assert(r.getAll()[0] == g );
	assert((g.getNoOfSeries() == 10) && (g.getNoOfReps() == 5) && (g.getWeightKg() == 10));
	r.delElem(g); 
	assert(r.getSize() == 0);
	GymExercise h((char*)"haltere", 3, 5, 100);
	r.addGymExercise(h);
	assert(r.getSize() == 1);
	r.updateElem(h, (char*)"exercitiu", 10, 20, 100);	
	assert(r.getAll()[0].getWeightKg() == 100);
	cout << "Repo checked!";
	cout << endl;
}

void testsService()
{
	Service s;
	char a[10] = "presa";
	char b[10] = "brate";
	GymExercise presa(a, 10, 10, 100);  
	s.addGymExercise(presa);  
	GymExercise brate(b, 10, 5, 30);
	s.addGymExercise(brate);
	assert(s.getSize() == 2);
	assert(s.getAll()[0] == presa);
	assert((strstr(presa.getName(), "presa")) && (presa.getNoOfSeries() == 10) && (presa.getNoOfReps() == 10) && (presa.getWeightKg() == 100));
	GymExercise result[10];
	int length = 0;
	s.filterGymExercises(100, s, s.getSize(), result, length);
	assert(length == 2);
	s.filterGymExercises(1600, s, s.getSize(), result, length);
	assert(length == 1);
	int n = s.getSize();
	s.deleteExercises(s, n); 
	assert(n == 2);
	cout << "Service checked! ";
}

void tests()
{
	testAdd();
	testGetAllGetSize();
	testGetter();
	testSetter();
	testeConstructor();
	testeRepo();
	testsService();
	cout << endl;
}