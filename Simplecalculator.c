#include<stdio.h>
int main(){
int choice;
float a1 ,a2, result;
while (1){
    printf("Enter your choice (1-5);\n");
    printf("1. Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    scanf("%d",&choice);
    if (choice ==5){
        printf("End");
        break;
    }
    printf("Enter two numbers:\n");
    scanf("%f %f",&a1,&a2);
    switch(choice){
        case 1:
        result =a1 + a2;
        printf("result:%.2f + %.2f = %.2f\n",a1,a2,result);
        break;
        case 2:
        result =a1 - a2;
        printf("result:%.2f- %.2f = %.2f\n",a1,a2,result);
        break;
        case 3:
        result =a1 * a2;
        printf("result:%.2f * %.2f = %.2f\n",a1,a2,result);
        break;
        case 4:
        if(a2!= 0){
            result =a1/a2;
            printf("result:%.2f /%.2f = %.2f\n",a1,a2,result);
        }else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            default:
            printf("Invalid choice. please select a valid option (1-5).\n");
        }
    }
    return 0;
}