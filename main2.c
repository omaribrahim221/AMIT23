#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Enter Number_1 then the Operator then Number_2\n");
    char op;
    int num1, num2;
    int result=0;
    scanf("%d %c %d", &num1, &op, &num2 );
    switch(op) {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=(float)num1/(float)num2;
            break;

        case '%':
            result=num1%num2;
            break;
        default:
            printf("Error! operator is not Supported \n");
    }
        printf("The Result of the operation is: %d %c %d = %d\n",num1,op,num2,result);

}
