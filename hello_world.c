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

int main()
{
    printf("Hello, World!\n");

    // ทดสอบฟังก์ชันใหม่
    greet_user("Siraphob");

    int result = add_numbers(5, 10);
    printf("5 + 10 = %d\n", result);

    return 0;
}