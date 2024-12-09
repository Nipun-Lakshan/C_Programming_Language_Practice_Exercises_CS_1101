// GPA Calculator

#include <stdio.h>  // For printf() and scanf()
#include <string.h> // For strlen()
#include <stdlib.h> // Required for the system() function

int main()

{

    // Defining the Variables

    int number_of_courses = 0;
    int i;
    size_t len;
    size_t length;
    int total_number_of_credits = 0;
    float GPA_and_credit_value_multiplication = 0;
    float GPA = 0;

    // Clear screen (Windows-specific, optional)

    system("cls");

    // Header String Formatting'

    printf("\n==============\n");
    printf("GPA Calculator\n");
    printf("==============\n\n");

    // Get Input from User for verify the number of courses

    printf("Enter the number of courses you have completed : ");
    scanf("%d", &number_of_courses);

    getchar(); // Consume the leftover newline character

    printf("\n");

    // Defining the arrays to store data

    char course_unit[number_of_courses][8];
    char course_name[number_of_courses][100];
    int course_credit_value[number_of_courses];
    char course_grade[number_of_courses][3];
    float course_gpa_value[number_of_courses];

    // Getting Data from User using a loop.

    for (i = 0; i < number_of_courses; i++)

    {
        // Getting Course Unit Number

        printf("Enter your course unit number  : ");
        fgets(course_unit[i], sizeof(course_unit[i]), stdin);

        // Remove trailing newline, if present

        len = strlen(course_unit[i]);
        if (len > 0 && course_unit[i][len - 1] == '\n')
        {
            course_unit[i][len - 1] = '\0';
        }

        getchar(); // Consume the leftover newline character

        // Getting Course Name

        printf("Enter your course title        : ");
        fgets(course_name[i], sizeof(course_name[i]), stdin);

        // Remove trailing newline, if present

        len = strlen(course_name[i]);
        if (len > 0 && course_name[i][len - 1] == '\n')
        {
            course_name[i][len - 1] = '\0';
        }

        // Getting Course Credit

        printf("Enter your course credit value : ");
        scanf("%d", &course_credit_value[i]);

        getchar(); // Consume the leftover newline character

        // Getting Course Grade

        printf("Enter your course grade        : ");
        fgets(course_grade[i], sizeof(course_grade[i]), stdin);

        // Remove trailing newline, if present

        len = strlen(course_grade[i]);
        if (len > 0 && course_grade[i][len - 1] == '\n')
        {
            course_grade[i][len - 1] = '\0';
        }

        printf("Enter your GPA value           : ");
        scanf("%f", &course_gpa_value[i]);

        printf("\n");

        getchar(); // Consume the leftover newline character
    }

    system("cls"); // Clear the Console

    // Header String Formatting'

    printf("\n=============================\n");
    printf("GPA Calculator & Result Sheet\n");
    printf("=============================\n\n");

    // Printing the Result Sheet

    printf("+--+-----------+----------------------------------------------------------------------------+-------+--------+-----+\n");
    printf("|No|Course Unit|                                Course Title                                |Credits| Grade  | GPV |\n");
    printf("+--+-----------+----------------------------------------------------------------------------+-------+--------+-----+\n");

    for (int j = 0; j < number_of_courses; j++)
    {

        printf("|");
        if (j >= 0 && j <= 8)
        {
            printf("0%d", (j + 1));
        }
        if (j >= 9 && j <= 99)
        {
            printf("%d", (j + 1));
        }
        printf("|");

        printf("  %s  |", course_unit[j]);

        printf("%s", course_name[j]);

        length = strlen(course_name[j]);

        for (int k = 0; k < (76 - length); k++)
        {
            printf(" ");
        }

        printf("|   %d   |", course_credit_value[j]);

        length = strlen(course_grade[j]);

        if (length == 2)
        {
            printf("   %s   |", course_grade[j]);
        }

        if (length == 1)
        {
            printf("   %s    |", course_grade[j]);
        }

        printf("0%.2f|\n", course_gpa_value[j]);
    }

    printf("+--+-----------+----------------------------------------------------------------------------+-------+--------+-----+\n\n");

    // Calculte the total credits

    for (int f = 0; f < number_of_courses; f++)
    {
        total_number_of_credits += course_credit_value[f];
    }

    // Printing the total credits

    if (total_number_of_credits >= 1 && total_number_of_credits <= 9)
    {
        printf("The total number of credits you have completed : 0%d\n", total_number_of_credits);
    }

    else if (total_number_of_credits >= 9 && total_number_of_credits <= 99)
    {
        printf("The total number of credits you have completed : %d\n", total_number_of_credits);
    }

    else if (total_number_of_credits >= 100 && total_number_of_credits <= 150)
    {
        printf("The total number of credits you have completed : %d\n", total_number_of_credits);
    }

    // Calculate the GPA x Credit Value

    for (int n = 0; n < number_of_courses; n++)

    {
        GPA_and_credit_value_multiplication += ((float)course_credit_value[n] * course_gpa_value[n]);
    }

    // Print the Current GPA

    GPA = (GPA_and_credit_value_multiplication / total_number_of_credits);

    printf("The current overall GPA you have obtained      : 0%.4f\n", GPA);

    // Calculate the Class & Print the Status

    printf("The current status of your degree              : ");

    if (GPA >= 3.70)
    {
        printf("First Class Pass\n");
    }

    else if (GPA >= 3.30)
    {
        printf("Second Upper Class Pass\n");
    }

    else if (GPA >= 3.00)
    {
        printf("Second Lower Class Pass\n");
    }

    else if (GPA >= 2.00)
    {
        printf("Genaral Pass\n");
    }

    else
    {
        printf("Not Passed\n");
    }

    return 0;
}
