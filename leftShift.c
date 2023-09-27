//Left shift operator.
//Printing hexadecimal value of the operation.

#include<stdio.h>
void main()
{
    printf("%x\n",-1<<4); //Hexadecimal 
    printf("%d\n",-1<<4); //Integer
}

/*
Explanation :

As we know, -1 is a negative number and negative numbers are represented in the form of 2's compliment in the memory.

Generally, there are two types of complement of Binary number: 1’s complement and 2’s complement.
To get 1’s complement of a binary number, simply invert the given number.
For example, 1’s complement of binary number 110010 is 001101.
To get 2’s complement of binary number is 1’s complement of given number plus 1 to the least significant bit (LSB).
For example 2’s complement of binary number 10010 is (01101) + 1 = 01110.

Try to understand the solution below :
Assuming that 2 bytes is the memory space for integer.

1)  0000 0000 0000 0001   - 16 bit (2 byte) binary representation of 1.
2)  1111 1111 1111 1110   - 1's complement of -1

3)  1111 1111 1111 1110
                     +1
  -------------------------      
    1111 1111 1111 1111    - 2's complement of 1 = -1 is stored like this inside computer's memory.

4) Now, left shift to 4.

         1111 1111 1111 1111  ****Before left shift.

    1111 1111 1111 1111 0000  ****After left shift, and the 1111 in the starting will get cancelled out, and 0000 will be appended in the end due to left shifting.

         1111 1111 1111 0000  ****Your final representation

Since 1111 = 15(decimal value) and 0000 = 0(decimal value) 

Hexadecimal values :

0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
0 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F

         1111 1111 1111 0000  ****Your final representation
           f   f    f    0    ****Hexadecimal value

We assumed and solved it with 2 bytes for easy demonstration, computer will do it in 4 byte.
*/

