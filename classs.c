//find the largest no bw 3 numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
    // printf("enter the first number:");
    // scanf("%d",&a);
    // printf("enter the second number:");
    // scanf("%d",&b);
//     printf("enter the third number:");
//     scanf("%d",&c);
//     if(b<a && a>c){
//         printf("a is largest");

//     }
//     else if (a<b && b>c){
//         printf("b is the largest number");
//     }
//     else{
//         printf("c is the largest number");
//     }
//     return 0;    
// }

// #include<stdio.h>
// int main(){
//     int x = 4;
//     x&=3;
//     printf("%d",x);
//     return 0;
// }

// two swap the two values
// #include<stdio.h>
// int main(){
//     int a ;
//     int b ;
//     int x;
//     printf("enter the first number:");
//     scanf("%d",&a);
//     printf("enter the second number:");
//     scanf("%d",&b);
//     x =a;
//     a =b;
//     b =x;
//     printf("the value of a:%d\n",a);
//     printf("the value of b:%d",b);
//     return 0;
// }

//swap two variable without taking 3rd variable
// #include<stdio.h>
// int main(){
//     int a ;
//     int b ;
//     printf("enter the first number:");
//     scanf("%d",&a);
//     printf("enter the second number:");
//     scanf("%d",&b);
//     // a = a+b;
//     // b = a-b;
//     // a = a-b;
//     //BY XOR ^ BITWISE METHOD
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("the value of a:%d\n",a);
//     printf("the value of b:%d",b);
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


// to enter two digit number and find the odd no sum
// #include<stdio.h>
// int main(){
//     int num,digit;
//     int sum =0;
//     printf("enter the two digit number:");
//     scanf("%d",&num);
//     while(num!=0){
//         digit = num %10;
//         if(digit%2!=0){
//             sum +=digit;
//         }
//         num /= 10;
//     }
//     printf("sum of odd digits = %d",sum);
//     return 0;
// }


//write a program to check leap year 

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the year:");
//     scanf("%d",&year);
//     if(year%4==0 || year%400==0){
//         printf("leap year");
//     }
//     else if(year%4==0 && year%100 != 0){
//         printf("Leap year");
//     }
//     else{
//         printf("Not a leap year");
//     }
//     return 0;
// }


//write a program in check the given no is divisble by 9 and 11
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the number:");
//     scanf("%d",&a);
//     if(a%99==0){
//         printf("%d is divisble by 9 and 11",a);

//     }
//     else{
//         printf("not divisible");
//     }
//     return 0;
// }


//Caluclator
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b;
//     int operator;
//     printf("Enter any operator from ");
//     scanf("%d",&operator);
//     switch (operator)
//     {
//     case 1 if(operator==+):
//         printf("the sum is :%d",a+b);
//         break;
//     case 2 if(operator==-):
//         printf("the sub is :%d",a-b);
//         break;
//     case 3 if(operator==*):
//         printf("the multiplication is :%d",a*b);
//         break;
//     case 4 if(operator==/):
//         printf("the divide is :%d",a/b);
//         break;
//     default:
//         printf("invalid operator\n");
//         break;
//     }
// }


//to print the name of weekdays as per following condition
// #include<stdio.h>
// int main(){
//     int day;
//     printf("enter the number:");
//     scanf("%d",&day);
//     switch (day){
//     case 1:
//         printf("Monday\n");
//         break;
//     case 2:
//         printf("Tuesday\n");
//         break;
//     case 3:
//         printf("Wednesday\n");
//         break;
//     case 4:
//         printf("Thursday\n");
//         break;
//     case 5:
//         printf("Friday\n");
//         break;
//     case 6:
//         printf("Saturday\n");
//         break;
//     case 7:
//         printf("Sunday\n");
//         break;
    
//     default:
//         printf("invalid input\n");
//         break;
//     }
//      return 0;
// }

// #include<stdio.h>
// int main(){
//     int month;
//     printf("enter the month no:");
//     scanf("%d",&month);
//     if(month==11 || month==12 || month==1 || month==2){
//         printf("WINTER IT'S COLD OUTSIDE ");
//     }
//     else if(month ==3 ||month==4){
//         printf("SPRING MOZ MAAR BHAI");
        
//     }
//     else if(month ==5 ||month==6||month==7){
//         printf("SUMMER ICE CREAM TIME ");
        
//     }
//     else{
//         printf("auntum");
        
//     }
//     return 0;
// }


//cal salary yearly
// #include<stdio.h>
// int main(){
//     float salary;
//     float da,hra,pf,it,sal;
//     printf("enter the salary :");
//     scanf("%f",&salary);

//     if(salary<=10000){
//         da = salary*0.1;
//         hra=salary*0.8;
//         pf=salary*0.5;
//         it=salary*0.5;
//         sal = (salary+da+hra-pf-it);
//         printf("month salary is %f",sal);

//     }
//     else if(salary<=10000){
//         da = salary*0.12;
//         hra=salary*0.10;
//         pf=salary*0.8;
//         it=salary*0.10;
//         sal = (salary+da+hra-pf-it);
//         printf("month salary is %f",sal);

//     }
//     else if (salary>=20000){
//         da = salary*0.15;
//         hra=salary*0.10;
//         pf=salary*0.10;
//         it=salary*0.15;
//         sal = (salary+da+hra-pf-it);
//         printf("month salary is %f",sal);

//     }
//     return 0;
// }

// //switch case statement
// #include<stdio.h>
// int main(){
//     int day;
//     scanf("%d",&day);
//     switch (day)
//     {
//     case 1:
//         printf("Monday\n");
//         break;
//     case 2:
//         printf("Tuesday\n");
//         break;
//     case 3:
//         printf("wednesday\n");
//         break;
//     case 4:
//         printf("thursday\n");
//         break;
//     case 5:
//         printf("friday\n");
//         break;
//     case 6:
//         printf("saturday\n");
//         break;
//     case 7:
//         printf("sunday\n");
//         break;
//     default:
//         break;
//     }
// }

// #include<stdio.h>
// int main(){
//     int month;
//     printf("enter the month number:");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 11:
        
//     case 12:
        
//     case 1:
        
//     case 2:
//         printf("WINTER IT'S COLD OUTSIDE \n");
//         break;
//     case 3:
        
//     case 4:
//         printf("SPRING MOZ MAAR BHAI");
//         break;
//     case 5:
        
//     case 6:
        
//     case 7:
//         printf("SUMMER ICE CREAM TIME ");
//         break;
//     case 8:
        
//     case 9:
        
//     case 10:
//         printf("RAINNY SEASON! ");
//         break;
    
//     default:
//         break;
//     }
// }

// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     switch (num>0)
//     {
//     case 1:
//         printf("%d is a positive number",num);
//         break;
//     case 0:
//         switch (num<0)
//         {
//         case 1 :
//             printf("%d is a negative number",num);
//             break;
//         case 0:
//             printf("ZERO");
//             break;
//         }
//         break;
//     }
//     return 0;
// }


//to add two arrays
// #include<stdio.h>
// int main(){
//     int marks[2][3];
//     marks[0][0]=1;
//     marks[0][1]=2;
//     marks[0][2]=3;
//     marks[1][0]=7;
//     marks[1][1]=7;
//     marks[1][2]=9;
//     printf("%d",marks[0][1]);
//     return  0;
// }


//calucltor 
#include<stdio.h>
#include<math.h>
int main(){
    int d;
    int n;
    int a,b;
    
    printf("enter 0 for exit or 1 for stay:");
    scanf("%d",&d);
    if(d==0){
        printf("thanks for using");
    }

    while(d==1){
        printf("enter the number 1(+),2(-),3(*),4(/):");
        scanf("%d",&n);
        printf("enter a and b : ");
        scanf("%d %d",&a,&b);
        if(n==1){
        printf("sum is :%d \n",a+b);
    }else if(n==2){
        if(a>b){
            printf("sub is : %d \n",a-b);
        }else{
            
            printf("sub is : %d \n",b-a);
        }
    }else if(n==3){
        printf("multiplication is : %d\n",a*b);
    }else if (n==4){
        if(a>b){
            printf("division is : %d\n",a/b);
        }else{
            printf("division is : %d\n",b/a);
        }
    }else{
        printf("wrong choice !!\n");
    }
    printf("enter 0 for exit or 1 for stay:");
    scanf("%d",&d);
    
    
    if(d==0){
        printf("thanks\n ");
           
    }
    else if(d==1){
        printf("stay in program\n");
    }
    }
}









































