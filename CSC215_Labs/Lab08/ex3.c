/*
 * CSC215 - Lab08 - ex3
 *
 *      Functions of Student Course Management System:(3 points)
 *      The program has the following functions:
 *          void addStudentToCourse(struct Student student, struct Course *course);
 *          This function takes a Student struct, representing a specific student, and a pointer to a Course struct,
 *          representing the course in which the student will be enrolled. It is used to add a student to a particular
 *          course.
 *
 *          void withdrawStudent(struct Course *course, int studentId);
 *          This function takes a pointer to a Course struct, representing a specific academic course, and the
 *          studentId of the student to be withdrawn. It is used to remove a particular student from the specified
 *          course.
 *
 *          void displayStudentsInCourse(struct Course course);
 *          This function takes a Course struct, representing a specific academic course. It displays a list of
 *          students who are currently enrolled in the specified course.
 *
 *      Implement each of these functions and then write a main function test to your program capabilities. Your
 *      program should display a menu showing a list of the services available.
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

void inputStudents(Student students[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].Id);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].Name); /* Reads a line of string until '\n' */
        printf("GPA: ");
        scanf("%f", &students[i].GPA);
    }
}

void displayStudents(Student students[], int n)
{
    int i;
    printf("Displaying student details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].Id);
        printf("Name: %s\n", students[i].Name);
        printf("GPA: %.2f\n", students[i].GPA);
    }
}

void addStudentToCourse(Student student, Course *course)
{
    if (course->NumberofStudents < MAX_STUDENTS_PER_COURSE)
    {
        course->Students[course->NumberofStudents] = student;
        course->NumberofStudents++;
    }
    else
    {
        printf("Course is full!\n");
    }
}

void withdrawStudent(Course *course, int studentId)
{
    int found = 0;
    int i, j;
    for (i = 0; i < course->NumberofStudents; i++)
    {
        if (course->Students[i].Id == studentId)
        {
            for (j = i; j < course->NumberofStudents - 1; j++)
            {
                course->Students[j] = course->Students[j + 1];
            }
            course->NumberofStudents--;
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Student not found in the course!\n");
    }
}

void displayStudentsInCourse(Course course)
{
    printf("Students in the course %s:\n", course.Title);
    displayStudents(course.Students, course.NumberofStudents);
}

int main()
{
    /* Sample course with students */
    Course sampleCourse;
    sampleCourse.CourseNumber = 101;
    strcpy(sampleCourse.Title, "Math 101");
    sampleCourse.NumberofStudents = 0;

    Student student1 = {1, "Osamah Sarraj", 3.5};
    Student student2 = {2, "Mohammed Ali", 3.7};

    addStudentToCourse(student1, &sampleCourse);
    addStudentToCourse(student2, &sampleCourse);
    displayStudentsInCourse(sampleCourse);

    withdrawStudent(&sampleCourse, 1);
    displayStudentsInCourse(sampleCourse);

    return 0;
}
