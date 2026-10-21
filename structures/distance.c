#include <stdio.h>
#include <math.h>
struct City{
    char name[50];
    float x, y;
};
float calculateDistance(struct City c1, struct City c2){
    float dx, dy, distance;
    dx=c2.x-c1.x;
    dy=c2.y-c1.y;
    distance=sqrt(dx*dx+dy*dy);
    return distance;

}
int main(){
    struct City c1, c2;
    float d;
    printf("enter city name: ");
    scanf("%s", c1.name);
    printf("enter x and y coordinates: ");
    scanf("%f %f", &c1.x, &c1.y);
    printf("Enter second city name: ");
    scanf("%49s", c2.name);

    printf("Enter x and y coordinates: ");
    scanf("%f %f", &c2.x, &c2.y);

    d=calculateDistance(c1, c2);
    printf("\nDistance between %s and %s = %.2f units",
           c1.name, c2.name, d);
           return 0;


}
