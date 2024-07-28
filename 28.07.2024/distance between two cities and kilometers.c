#include<stdio.h>
int main()
{
 double distance_km,distance_m,distance_cm;
 printf("distance between two cities is km");
 scanf("%d",&distance_km);
 distance_m = distance_cm*1000;
 distance_cm = distance_m*100; 
 printf("\n total km in meters: %2d \n",distance_m);
 printf("\n total km in centimeters: %2d \n",distance_cm);
 return 0;
}
