#include <stdio.h>
#include <math.h>

int factorial(int num){
                                      //function for factorial
    int i = 1, f = 1;
    while (i<=num){
        f = f * i;
        i = i + 1;
    } 
    return f;
}

int square_root(int el){
                                       //function for square root
    int s;
    s = sqrt(el);

    return s;
    
}


int main(){

    int n, e, i, c, o, tr;
    float r ;
    r = 0;

    printf("in this calculator , we have to choose the symbol of the elements first , then input the element and then we can also choose if want to have the square root or factorial or trigonometric funcion of the last element. NOTE; factorial of a trigonometric function is not available and also the value for sin cos tan should be in radian");
    printf("\n ENter the number of elements involved in calculation: ");    
    scanf("%d", &n);

    for(i=0;i<n;i++){                           /* In this loop the user will be asked to input elements and operations, 
                                                   and the calculatons will also be done here
                                                  it will run as many times as number of elements involved in the calculation*/
        printf("\n 1 - addition");
        printf("\n 2 - substraction");
        printf("\n 3 - multiplication");
        printf("\n 4 - division");
        printf("\n 0 - for nothing or end of expression");

        printf("\n enter the sign or oparetion of element: ");
        scanf("%d", &c);

        printf("Enter the element: ");
        scanf("%d", &e);

        printf("\n 5 - square root");
        printf("\n 6 - factorial");
        printf("\n 0 - for nothing");

        printf("\n enter your choice: ");
        scanf("%d", &o);

        printf("if you want trigonometric funtion of the last element choose from following, Note ; The values for trigonometric function should be in radian and factorial or square root of trigonometric function is not available");
        printf("\n 7 - sin");
        printf("\n 8 - cos");
        printf("\n 9 - tan");
        printf("\n 0 - for nothing");
        
        printf("\n enter your choice: ");
        scanf("%d", &tr);
                                       
        if (c == 1 && o == 0 && tr == 0){
            r = r + e;
            printf("\n %f", r);
        }
        if (c == 1 && o != 0){
            if (o == 5){
                r = r + square_root(e);
            }
            if (o == 6){
                r = r + factorial(e);
            }
            printf("\n %f", r);
        }
        if (c == 1 && tr != 0){
            if (tr == 7)
                r = r + sin(e);
            if (tr == 8)
                r = r + cos(e);
            if (tr == 9)
                r = r + tan(e);
            printf("\n %f", r);
        } 
    
        if (c ==2 && o == 0 && tr == 0){
            r = r - e;
            printf("\n %f", r);
        }
        if (c == 2 && o != 0){
            if (o == 5){
                r = r - square_root(e);
            }
            if (o == 6){
                r = r - factorial(e);
            }
            printf("\n %f", r);

        }
        if (c == 2 && tr != 0){
            if (tr == 7)
                r = r - sin(e);
            if (tr == 8)
                r = r - cos(e);
            if (tr == 9)
                r = r - tan(e);
            printf("\n %f", r);
        } 

        if (c == 3 && o == 0 && tr == 0){
            r = r*e;
            printf("\n %f", r);
        }
        if (c == 3 && o != 0){
            if (o == 5){
                r = r * square_root(e);
            }
            if (o == 6){
                r = r * factorial(e);
            }
            printf("\n %f", r);
        }
        if (c == 3 && tr != 0){
            if (tr == 7)
                r = r * sin(e);
            if (tr == 8)
                r = r * cos(e);
            if (tr == 9)
                r = r * tan(e);
            printf("\n %f", r);
        } 
        if (c == 4 && o == 0 && tr ==0){
            r = r/e;
            printf("\n %f", r);
        }
        if (c == 4 && o != 0){
            if (o == 5){
                r = r / square_root(e);
            }
            if (o == 6){
                r = r / factorial(e);
            }
            printf("\n %f", r);
        }
        if (c == 4 && tr != 0){
            if (tr == 7)
                r = r / sin(e);
            if (tr == 8)
                r = r / cos(e);
            if (tr == 9)
                r = r / tan(e);
            printf("\n %f", r);
        } 
        
    }
    printf("\n The result is %f \n", r);
    return 0;
}

