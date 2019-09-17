//Header:
//Olivia Shouse
//ofstk9

#include<stdio.h>

int main(void){
    int a,b,c;
    int greatest;
    int z =1;
    int newA, newB, newC;
    

    printf("Enter 2 integers seperated by spaces: \n");


    scanf("%d\n%d",&a, &b);

    printf("Enter another integer that is not zero: \n");

    scanf("%d",&c);


    while(z == 1){

// finds the absolute value of the numbers
        if( a < 0){
            newA = a*-1;
        }else{
            newA =a;
        }
        if( b < 0){
            newB = b*-1;
        }else{
            newB = b;
        }
        if(c < 0){
            newC = c*-1;
        }else{
            newC = c;
        }

// finds the greatest number 
        if(newA > newB){
            if(newA > newC){
                greatest = newA;
            }
        }else if(newB > newC){
            greatest = newB;
        }else{
            greatest = newC;
        }
    
        if(c != 0){

            printf("*** Initial Values ***\n");
            printf("a = %d\n",a);
            printf("b = %d\n",b);
            printf("c = %d\n",c);
            printf("\n *** Calculated Values *** \n");
            printf("a plus b plus c  = %d\n", a+b+c );
            printf("a minus b = %d\n", a-b);
            printf("a minus b plus c = %d\n", (a-b)+c);
            printf("a time b time c = %d\n", a*b*c);
            printf("a divided by c = %d\n", a / c);
            printf("a times b divided by c = %d\n", (a*b)/c);
            printf("a divided by c remainder = %d\n", a % c);

            
            printf("BONUS: The greates absolute value is: %d\n", greatest);
    
            z = 0;
        }else{ 
            printf("Error! Enter another integer that is not zero: \n");
            scanf("%d", &c);
        
        }
        
    }
}
 
