#include <stdio.h>
#include <conio.h>

void problem_1();
void problem_2();
void problem_3();
void problem_4();
void problem_5();
void problem_6();
void problem_7();
void problem_8();
void problem_9();
void problem_10();

void main()
{
    problem_1();
    problem_2();
    problem_3();
    problem_4();
    problem_5();
    problem_6();
    problem_7();
    problem_8();
    problem_9();
    problem_10();
    getch();
}

void problem_1()
{
    int number;
    printf("Enter the value which you wanted to display: ");
    scanf("%d", &number);
    printf("the enterd value is: %d\n\n", number);
    getch();
}

void problem_2()
{
    int hour;

    printf("enter the time: ");
    scanf("%d", &hour);

    if (hour >= 4 && hour < 12)
    {
        printf("Good Morning!\n\n");
    }
    else if (hour >= 12 && hour < 17)
    {
        printf("Good Afternoon!\n\n");
    }
    else
    {
        printf("Good Night!\n\n");
    }
    getch();
}

void problem_3()
{
    int num1 = 30, num2 = 10;
    printf("the addition is %d + %d = %d\n\n", num1, num2, num1 + num2);
    getch();
}

void problem_4()
{
    int num1 = 30, num2 = 10;
    printf("the addition is %d + %d = %d\n\n", num1, num2, num1 * num2);
    getch();
}

void problem_5()
{
    float subject1, subject2, subject3, subject4, subject5, ttl, avg, per;

    printf("enter students marks: ");
    scanf("%f%f%f%f%f", &subject1, &subject2, &subject3, &subject4, &subject5);

    ttl = subject1 + subject2 + subject3 + subject4 + subject5;
    printf("the total is: %f\n", ttl);

    avg = ttl / 5;
    printf("the avarage is: %f\n", avg);

    per = (ttl / 500) * 100;
    printf("the percentage is : %f\n\n", per);

    getch();
}

void problem_6()
{
    int num1 = 30, num2 = 10;
    printf("the addition is %d + %d = %d\n\n", num1, num2, num1 + num2);

    printf("the Subtraction is %d - %d = %d\n\n", num1, num2, num1 - num2);

    printf("the Multiplication is %d * %d = %d\n\n", num1, num2, num1 * num2);

    printf("the Divition is %d / %d = %d\n\n", num1, num2, num1 / num2);
    getch();
}

void problem_7()
{
    int number1 = 10, number2 = 30, temporaryvar;

    printf("Before swapped value of number1 is: %d\n", number1);
    printf("Before swapped value of number2 is: %d\n", number2);

    temporaryvar = number1;
    number1 = number2;
    number2 = temporaryvar;

    printf("After swapped value of number1 is: %d\n", number1);
    printf("After swapped value of number2 is: %d\n\n", number2);

    getch();
}

void problem_8()
{
    int length, width;
    printf("Enter length and width: ");
    scanf("%d%d", &length, &width);
    printf("the Sum Of lenght %d * width:&d = %d\n\n", length, width, length * width);
    getch();
}

void problem_9()
{
    int number;
    scanf("enter the number you wamt from computer: &number", &number);
    if (number > 0)
    {
        printf("the given umber is positive\n\n");
    }
    else
    {
        printf("the given number is Negative\n\n");
    }
    getch();
}
