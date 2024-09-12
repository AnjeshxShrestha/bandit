#include<stdio.h> 
int main()
{
    // rules for declaring variable name
    /*
    1. variable name should not start with number
    2. variable name must not contain space and comma 
    3. variable name must not contaian special character(@,#,%) except underscore(_)
    4. variable must not conatin keywords
    5. variable is case sensetive
    6. No repeat of variables
    */
//     int a; //variable declaration
//     a = 50;//variable initialization
//     int b = 20; //variable declaration with initialization
//     b = 50;
//     // constant variable read-only
//     const int c = 50;
//     // Datatypes
//     /*
//     1. int 60,50,20
//     2. float 2.55, 1.232 ( for decimal)
//     3. char single character - M,F
//     4. void (function)
//     */
//    int o = 5;
//    int x = 4;
//    int y = 7;
//    float b = 2.3;
//    char c = "M";

//     printf("%d,%f,%c"o,b,c);
//     // operators
//     // Arithematic operators
//     // + - * / %
//     int w = 23;
//     int e = 32;
//     int r = w+e;
//     // The sum of 23 and 32 is 55.
//     printf(" The sum of %d and %d is %d",w,e,r);
    
//     float b = 10.5;
//     int u = 23;
//     int v = (int)b /u;
//     // int to int = int
//     // float to int = float
//     // float to float = float
//     float c = 4.5;
//     int l = 15;
//     float d = l/c;
//     printf("%1.2f",d);

    //1) Find the are of traingle
    // int length;
    // int width;
    // printf("Enter length of triangle:");
    // scanf("%d",&length);
    // printf("Enter width of triangle:");
    // scanf("%d",&width);
    // int area = length * width;
    // printf("The are of the traingle is %d",area);

    //2) WAP to convert Celsius(Centigrade degree temperature to Fahrenheit)
    //     int celsius;
    // int fahrenheit;
    // printf("Enter the value of celsius:");
    // scanf("%d",&celsius);
    // fahrenheit = (celsius*9/5)+32;
    // printf("The fahrenheit is %d",fahrenheit);
    // return 0;

    //3) WAP to claculate SI 
    // int p;
    // int t;
    // int r;
    // int si;
    // printf("Enter the value of p:");
    // scanf("%d",&p);
    // printf("Enter the value of t:");
    // scanf("%d",&t);
    // printf("Enter the value of r:");
    // scanf("%d",&r);
    // si=(p*t*r)/100;
    // printf("The value of simple interest is %d",si);
    // return 0;

    // 4) WAP TO CALCULATE THE ARE OF CIRCLE AND CALCULATE THE VOLUME OF CYLINDER GIVEN ITS RADIUS AND HEIGHT
// float radius;
// float area;
// printf("Enter the radius of the circle: ");
// scanf("%f", &radius);
// area = 3.14159 * radius * radius;
// printf("The area of the circle is: %f", area);
// return 0;

// CYLINDER VOLUME
// float radius; 
// float height; 
// float volume;
// printf("Enter the radius of the cylinder: ");
// scanf("%f", &radius);
// printf("Enter the height of the cylinder: ");
// scanf("%f", &height);
// volume = 3.14159 * radius * radius * height;
// printf("The volume of the cylinder is: %f", volume);
// return 0;

// 5) WAP TO CALCULATE THE TOTAL, AVERAGE, AND PERCENTAGE OF 5 SUBJECT.
// float eng, nepali, account, math, comp; 
//     float total, average, percentage;
//     printf("Enter marks of eng subjects:");
//     scanf("%f",&eng);
//     printf("Enter marks of nepali subjects:");
//      scanf("%f",&nepali);
//     printf("Enter marks of account subjects:");
//      scanf("%f",&account);
//     printf("Enter marks of math subjects:");
//      scanf("%f",&math);
//     printf("Enter marks of comp subjects:");
//      scanf("%f",&comp);
//     total = eng + nepali + account + math + comp;
//     average = total / 5;
//     percentage = (total / 500) * 100;
//     printf("Total marks = %1.2f\n", total);
//     printf("Average marks = %1.2f\n", average);
//     printf("Percentage = %1.2f", percentage); 
    // return 0;

    // 7) WAP to find the volume of the cylinder
//      float pie , radius , height ;
//     float volume;
//     printf("Enter the value of pie:");
//     scanf("%f",&pie);
//     printf("Enter the value of radius:");
//     scanf("%f",&radius);
//     printf("Enter the value of height:");
//     scanf("%f",&height);
//     volume = pie*radius*radius*height;
//     printf("the volume of cylinder: %1.2f",volume);
//     return 0;

//6) WAP to find the perimeter of a rectangle.
//  float length, breadth;
//    float perimeter;
//    printf("Enter the value of length:");
//    scanf("%f",&length);
//    printf("Enter the value of breadth:");
//    scanf("%f",&breadth);
//     perimeter = 2*(length+breadth);
//     printf("The perimeter of a rectangle is: %1.2f\n",perimeter);
//     return 0;

// 8) WAP to find compond interest
//  float principle, rate, time;
//   float compoundinterest;
//   printf("Enter the value of principle:");
//   scanf("%f",&principle);
//   printf("Enter the value of rate:");
//   scanf("%f",&rate);
//   printf("Enter the value of time:");
//   scanf("%f",&time);
//   compoundinterest = principle*(1+ rate/ 100)*time-principle;
//   printf("The compound interest is: %1.2f",compoundinterest);
//   return 0;

// }