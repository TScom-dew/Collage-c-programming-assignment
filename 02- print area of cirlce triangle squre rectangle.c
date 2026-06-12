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
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    printf("Area of the circle= %.2f\n", 3.14 * r * r);

}
void squareArea(){
    int side;
    printf("\nEntet the side of square: ");
    scanf("%d", &side);
    printf("Area of square= %d\n", side * side);
}
void rectangleArea(){
     int length, bredth;
    printf("Enter the length and bredth of rectangle: ");
    scanf("%d %d", &length, &bredth);
    printf("Area of rectangle= %d\n", length * bredth);
}
void triangleArea(){
     int a, b, c;
     float s = 0;
    float area;
    printf("Enter the three sides of triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    float value=(s * (s - a) * (s - b) * (s - c));
    // float value=4;
    area=sqrt(value);
    printf("Area of triangle= %f\n", area);
}