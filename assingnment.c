//area and perimeter  of circle 
// #include<stdio.h>
// int main(){
//     int r,area,perimeter;
//     printf("enter the radius :");
//     scanf("%d",&r);
//     area = 3.14 *(r*r);
//     perimeter = 2 * 3.14 * r;
//     printf("the area of circle id %d\n",area);
//     printf("the perimeter of circle is %d\n ",perimeter);

// }


//valid condition for triangle
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a+b>c && a+c>b && b+c>a){
//         printf("BINGO THIS IS A TRIANGLE!!!");
//     }else{
//         printf("This is not a trinagle");
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a==b && b==c && c==a){
//         printf("here we go this an equilateral triangle!!");
//     }
//     else if(a!=b && b!=c && c!=a){
//         printf("this is a scalene triangle!!");
//     }
//     else{
//         printf("this is an isoscles triangle");
//     }
// }


// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

// How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C. Logic to find net electricity bill in C program


// #include<stdio.h>
// int main(){
//     int unit;
//     float amt,total_amt,sur_charge;
//     printf("enter the electricity units : ");
//     scanf("%d",&unit);
//     if(unit<=50){
//         amt = unit*0.50;
//     }
//     else if(unit <=150){
//         amt = 25 + ((unit - 50)*0.75);
//     }
//     else if(unit <=150){
//         amt = 100 + ((unit - 150)*1.20);
//     }
//     else{
//         amt = 220+((unit - 250)*1.50);
//     }
//     sur_charge= amt*0.20;
//     total_amt = amt + sur_charge;
//     printf("electricity bill : Rs %.2f",total_amt);
//     return 0;
// }


// find out the root of quadratic equation
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,b,c,discriminant,root1,root2;
//     printf("enter the cofficents a ,b and c:");
//     scanf("%f %f %f",&a,&b,&c);
//     discriminant = b*b-4*a*c;
//     if(discriminant>0){
//         //real and equal roots
//         root1=(-b+sqrt(discriminant) )/(2*a);
//         root2=(-b+sqrt(discriminant) )/(2*a);
//         printf("real and different roots %f and %f:",root1,root2);

//     }
//     //equal roots
//     else if(discriminant==0){
//         root1 = root2 =-b/(2*a);
//         printf("real and equal roots %f :",root1);

//     }
//     else {
//         // Complex roots
//         float realPart = -b / (2 * a);
//         float imaginaryPart = sqrt(-discriminant) / (2 * a);
//         printf("Roots are complex and different:\n");
//         printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
//         printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
//     }

//     return 0;
// }

//write a cprogram to print thr mirror image
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str ;
//     printf("enter the number :");
//     scanf("%s",&str);
//     int sum =0;
//     for (size_t i = 0; i < len(str); i++)
//     {
//         printf(i);
//         sum = i + sum;
//     }
//    printf(sum) ;
// }

//write a program in  c with the help of function that calculate costumer wise cost and total cost against the shirt purchased by the costumer.
// the program also print the costumer id from 1 to 10. the cost of 1 shirt is rupees 500
#include<stdio.h>
int main(){
    int shirt;
    int total_cost;
    for (int i = 0; i < 10; i++)
    {
        printf("enter number of shirts purchased by coustomer %d:",i+1);
        scanf("%d",&shirt);

    }
    printf("------------------------------------------------------------------\n");
    printf("coustomer wise cost:\n");
    for (int i = 0; i < 10; i++)
    {
        
        printf("coustmer1:Rs %d \n",shirt*500);
        total_cost+=shirt*500;
    }
    printf("------------------------------------------------------------------\n");
    printf("total cost for all coustomers:%d",total_cost);
    
    

}




































