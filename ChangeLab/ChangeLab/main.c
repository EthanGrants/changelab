/**************************************************************
 *Class:                     CSCI 112                                                                                        *
 *Instructor:               Ronald Burgher                                                                              *
 *Programmer:          Ethan Grant                                                                                    *
 *Project:                 Change Lab                                                                                     *
 **************************************************************************************************/

#include <stdio.h>

FILE *fp;

#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    fp = fopen("csis.txt", "w");
    // Declare Variables
    double tendereditem = 100.00;
    double cost = 21.17;
    
    printf("Cost: %20.2lf\n", cost);
    fprintf(fp, "Cost: %20.2lf\n", cost);
    printf("Tendered: %17.2lf\n", tendereditem);
    fprintf(fp, "Tendered: %17.2lf\n", tendereditem);
    printf("- - - - - - - - - - - - - - -\n");
    fprintf(fp, "- - - - - - - - - - - - - - -\n");
    
    // Declare Variables in cents
    double tendereditemcents = 100.00 * 100;
    double costcents = 21.17 * 100;
    // Get the amount due
    int remaining = tendereditemcents - costcents;
    
    // Project the amount of change used by each device
    int twentyBills = remaining / (20*100);
    remaining %= 2000;
    printf("Twenty-Dollar Bills: %1d \n", twentyBills);
    fprintf(fp, "Twenty-Dollar Bills: %1d \n", twentyBills);
    
    int tenBills = remaining / (10*100);
    remaining %= 1000;
    printf("Ten-Dollar Bills: %4d \n", tenBills);
    fprintf(fp, "Ten-Dollar Bills: %4d \n", tenBills);
    
    int fiveBills = remaining / (5*100);
    remaining %= 500;
    printf("Five-Dollar Bills: %3d \n", fiveBills);
    fprintf(fp, "Five-Dollar Bills: %3d \n", fiveBills);
    
    int oneBills = remaining / (1*100);
    remaining %= 100;
    printf("One-Dollar Bills: %4d \n", oneBills);
    fprintf(fp, "One-Dollar Bills: %4d \n", oneBills);
    
    int quarters = remaining / 25;
    remaining %= 25;
    printf("Quarters: %12d \n", quarters);
    fprintf(fp, "Quarters: %12d \n", quarters);
    
    int dimes = remaining / 10;
    remaining %= 10;
    printf("Dimes: %15d \n", dimes);
    fprintf(fp, "Dimes: %15d \n", dimes);
    
    int nickels= remaining / 5;
    remaining %= 5;
    printf("Nickels: %13d \n", nickels);
    fprintf(fp, "Nickels: %13d \n", nickels);
    
    int pennies = remaining / 1;
    remaining %= 1;
    printf("Pennies: %13d \n", pennies);
    fprintf(fp, "Pennies: %13d \n", pennies);
    
    // Close out the txt file
  fclose(fp);
    return 0;
}

