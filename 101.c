/* hello!, programmer
this a multiline comment */

// and this a single line comment

//  standard input output header file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// global variables
#define NAME "kamal (kumar) kashyap"
int global_var = 10;

// function without return statement
void hello()
{
    printf("hello world!\n");
}

// function taking int as input and return int as output
int sum(int x, int y)
{
    return x + y;
}

// if and else statement
void greater(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        printf("%d is greater of 3\n", x);
    }
    else if (y >= x && y >= z)
    {
        printf("%d if greater of 3\n", y);
    }
    else
    {
        printf("%d if greater of 3\n", z);
    }
}

// creating struct
// kind of a custom object of c
struct Student
{
    char name[50];
    char course[20];
    int age;
    double cgpa;
};

// main function with arguments
void main(int argc, char **argv)
{
    // main code

    // character
    char alphabet = 'k';
    // character array
    char myName[] = "kamal kashyap";
    // integer
    int age = 18;
    // long integer
    long int long_int = 257624624651753;
    // decimel number
    float pie = 3.14159141;
    // long decimal number
    double long_number = 33573.283436563746436;

    // calling hello function
    hello();

    // use of different data types in print statement
    printf("string: %s \n", NAME);

    printf("char: %c\n", alphabet);

    printf("int: %d\n", age);

    printf("int: %d\n", age);

    printf("float: %f\n", pie);
    // float with limited decimal number
    printf("float wiht limited decimal number: %.5f\n", pie);

    printf("double: %.13f\n", long_number);

    printf("global var: %d\n", global_var);

    printf("char array: %s\n", myName);

    // taking input from user
    char firstName[10], lastName[10];
    printf("please enter your name: ");
    scanf("%s %s", firstName, lastName);
    printf("your name is %s %s\n", firstName, lastName);
    long int date, year;
    char month[4];
    printf("enter your DOB: ");
    scanf("%d %s %d", &date, month, &year);
    printf("your DOB is %s %d %d \n", month, date, year);
    // input double from user
    double num;
    printf("please enter a double (long float): ");
    scanf("%lf", &num);
    printf("you entered %f \n", num);

    // input sentence from user
    char sentence[100];
    printf("please enter a sentence: ");
    fgets(sentence, 100, stdin);
    printf("you entered: %s", sentence);

    // functions

    greater(357, 87, 2);

    // calling sum function and giving it values
    printf("sum = %d\n", sum(40, 30));

    // switch statement
    switch (age)
    {
    case 21:
        printf("you are 21\n");
        // break switch
        break;
    case 18:
        printf("you are 18\n");
        break;
    default:
        printf("you are undefined\n");
        break;
    }

    // integer array
    int arr[] = {33, 42, 198, 39, 01, 3636};
    int i;
    // for loop
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", arr[i]);
    }

    int j = 1;
    // while loop
    while (j < 6)
    {
        printf("%d\n", j);
        j++;
    }

    int k = 6;
    // do while loop which first executes once then check statement
    do
    {
        printf("%d\n", k);
        k++;
    } while (k < 6);

    struct Student student1;
    student1.age = 19;
    student1.cgpa = 7.8;
    strcpy(student1.name, "kamal kashyap");
    strcpy(student1.course, "B.E CSE");

    printf("student1: {%s, %s, %d, %f }\n", student1.name, student1.course, student1.age, student1.cgpa);

    // pointer for age variable
    int *pAge = &age;
    // print memmory address of variable age
    printf("memory location of age variable is %p\n", &age);
    printf("age pointer %d\n", *pAge);
    // print argument 1
    printf("argumnet %s\n", argv[1]);
    // create and write test.txt file in current directory
    FILE *f = fopen("test.txt", "w");
    fprintf(f, "hello world\nthis file is make using c language.");

    // append test.txt file
    // FILE *f = fopen("test.txt", "a");
    // fprintf(f, "\nnow i am appending this from c.");

    // reading first two lines of test.txt file
    // FILE *f = fopen("test.txt", "r");
    // char line[300];
    // fgets(line, 255, f);
    // printf("%s", line);
    // fgets(line, 255, f);
    // printf("%s", line);
    fclose(f);
}
