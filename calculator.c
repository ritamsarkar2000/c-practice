#include <stdio.h>
#include <math.h>

int factorial(int num){
    
    int i = 1, f = 1;
    while (i<=num){
        f = f * i;
        i = i + 1;
    } 
    return f;
}

int square_root(int el){

    int s;
    s = sqrt(el);

    return s;
    
}


int main(){

    int n, e, i, c, o;
    float r ;
    r = 0;

    printf("in this calculator , we have to choose the symbol of the elements first , then input the element and then we can also choose if want to have the square root or or factorial of the last element");
    printf("\n ENter the number of elements involved in calculation: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){

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
                                       
        if (c == 1 && o == 0){
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
    
        if (c ==2 && o == 0){
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
        if (c == 3 && o == 0){
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
        if (c == 4 && o == 0){
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
        
    }
    printf("\n The result is %f \n", r);
    return 0;
}

