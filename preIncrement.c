/*
The problem i got was to debug the code and display the output, problem i got is in isThisValid() function, solution i suggested is in possibleSolution() function.
The problem explaination is done at the bottom.
*/

#include <stdio.h>

//Function prototypes - Promising C that these functions will be defined later in the code.
int isThisValid();
int possibleSolution();

int main(void)
{
    //Function calling
    isThisValid();
    possibleSolution();
}
//Function definition
    int isThisValid(){
        int a = 5;
        int b = 3;
        printf("%d", ++(a*b+1));
        return 0;
    }
    int possibleSolution()
    {
        int a = 5;
        int b = 3;
        int result = (a*b+1);
        result++;
        printf("%d",result);
        return 0;
    }

/*
isThisValid() give you a compile time error, because you can't use increment or decrement operator on an expression,
As a matter of fact, you can't use assignment, address-of, size-of and various operators on an expression.
To run the code, comment out isThisValid() and all the instructions referring to it in the code, else isThisValid() will give compile time error and code won't run.
*/

