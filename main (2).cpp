/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number1, number2, opc, score;

    while(opc!=5)
    {

    printf("*******CALCULATOR*******\n");
    printf("1.- Addition\n");
    printf("2.- Subtraction\n");
    printf("3.- Division\n");
    printf("4.- Multiplication\n");
    printf("5.- Exit\n");
    printf("Select an option: ");
    scanf("%d",&opc);

    if(opc!=5){


            printf("Enter the first number : ");
            scanf("%d",&number1);
            printf("Enter the second number : ");
            scanf("%d",&number2);
            }

            switch(opc){

                case 1:
                    score= number1 + number2;
                    printf("This is the score of the addition %d \n",score);
                    break;

                case 2:
                    score= number1 - number2;
                    printf("This is the score of the subtraction %d \n",score);
                    break;
                case 3:
                    score= number1 / number2;
                    printf("This is the score of the division %d \n",score);
                    break;
                case4:
                    score= number1 * number2;
                    printf("This is the score of the multiplication %d \n",score);
                    break;
                case 5:
                    break;
                      }
            }
}
