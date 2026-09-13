#include <stdio.h>

int main() {
    float speed, time;
    float distance_km, meters, centimeters, millimeters;

    printf("Enter speed in km/h: ");
    scanf("%f", &speed);
    
    printf("Enter time in hours: ");
    scanf("%f", &time);

    distance_km = speed * time;
    meters = distance_km * 1000.0f;
    centimeters = distance_km * 100000.0f;
    millimeters = distance_km * 1000000.0f;

    printf("\n--- Conversion Results ---\n");
    printf("Distance in Meters:      %.2f m\n", meters);
    printf("Distance in Centimeters: %.2f cm\n", centimeters);
    printf("Distance in Millimeters: %.2f mm\n", millimeters);

    return 0;
}
