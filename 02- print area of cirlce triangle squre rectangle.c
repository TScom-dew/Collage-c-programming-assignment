#include <stdio.h>
#include <math.h>

void circleArea();
void squareArea();
void rectangleArea();
void triangleArea();
int main()
{

    // area of circle
    circleArea();

    // Area of square
    squareArea();

    // area of rectangle
    rectangleArea();

    // area of triangle
    triangleArea();

    return 0;
}


// defination of funtion 

void circleArea(){
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);
    printf("Area of the circle= %.2f", 3.14 * r * r);

}
void squareArea(){
    int side;
    printf("\n Entet the side of square\n");
    scanf("%d", &side);
    printf("Area of square= %d", side * side);
}
void rectangleArea(){
     int length, bredth;
    printf("\nEnter the length and bredth of rectangle\n");
    scanf("%d %d", &length, &bredth);
    printf("Area of rectangle= %d", length * bredth);
}
void triangleArea(){
     int a, b, c, s = 0;
    float area;
    printf("\n Enter the three sides of triangle \n");
    scanf("%d %d %d ", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf(" Area of triangle= %f", area);
}