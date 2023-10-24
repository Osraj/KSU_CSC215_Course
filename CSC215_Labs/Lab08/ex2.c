/*
 * CSC215 - Lab08 - ex2
 *
 *       Defining Course Structure: (1 point)
 *           The Course struct represents a specific academic course within the Student Course Management
 *           System. Here's a description of the fields within the Course struct:
 *              Course Number (int): This field serves as a unique identifier for each course, allowing the system to
 *              distinguish one course from another.
 *              Title (char[50]): The title field is a character array that stores the name or title of the course. It can
 *              accommodate up to 50 characters, allowing for a descriptive name of the course.
 *              Students (struct Student[MAX_STUDENTS_PER_COURSE]): This field is an array of struct Student and
 *              is used to store information about the students who are currently enrolled in the course. The array allows
 *              for a maximum number of students (specified by MAX_STUDENTS_PER_COURSE) to be enrolled in the
 *              course.
 *              Number of Students (int): The numStudents field is an integer that keeps track of the current number of
 *              students enrolled in the course. It is used to manage the capacity of the course and ensure that the
 *              maximum number of students is not exceeded.
 *
 *           Extend the previous exercise and create a course struct based on the description given above.
 *
 */

#include <stdio.h>

#define MAX_STUDENTS_PER_COURSE 3

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

int main()
{
    /* Sample course with students */
    Course sampleCourse;
    sampleCourse.CourseNumber = 101;
    strcpy(sampleCourse.Title, "Math 101");
    sampleCourse.NumberofStudents = 2;

    Student student1 = {1, "Osamah Sarraj", 3.5};
    Student student2 = {2, "Mohammed Ali", 3.7};

    sampleCourse.Students[0] = student1;
    sampleCourse.Students[1] = student2;

    printf("Course Title: %s\n", sampleCourse.Title);
    printf("Number of Students: %d\n", sampleCourse.NumberofStudents);
    displayStudents(sampleCourse.Students, sampleCourse.NumberofStudents);

    return 0;
}
