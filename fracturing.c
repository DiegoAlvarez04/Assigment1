#include <stdio.h>
#include <math.h>
#define PI 3.14159
double calculateDistance(){
double x1=3;
double y1=3;
double x2=6;
double y2=6;
double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

printf("Point 1 (%lf,%lf), Point 2 (%lf,%lf), distance: %lf\n",x1,y1,x2,y2,distance);

return distance;
}
double calculatePerimeter(){
double x1=3;
double y1=3;
double x2=6;
double y2=6;
double perimeter = 2*PI*(calculateDistance()/2); //perimeter of a circle is 2pir, where r is diameter/2

printf("Point 1: x1=%lf,y1=%lf), Point 2: x2=%lf,y2=%lf, Perimeter: %lf\n",x1,y1,x2,y2,perimeter);

return 3.5;
}
double calculateArea(){
double x1=3;
double y1=3;
double x2=6;
double y2=6;
double area = 2*PI*pow((calculateDistance()/2),2); //area of a circle is 2pir^2, where r is diameter/2
printf("Point 1: x1=%lf,y1=%lf), Point 2: x2=%lf,y2=%lf, area: %lf\n",x1,y1,x2,y2,area);

return 2.0;
}

double calculateWidth(){
double x1=3;
double y1=3;
double x2=6;
double y2=6;
printf("Point 1 (%lf,%lf), Point 2 (%lf,%lf), width: %lf)",x1,y1,x2,y2,calculateDistance());

return 1.0;
}
double calculateHeight(){
double x1=3;
double y1=3;
double x2=6;
double y2=6;
printf("Point 1 (%lf,%lf), Point 2 (%lf,%lf), height: %lf)",x1,y1,x2,y2,calculateDistance());
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
