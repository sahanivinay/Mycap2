#include<stdio.h>
int main()
{
    printf(" *****CAFETERIA MENU***** \n\n\t1. PIZZA \n\t2. BURGER \n\t3. PASTA \n\t4. FRENCH FRIES \n\t5. SANDWICH");
    int choice;
    printf("\n\nSELECT YOUR ORDER:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("FOOD ITEM - PIZZA \nPRICE - Rs 239/-");
        break;
        case 2: printf("FOOD ITEM - BURGER \nPRICE - Rs 129/-");
        break;
        case 3: printf("FOOD ITEM - PASTA \nPRICE - Rs 179/-");
        break;
        case 4: printf("FOOD ITEM - FRENCH FRIES \nPRICE - Rs 99/-");
        break;
        case 5: printf("FOOD ITEM - SANDWICH \nPRICE - Rs 149/-");
        break;
        default: printf("*****NOT AVAILABLE*****");
    }
}
