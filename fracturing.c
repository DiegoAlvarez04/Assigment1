#include <stdio.h>
#include <math.h>
#define PI 3.14159



double calculateDistance(){
double x1,x2,y1,y2;
 x1=3;
 y1=3;
x2=6;
y2=6;
double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

printf("Point #1 entered: x1=%.1lf; y1=%.1lf\n",x1,y1);
printf("Point #2 entered: x2= %.1lf;y2=%.1lf\n",x2,y2);
printf("The distance between the two points is: %.1lf\n",distance);


return distance;
}
double calculatePerimeter(){
double distance = calculateDistance();
double perimeter = 2*PI*(distance/2); //perimeter of a circle is 2pir, where r is diameter/2

//printf("Point 1: x1=%lf,y1=%lf), Point 2: x2=%lf,y2=%lf, Perimeter: %lf\n",x1,y1,x2,y2,perimeter);
printf("The perimeter of the city encompassed by your request is: %.1lf\n",perimeter);
return 3.5;
}
double calculateArea(){
double x1=3;
double y1=3;
double x2=6;
double y2=6;
double distance= calculateDistance();
double area = PI*pow(distance/2,2); //area of a circle is 2pir^2, where r is diameter/2
//printf("Point 1: x1=%.1lf,y1=%.1lf), Point 2: x2=%.1lf,y2=%.1lf, area: %.1lf\n",x1,y1,x2,y2,area);
printf("The area of the city encompassed by your request is: %.1lf\n",area);
return 2.0;
}

double calculateWidth(){
double distance= calculateDistance();
//printf("Point 1 (%lf,%lf), Point 2 (%lf,%lf), width: %lf)",x1,y1,x2,y2,calculateDistance());
printf("The width of the city encompassed by your request is: %.1lf\n",distance);
return 1.0;
}
double calculateHeight(){
double distance= calculateDistance();
//printf("Point 1 (%lf,%lf), Point 2 (%lf,%lf), height: %lf)",x1,y1,x2,y2,calculateDistance());
printf("The height of the city encompassed by your request is: %.1lf\n",distance);
return 1;
}


int main(){
calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();
    return 0; 
}
