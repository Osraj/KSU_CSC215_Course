/*
 * CSC215 - Lab08 - bonus
 *
 *      Bonus exercise:(5 points)
 *          Write a function to find and return course with highest number of enrolled students
 *              struct Course findCourseWithMostStudents(struct Course courses[], int numCourses)
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

Course findCourseWithMostStudents(Course courses[], int numCourses)
{
    int i;
    int maxStudents = -1;
    Course result;
    for (i = 0; i < numCourses; i++)
    {
        if (courses[i].NumberofStudents > maxStudents)
        {
            maxStudents = courses[i].NumberofStudents;
            result = courses[i];
        }
    }
    return result;
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

    Course maxEnrolledCourse = findCourseWithMostStudents(courses, numCourses);
    printf("Course with the highest enrollments: %s (Number of Students: %d)\n", maxEnrolledCourse.Title, maxEnrolledCourse.NumberofStudents);

    return 0;
}
