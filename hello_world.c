#include <stdio.h>

// เพิ่มฟังก์ชันใหม่
void greet_user(char *name)
{
    printf("สวัสดีครับ %s!\n", name);
}

int add_numbers(int a, int b)
{
    return a + b;
}

// ฟังก์ชันคำนวณแฟคทอเรียล
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// ฟังก์ชันตรวจสอบเลขคู่หรือคี่
void check_even_odd(int number)
{
    if (number % 2 == 0)
        printf("%d เป็นเลขคู่\n", number);
    else
        printf("%d เป็นเลขคี่\n", number);
}

int main()
{
    printf("Hello, World!\n");

    // ทดสอบฟังก์ชันใหม่
    greet_user("Siraphob");

    int result = add_numbers(5, 10);
    printf("5 + 10 = %d\n", result);

    // ทดสอบฟังก์ชันใหม่
    int fact_result = factorial(5);
    printf("5! = %d\n", fact_result);

    check_even_odd(8);
    check_even_odd(7);

    return 0;
}