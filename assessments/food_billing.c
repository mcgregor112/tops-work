#include<stdio.h>
#include<string.h>

int main(){

    int choice , quantity , total ;
    char more;
    
    do{    
        printf("\n---------- MENU ----------\n");
        printf("1.Pizza  :        rs180/pcs\n");
        printf("2.Burger :        rs100/pcs\n");
        printf("3.Dosa   :        rs120/pcs\n");
        printf("4.Idli   :        rs50/pcs\n");
        printf("Enter your choose... : ");
        scanf("%d", &choice);
        
        if(choice == 1){
            printf("\nYou have selected Pizza.");
        }else if(choice == 2){
            printf("\nYou have selected Burger.");
        }else if(choice == 3){
            printf("\nYou have selected Dosa.");
        }else if(choice == 4){
            printf("\nYou have selected Idli.");
        }else{
            printf("invalid item");
        }
        
        if (choice >= 1 && choice <= 4) {
            printf("\nEnter quantity: ");
            scanf("%d", &quantity);

            switch (choice) {
                case 1:
                    total += 180 * quantity;
                    break;
                case 2:
                    total += 100 * quantity;
                    break;
                case 3:
                    total += 120 * quantity;
                    break;
                case 4:
                    total += 50 * quantity;
                    break;
            }
            }else {
            printf("\nInvalid choice. Please try again.\n");
            }
            
            printf("Total amount is Rs. %d\n", total);
            printf("Do you want place more oreders ? y or n :");
            scanf("%s", &more);
            continue ;
    }while(more == 'y' || more == 'Y');
    
      return 0;
    
}