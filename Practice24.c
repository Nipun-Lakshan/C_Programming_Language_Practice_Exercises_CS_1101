#include <stdio.h>

int main()

{

    int x;
    x = 10;
    printf("\n%d", x);    // 10
    printf("\n%d\n", &x); // 6422084

    printf("\n");

    int age = 25;
    int address = age;
    printf("%d", age);      // 25
    printf("\n%d\n", &age); // 6422080

    char first_char = 'a';
    printf("\n%c", first_char); // a

    char second_char[6] = "hello";
    printf("\n%s\n", second_char); // hello

    char character[6] = {'h', 'e', 'l', 'l', 'o'};
    printf("%s\n\n", character); // hello

    char name1[6] = "Jenny";
    char name2[8] = "Telusko";
    printf("My name  is %s.", name1);     // My name  is Jenny.
    printf("\nHis name is %s.\n", name2); // His name is Telusko.

    char name[30];
    printf("\nEnter your name : ");
    scanf("%s", &name);
    printf("%s\n\n", name);

    char name3[30];
    char name4[30];
    scanf("%s %s", &name3, &name4);
    printf("%s %s\n", name3, name4);
    return 0;
}