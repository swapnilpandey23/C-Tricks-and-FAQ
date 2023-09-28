//MCQ Question, what would be the value of a.

#include<stdio.h>

int main(void)
{
    int a = 5;
    a = printf("Good") + printf("Boy");
    printf("%d", a);

}

// 1. identifier a of type int is initialized to 5
// 2. a is re-assigned to printf("Good") + printf("Boy");
// Now, printf("Good") + printf("Boy"), take it as an expression, printf extracts the number of characters and do the sum of all the number of characters due to +.
// printf("Good") + printf("Boy");
//      4         +        3        = 7.
// Final Output = GoodBoy7.
// GoodBoy due to concatenation and 7 due to sum of all characters in both printf.