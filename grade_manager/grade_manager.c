#include "stdio.h"
/* -- Constants ----------------------- */
#define STUDENTS 5
#define SUBJECTS 5

/* GLOBAL ARRAYS - shared by all functions */
char names[STUDENTS][20];    // student name
int marks[STUDENTS][SUBJECTS]; // marks grid
int totals[STUDENTS];          // total per student
float avg[STUDENTS]            // averagecper student

/* ---- Function prototypes ----------- */
void inputData(void);
void calcTotals(void);
void calcAverages(void);
char getGrade(float average);
int  findTopper(void);
void printReport(void);

/****************************************
 *              Main Function
 ***************************************/

int main()
{
	printf("=== STUDENT GRADE MANAGER ===\n\n");

    inputData();       /* Step 1: get names and marks*/
    calcTotals();      /* Step 2: add up each student's marks*/
    calcAverages();    /* Step 3: divide to get average */
    printReport();     /* Step 5: show the report card */

	return 0;
}

/* Input */
void inputData(void)
{
}

/* Calc totals */
void calcTotals(void){}

void calcAverages(void) {}

char getGrades(float average) {}

int findTopper(void) {}

void printReport(void);
