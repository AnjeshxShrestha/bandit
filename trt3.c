// CONTROL  STRUCTURE
#include <stdio.h>

int main() {
    /*
    Decision control statements 
    if
    if else
    else if ladder
    nested if
    switch
    */

//    if else
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("The number is Even");
    }
    else{
        printf("The number is odd");
    }
   
    return 0;

// if else if
    int a , b , c;
    printf("Enter the value of a:");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
     printf("Enter the value of c:");
    scanf("%d",&c);
    if(a > b){
        printf("The number is a");
    }
    else if (b > c){
        printf("The number is b");
    }
    else{
        printf("The number is c");
    }
    
    return 0;

// nested if (if if)
      int a,b,c,highest;

   printf("Enter first number:"),
   scanf("%d",&a);
   printf("Enter second number:"),  
   scanf("%d",&b);
   printf("Enter third number:"),  
   scanf("%d",&c);
/*
if(a>b && a>c)
*/
   if(a>b){
        if(a>c){
            highest = a;
        }else{
            highest = c;
        }
   }else{
     if(b>c){
        highest = b;
     }else{
        highest = c;
     }
   }

   printf("The highest number is %d",highest);
    return 0;

    // 1.	Write a program to check voting eligibility based on age and country. For simplicity, assume the voting age is 18 for all countries.
  int Age;
   printf("Enter your age:");
   scanf("%d",&Age);
   if(Age >= 18){
       printf("You are eligibil for voting");
   }else{
       printf("You are not eligibil for voting");
   }
    return 0;

// 2.	Write a Program to check if a character is a vowel
 char v;
    printf("Enter your character:");
    scanf("%c",&v);
    if (v == 'a' || v=='e' || v=='i' || v=='o' || v=='u' || v == 'A' || v=='E' || v=='I' || v=='O' || v=='U')
    {
        printf("It is a vowel letter:");
    }else{
        printf("It is not vowel letter:");
    }
    return 0;

// 3.	WAP to Print whether the year is a leap year or not.
 int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
     printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
  printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
 printf("%d is a leap year.", year);
   }
   else {
 printf("%d is not a leap year.", year);
   }

   return 0;

// 4.	Write a program to classify a person’s weight status based on their BMI. The categories are:
// bmi = weight / (height * height);
// •	Underweight: BMI < 18.5
// •	Normal weight: 18.5 ≤ BMI < 24.9
// •	Overweight: 25 ≤ BMI < 29.9
// •	Obese: BMI ≥ 30
float BMI, weight, height;
  printf("Enter your height:");
  scanf("%f",&height);
  printf("Enter your weight:");
  scanf("%f",&weight);
  BMI = weight / (height * height);
  printf("The Bim is: %1.2f",BMI);
  if (BMI < 18.5){
      printf("You are Underweight:");}
      else if (18.5 <= BMI && BMI < 24.9){
        printf("You are Normal Weight:");
      }else if(25 <= BMI && BMI < 29.9){
          printf("You are Overweight:");
      }else{
          printf("You are obese:");
      }
      return 0;

// 5.	Write a program to calculate tax based on annual income:
// •	Up to 10,000: No tax
// •	10,001 to 50,000: 10% tax
// •	50,001 to 100,000: 20% tax
// •	Above 100,000: 30% tax
int income;
    printf("Enter your annual salary:");
    scanf("%d",&income);
    if(income <= 10000){
    printf("You donot have to pay tax.\n");
    }else if(10000 < income && income <= 50000){
  printf("You have to pay 10 percentage tax.\n");
    }else if(50000 < income && income <= 100000){
    printf("You have to pay 20 percentage tax.\n");
    }else{
   printf("You have to pay 30 percentage tax.\n");
    }
    return 0;


// 6.	Calculate the Total Price with Discount
// Task: Write a program to calculate the total price after applying a discount based on the quantity purchased:
// •	1-10 items: 5% discount
// •	11-50 items: 10% discount
// •	More than 50 items: 15% discount
int items;
  float price, discountamount, totalamount;
  printf("Enter the number of items you have taken:");
  scanf("%d",&items);
   printf("Enter the price of the items:");
  scanf("%f",&price);
  if (items <= 10){
      printf("You get 5 percentage discount in your items. \n");
      discountamount = price*5/100;
      totalamount = price - discountamount;
      printf("The toatal amount after discount is: %1.2f",totalamount);
  }else if (10 < items && items <=50){
      printf("You get 10 percentage discount in your items.\n ");
      discountamount = price*10/100;
      totalamount = price - discountamount;
      printf("The toatal amount after discount is: %1.2f",totalamount);

  }else{
      printf("You get 15 percentage discount in your items.\n ");
      discountamount = price*15/100;
      totalamount = price - discountamount;
      printf("The toatal amount after discount is: %1.2f",totalamount);
  }

    return 0;
// 7.	Write a program to determine if a person can rent a car based on their age and driving license status. A person must be at least 21 years old and have a valid driving license.
int Age, expire;
    printf("Enter your age:\n");
    scanf("%d",&Age);
    printf("Enter your driving license expire date:\n");
    scanf("%d",&expire);
    if (Age >= 21 && expire > 2024){
        printf("you can rent a car.\n");
    }else{
        printf("you canot rent a car.\n");
    }
    return 0;
}
