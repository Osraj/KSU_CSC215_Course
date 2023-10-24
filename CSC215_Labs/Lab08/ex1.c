/*
 * CSC215 - Lab08 - ex1
 *
 *       Exercise 1.
 *          Defining Student Structure: (1 point)
 *          The Student struct represents an individual student in the Student Course Management System. Here's a
 *          description of the fields within the Student struct:
 *              Id (int): This field stores a unique identifier for each student. It serves as a primary key to distinguish one
 *              student from another.
 *              Name (char[50]): The name field is a character array that stores the student's full name. It is designed to
 *              hold up to 50 characters, allowing for both first and last names.
 *              GPA(float): The GPA field is of the float data type and stores the GPA of the student.
 *          Create a student struct based on the description given above. Afterward, create an array of 10 students,
 *          read their info as an input, and then print their details in a neat way
 */

#include <stdio.h>

/* Defining the Student struct */
typedef struct
{
    int Id;
    char Name[50];
    float GPA;
} Student;

/* Function to input details of n students */
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

/* Function to display details of n students */
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

int main()
{
    Student students[3];
    inputStudents(students, 3);
    displayStudents(students, 3);
    return 0;
}
