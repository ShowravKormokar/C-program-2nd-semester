#include <stdio.h>
int main()
{
    int myAge = 21;
    int *ptr = &myAge;

    // Output the value of myAge (43)
    printf("A= %d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("B= %p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("C= %p\n", ptr);
    printf("D= %p\n", *ptr);
    printf("E= %d\n", *ptr);
    printf("F= %d\n", ptr);
}
