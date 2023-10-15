#include <stdio.h>

/* Constants for the number of students and exams */
#define NUM_STUDENTS 3
#define NUM_EXAMS 4

/* Function to find the minimum grade in the array */
int minimum(const int grades[][NUM_EXAMS], int numRows, int numCols) {
    int minGrade = grades[0][0];

    int i,j;
    for (i = 0; i < numRows; i++) {
        for (j = 0; j < numCols; j++) {
            if (grades[i][j] < minGrade) {
                minGrade = grades[i][j];
            }
        }
    }

    return minGrade;
}

/* Function to find the maximum grade in the array */
int maximum(const int grades[][NUM_EXAMS], int numRows, int numCols) {
    int maxGrade = grades[0][0];

    int i,j;
    for (i = 0; i < numRows; i++) {
        for (j = 0; j < numCols; j++) {
            if (grades[i][j] > maxGrade) {
                maxGrade = grades[i][j];
            }
        }
    }

    return maxGrade;
}

/* Function to calculate the average grade for a specific student */
double average(const int grades[], int numCols) {
    int sum = 0;

    int i;
    for (i = 0; i < numCols; i++) {
        sum += grades[i];
    }

    return (double)sum / numCols;
}

/* Function to print the 2D array in a tabular format */
void printArray(const int grades[][NUM_EXAMS], int numRows, int numCols) {
    int i,j;
    
    printf("Student\t");
    for (j = 0; j < numCols; j++) {
        printf("Exam %d\t", j + 1);
    }
    printf("\n");

    for (i = 0; i < numRows; i++) {
        printf("Student %d\t", i + 1);
        for (j = 0; j < numCols; j++) {
            printf("%d\t", grades[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int studentGrades[NUM_STUDENTS][NUM_EXAMS] = {
        {85, 90, 88, 92},
        {78, 85, 80, 88},
        {92, 89, 91, 95}
    };

    printf("Minimum grade: %d\n", minimum(studentGrades, NUM_STUDENTS, NUM_EXAMS));
    printf("Maximum grade: %d\n", maximum(studentGrades, NUM_STUDENTS, NUM_EXAMS));
    
    printf("\nStudent Averages:\n");
    int i;
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d Average: %.2f\n", i + 1, average(studentGrades[i], NUM_EXAMS));
    }

    printf("\nGrade Table:\n");
    printArray(studentGrades, NUM_STUDENTS, NUM_EXAMS);

    return 0;
}
