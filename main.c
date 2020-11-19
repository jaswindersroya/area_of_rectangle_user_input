//WAP to calculate area of rectangle..................1 name the problem solution
//FORMULA: area = length * breadth....................2 write the formula
#include <stdio.h>
int main(){
    //declare variable ...............................3 declare the variables from formula
    float area, length, breadth;
    
    //think about variables in memory..................4 
    //input values to variables-.......................5 assign values/ user input
    printf("****************************\n");
    printf("calculatethe area of a rectangle:\n");
    printf("*****************************\n");
    printf("Enter the value for length: ");
    scanf("%f",&length);
    printf("Enter the value for breadth: ");
    scanf("%f", &breadth);
    printf("************************************\n");
    
    //calculate area...................................6 apply formula 
    area = length * breadth;
    
    //dispaly result................................7 display output
    printf("Area of rectangle with length = %f & breadth = %f is %f",length,breadth,area);
    
}
