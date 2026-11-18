#include<stdio.h>

int main (){
    int total_distance, time_mins, fuel_efficiency, number_package;
    float fuel_price, driver_perHour, add_delivery, fuel_consumed, fuel_cost, travel_hours, driver_payment, total_delivery, cost_perPackage, speed;

    printf("Enter total distance (km): ");
    scanf("%d", &total_distance);

    printf("Enter total travel time (minutes): ");
    scanf("%d", &time_mins);

    printf("Enter fuel efficiency (km/L): ");
    scanf("%d", &fuel_efficiency);

    printf("Enter fuel price per liter: ");
    scanf("%f", &fuel_price);

    printf("Enter number of packages: ");
    scanf("%d", &number_package);

    printf("Enter driver payment per hour: ");
    scanf("%f", &driver_perHour);

    printf("Enter additional expenses: ");
    scanf("%f", &add_delivery);

    fuel_consumed=(float)total_distance/(float)fuel_efficiency;
    fuel_cost= fuel_consumed*fuel_price;
    travel_hours= (float)time_mins/60;
    driver_payment= travel_hours*driver_perHour;
    total_delivery= fuel_cost+driver_payment+add_delivery;
    cost_perPackage= total_delivery/(float)number_package;
    speed= (float)total_distance/travel_hours;

    printf("\n================================\n");
    printf("     DELIVERY TRIP REPORT       \n");
    printf("================================\n");

    printf("Total Distance     : %d km\n", total_distance);
    printf("Travel Time        : %.2f hours\n", travel_hours);
    printf("Fuel Consumed      : %.2f liters\n", fuel_consumed);
    printf("Fuel Cost          : PHP %.2f\n", fuel_cost);
    printf("Driver Payment     : PHP %.2f\n", driver_payment);
    printf("Additional Expenses: PHP %.2f\n", add_delivery);
    printf("---------------------------------\n");
    printf("Total Delivery Cost: PHP %.2f\n", total_delivery);
    printf("Cost per Package   : PHP %.2f\n", cost_perPackage);
    printf("Average speed      : %.2f km/h\n", speed);
    printf("=================================");

return 0;
}
