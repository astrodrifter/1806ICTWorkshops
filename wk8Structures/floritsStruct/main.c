/*1. Declare a structure type, Order, that is suitable for containing information about the orders in
     a florist's shop. The structure should contain members for the type of flower (a string), the
      delivery time in days (an integer), the price (a float), and the customer's name (a string).
       
    a. Write a function that will read in values for each member of an Order from the
       keyboard, and return the completed struct
    b. Write another function that prints out the values in an Order
    c. Write a main program to test your functions
    d. Now extend the structure such that a customer's name is itself a structure consisting
       of a first name (string) and a last name (string). This means that the Order structure is
       now a nested structure. Revise your program from parts (a-c) to handle this extension. */
       
#include <stdio.h>
#define MAXLEN 200

struct Order
{
    char flowerType[MAXLEN];
    int dilveryTime;
    float price;
    char name[MAXLEN];
    
};
typedef struct Order flowerOrder;
flowerOrder readOrder ( void )
{
    flowerOrder newOrder;
    printf("Enter flower type, days for delivery, price and name:\n ");
    scanf("%s %i %f %s", newOrder.flowerType, &(newOrder.dilveryTime), &(newOrder.price), newOrder.name);
    return newOrder;
}
void printOrder ( flowerOrder item )
{
    printf("\nOrder name: %s\n\n", item.name);
    printf("Flower type: %s\n\n", item.flowerType);
    printf("Dilvery: %i days\n\n", item.dilveryTime);
    printf("Price: $%.2f \n\n", item.price);
}


int main(int argc, char **argv)
{
    flowerOrder order1;
	order1 = readOrder();
    printOrder(order1);
	return 0;
}
