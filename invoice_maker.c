#include <stdio.h>
#include <stdlib.h>

int main() {
    while(1){
    char name[50];
    char ph_no[30];
    char cstm_id[30];

    int baby_soap = 0, body_lotion = 0, hair_spray = 0, deo = 0;
    int sugar = 0, flour = 0, cooking_oil = 0, rice = 0, pulses = 0, spices = 0;
    int cold_coffee = 0, coke = 0, thums_up = 0, sprite = 0, limca = 0, mazza = 0;

    int total = 0, cosmetic_total = 0, grocery_total = 0, beverages_total = 0;

    
        system("clear");

        printf("  ₹₹₹₹₹₹₹₹____####____BILLING MACHINE____####____₹₹₹₹₹₹₹₹₹₹\n\n");
        printf("Customer Details:\n\n");

        printf("Customer Name: ");
        scanf("%s", name);

        printf("\nCustomer Phone No: ");
        scanf("%s", &ph_no);

        printf("\nCustomer ID: ");
        scanf("%s", &cstm_id);

        printf("-----------------------------------------------------\n");

        while (1) {
            printf("###### Product Category ########\n\n");
            int ch;
            printf("1. Cosmetics\n");
            printf("2. Grocery\n");
            printf("3. Beverages\n");
            printf("4. Checkout\n");
            printf("Enter response: ");
            scanf("%d", &ch);
            printf("----------------------------------------------------\n");

            if (ch == 1) { // Cosmetics
                while (1) {
                    printf("\nYou chose Cosmetics:\n\n");
                    printf("Products:\n");
                    printf("1. Baby Soap ₹20\n");
                    printf("2. Body Lotion ₹30\n");
                    printf("3. Hair Spray ₹35\n");
                    printf("4. Deo ₹15\n");
                    printf("5. Previous Menu\n");
                    printf("Enter response: ");
                    int ch_cos;
                    scanf("%d", &ch_cos);

                    if (ch_cos == 1) {
                        printf("Quantity of Baby Soap: ");
                        scanf("%d", &baby_soap);
                    } else if (ch_cos == 2) {
                        printf("Quantity of Body Lotion: ");
                        scanf("%d", &body_lotion);
                    } else if (ch_cos == 3) {
                        printf("Quantity of Hair Spray: ");
                        scanf("%d", &hair_spray);
                    } else if (ch_cos == 4) {
                        printf("Quantity of Deo: ");
                        scanf("%d", &deo);
                    } else if (ch_cos == 5) {
                        printf("Returning to previous menu...\n");
                        break;
                    } else {
                        printf("Invalid option! Try again.\n");
                    }
                }
            } else if (ch == 2) { // Grocery
                while (1) {
                    printf("\nYou chose Grocery:\n\n");
                    printf("Products:\n");
                    printf("1. Sugar ₹40\n");
                    printf("2. Flour ₹23\n");
                    printf("3. Cooking Oil ₹180\n");
                    printf("4. Rice ₹70\n");
                    printf("5. Pulses ₹140\n");
                    printf("6. Spices ₹280\n");
                    printf("7. Previous Menu\n");
                    printf("Enter response: ");
                    int ch_grocery;
                    scanf("%d", &ch_grocery);

                    if (ch_grocery == 1) {
                        printf("Quantity of Sugar: ");
                        scanf("%d", &sugar);
                    } else if (ch_grocery == 2) {
                        printf("Quantity of Flour: ");
                        scanf("%d", &flour);
                    } else if (ch_grocery == 3) {
                        printf("Quantity of Cooking Oil: ");
                        scanf("%d", &cooking_oil);
                    } else if (ch_grocery == 4) {
                        printf("Quantity of Rice: ");
                        scanf("%d", &rice);
                    } else if (ch_grocery == 5) {
                        printf("Quantity of Pulses: ");
                        scanf("%d", &pulses);
                    } else if (ch_grocery == 6) {
                        printf("Quantity of Spices: ");
                        scanf("%d", &spices);
                    } else if (ch_grocery == 7) {
                        printf("Returning to previous menu...\n");
                        break;
                    } else {
                        printf("Invalid option! Try again.\n");
                    }
                }
            } else if (ch == 3) { // Beverages
                while (1) {
                    printf("\nYou chose Beverages:\n\n");
                    printf("Products:\n");
                    printf("1. Cold Coffee ₹50\n");
                    printf("2. Coke ₹20\n" );
                    printf("3. Thums Up ₹20\n");
                    printf("4. Sprite ₹20\n");
                    printf("5. Limca ₹20\n");
                    printf("6. Mazza ₹10\n");
                    printf("7. Previous Menu\n");
                    printf("Enter response: ");
                    int ch_bev;
                    scanf("%d", &ch_bev);

                    if (ch_bev == 1) {
                        printf("Quantity of Cold Coffee: ");
                        scanf("%d", &cold_coffee);
                    } else if (ch_bev == 2) {
                        printf("Quantity of Coke: ");
                        scanf("%d", &coke);
                    } else if (ch_bev == 3) {
                        printf("Quantity of Thums Up: ");
                        scanf("%d", &thums_up);
                    } else if (ch_bev == 4) {
                        printf("Quantity of Sprite: ");
                        scanf("%d", &sprite);
                    } else if (ch_bev == 5) {
                        printf("Quantity of Limca: ");
                        scanf("%d", &limca);
                    } else if (ch_bev == 6) {
                        printf("Quantity of Mazza: ");
                        scanf("%d", &mazza);
                    } else if (ch_bev == 7) {
                        printf("Returning to previous menu...\n");
                        break;
                    } else {
                        printf("Invalid option! Try again.\n");
                    }
                }
            } else if (ch == 4) { // Checkout
                printf("\nProceeding to Checkout...\n");
                break;
            } else {
                printf("Invalid option! Try again.\n");
            }
        }
        
    //cosmatic
      
   int  boso=20*baby_soap;
   int bolo =30*body_lotion;
   int hasp=35*hair_spray;
   int d=15*deo;
   
   cosmetic_total= boso+bolo+hasp+d;
   
   //glocery
   
   int sg=40*sugar;
   int fr=23*flour;
   int co_oil=180*cooking_oil;
   int ri=70*rice;
   int pul=140*pulses;
   int sp=280*spices;
  grocery_total=sg+fr+co_oil+ri+pul+sp;
    //bevrages
    
    int cofe=50*cold_coffee;  
    int ck=20*coke;
    int thuup=20*thums_up;
    int spr = 20* sprite;
    int lica=20*limca;
    int maza=10*mazza;
    beverages_total=cofe+ck+thuup+spr+lica+maza;
    
    
    total=cosmetic_total+grocery_total+beverages_total;
    printf("%d",total);
    
    int c;
    scanf("%d",&c);
    }
    return 0;
}
