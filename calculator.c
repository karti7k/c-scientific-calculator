#include<stdio.h>
#define M_PI 3.14159265
#include<math.h>
// function for addition.
double add(double n1,double n2){
    return n1+n2;
}
// function for subtraction.
double subtract(double n1,double n2){
    return n1-n2;
}
// function for Multiplication.
double multiply(double n1,double n2){
    return n1*n2;
}
// function for division.
void divide(double n1,double n2){
    if(n2 == 0){
        printf("Cannot Divide by Zero");
    }else{
        printf("%.2lf / %.2lf = %.2lf",n1,n2,n1/n2);
    }
}
// function for conversion from degree to Radians.
double degreeToRadian(double degree){
    return degree * M_PI / 180.0;
}
int main(){
    while(1){
        
    printf("\n");
    printf("\t\t===== SCIENTIFIC CALCULATOR =====");
    printf("\n\n");
    printf("Enter 1 to proceed.....");
    int key;
    scanf("%d",&key);
    if(key == 1){
        printf("\nSelect the Operation You Want to Do.....\n\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Sin\n");
        printf("8. Cos\n");
        printf("9. Tan\n");
        printf("10. Exit\n");
    }else if(key != 1){
        printf("\n\tInvalid!!!");
        return 0;
    }
    int choice;
    double result;
    printf("\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    printf("\n");
    if(choice >10 || choice <=0){
        printf("\t\tInvalid Choice....");
    }
    else if(choice <= 5 )
    {
        
        double num1,num2;
         printf("Enter Two Numbers: \n");
         scanf("%lf %lf",&num1,&num2);
         switch(choice){
             case 1:
                 result = add(num1,num2);
                 printf("\n%.2lf + %.2lf = %.2lf",num1,num2,result);
                 break;
             case 2:
                 result = subtract(num1,num2);
                 printf("\n%.2lf - %.2lf = %.2lf",num1,num2,result);
                 break;
             case 3:
                 result = multiply(num1,num2);
                 printf("\n%.2lf X %.2lf = %.2lf",num1,num2,result);
                 break;
             case 4:
                divide(num1,num2);
                
               break;
            case 5:
                result = pow(num1,num2);
                printf("\t%.2lf^%.2lf = %.2lf",num1,num2,result);
                break;                
         }
    }
    else{
        double num;
        if(choice != 10){
            printf("Enter Input: ");
            scanf("%lf",&num);

            switch(choice){
                case 6:
                if(num < 0){
                    printf("Sqrt of Negative number is not possible..");
                }else{
                    result = sqrt(num);
                    printf("\tSquare root of %.2lf is %.2lf",num,result);
                }
                    break;
                case 7:
                result = sin(degreeToRadian(num));
                printf("\tSin(%.2lf°): %.2lf", num, result);
                    break;
                case 8:
                result = cos(degreeToRadian(num));
                    printf("\tCos(%.2lf°): %.2lf",num,result);
                    break;
                case 9:
                if(num == 90){
                    printf("UNdefined.");
                }else{
                    result = tan(degreeToRadian(num));
                        printf("\tTan(%.2lf°): %.2lf",num,result);
                        break;
                }
            }
        }
        else{
                printf("\n");
            printf("Exiting Calculator.....\n\n");
            printf("\t\tTHANK YOU!\n\n");
            return 0;
        }

    }

printf("\t\t\t\t\nEnd of Program.....");
printf("\n\n");
}
    return 0;
}