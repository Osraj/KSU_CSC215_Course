/*
 * CSC215 - Lab08 - assignment
 *
 *      Lab Assignment:(5 points)
 *          Write a function to display a student’s schedule. The function prototype should look like this:
 *              void displaySchedule(struct Course courses[], int numCourses, int studentId);
 */

#include <stdio.h>

#define MAX_STUDENTS_PER_COURSE 3
#define MAX_COURSES 5

/* Defining the Student struct */
typedef struct
{
    int Id;
    char Name[50];
    float GPA;
} Student;

/* Defining the Course struct */
typedef struct
{
    int CourseNumber;
    char Title[50];
    Student Students[MAX_STUDENTS_PER_COURSE];
    int NumberofStudents;
} Course;

void displaySchedule(Course courses[], int numCourses, int studentId)
{
    int i, j;
    printf("Schedule for Student ID %d:\n", studentId);
    for (i = 0; i < numCourses; i++)
    {
        for (j = 0; j < courses[i].NumberofStudents; j++)
        {
            if (courses[i].Students[j].Id == studentId)
            {
                printf("Enrolled in Course: %s\n", courses[i].Title);
                break;
            }
        }
    }
}

int main()
{
    /* Sample data */
    Course courses[MAX_COURSES];
    int numCourses = 2;

    courses[0].CourseNumber = 101;
    strcpy(courses[0].Title, "Math 101");
    courses[0].NumberofStudents = 2;
    courses[0].Students[0].Id = 1;
    strcpy(courses[0].Students[0].Name, "Osamah Sarraj");
    courses[0].Students[0].GPA = 3.5;

    courses[0].Students[1].Id = 2;
    strcpy(courses[0].Students[1].Name, "Mohammed Ali");
    courses[0].Students[1].GPA = 3.7;

    courses[1].CourseNumber = 102;
    strcpy(courses[1].Title, "Physics 102");
    courses[1].NumberofStudents = 1;
    courses[1].Students[0].Id = 1;
    strcpy(courses[1].Students[0].Name, "Osamah Sarraj");
    courses[1].Students[0].GPA = 3.5;

    displaySchedule(courses, numCourses, 1);

    return 0;
}
