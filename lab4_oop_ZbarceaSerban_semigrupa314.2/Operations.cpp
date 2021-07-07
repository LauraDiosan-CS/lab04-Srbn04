#include "Operations.h"
#include "GymExercise.h"
#include "Repo.h"
#include<iostream>

void filterGymExercises(GymExercise GymExercises[], int n,  GymExercise result[], int& len, int x)
{
    for (int i = 0; i < n; i++)
    {
        if ((GymExercises[i].getNoOfSeries() * GymExercises[i].getNoOfReps() * GymExercises[i].getWeightKg()) > x)
        {
            result[len] = GymExercises[i];
            len++;
        }

    }
}

void deleteA(GymExercise Repo, int n)
{
    Repo g;
    char 

}
