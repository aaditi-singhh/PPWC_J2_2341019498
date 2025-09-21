#include <stdio.h>

int main()
{
    printf("****************** Calculating the Trip Expenditure ******************\n");

    // Name input
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    float budget;
    printf("Enter your trip budget: ");
    scanf("%f", &budget);

    // Source and destination
    char source[100], destination[100];
    printf("Enter your starting point: ");
    scanf("%s", source);
    printf("Enter your destination: ");
    scanf("%s", destination);
    printf("Your source and destination are: %s -> %s\n", source, destination);

    // Variables
    int trav = 0, choice = 0;
    float fair = 0.0, dist, petrol, fast_tag, total_cost = 0.0;
    int sel;

    printf("\nEnter which part you want to calculate : \n");
    printf("\t1 - TRAVELLING \n\t2 - STAY \n\t3 - FOOD \n");
    scanf("%d", &sel);

    switch (sel) {
        
        // Travelling
        case 1:  
            printf("%s chose to calculate TRAVELLING cost.\n", name);
            printf("Enter your selection for mode of transport: \n");
            printf("\t1 - TRAIN \n\t2 - BUS \n\t3 - FLIGHT \n\t4 - MOTORCYCLE \n\t5 - CAR \n");
            scanf("%d", &trav);

            switch (trav) {
                case 1:
                    printf("%s chose TRAIN. Enter the fare: ", name);
                    scanf("%f", &fair);
                    total_cost += fair;
                    break;
                case 2:
                    printf("%s chose BUS. Enter the fare: ", name);
                    scanf("%f", &fair);
                    total_cost += fair;
                    break;
                case 3:
                    printf("%s chose FLIGHT. Enter the fare: ", name);
                    scanf("%f", &fair);
                    total_cost += fair;
                    break;
                case 4:
                    printf("%s chose MOTORCYCLE.\n", name);
                    printf("Enter distance covered and petrol cost per km: ");
                    scanf("%f %f", &dist, &petrol);
                    total_cost += dist * petrol;
                    break;
                case 5:
                    printf("%s chose CAR.\n", name);
                    printf("Enter distance covered, petrol cost per km, and fast tag cost: ");
                    scanf("%f %f %f", &dist, &petrol, &fast_tag);
                    total_cost += dist * petrol + fast_tag;
                    break;
                default:
                    printf("Invalid transport option!\n");
                    break;
            }
            break;   

        case 2:  
            // Stay
            printf("%s chose to calculate STAY cost.\n", name);
            printf("Select Accommodation type: \n");
            printf("\t1 - HOME STAY \n\t2 - HOTEL \n\t3 - GUEST HOUSE \n");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Enter home stay cost: ");
                    scanf("%f", &fair);
                    total_cost += fair;
                    break;
                case 2:
                    printf("Enter hotel cost: ");
                    scanf("%f", &fair);
                    total_cost += fair;
                    break;
                case 3:
                    printf("Enter guest house cost: ");
                    scanf("%f", &fair);
                    total_cost += fair;
                    break;
                default:
                    printf("Invalid option!\n");
                    break;
            }
            break;   

        case 3:  
            // Food
            printf("%s chose to calculate FOOD cost.\n", name);
            printf("Select Food Plan: \n");
            printf("\t1 - BREAKFAST\n\t2 - LUNCH\n\t3 - DINNER\n");
            scanf("%d", &choice);

            int days;
            switch (choice) {
                case 1:
                    printf("Enter number of days: ");
                    scanf("%d", &days);
                    total_cost += days * 500;
                    break;
                case 2:
                    printf("Enter number of days: ");
                    scanf("%d", &days);
                    total_cost += days * 1000;
                    break;
                case 3:
                    printf("Enter number of days: ");
                    scanf("%d", &days);
                    total_cost += days * 2000;
                    break;
                default:
                    printf("Invalid option!\n");
                    break;
            }
            break;   

        default:
            printf("Invalid main option!\n");
            break;
    }

	// Loan Calculation
	if(budget-total_cost <0) {
		char loan_choice;
		printf("OHH no !! the trip expenditure exceeds our budget by %f \n",total_cost-budget);
		printf("\nDo you take a loan for the trip? (y/n): ");
		scanf(" %c", &loan_choice);
		if (loan_choice == 'y' || loan_choice == 'Y') {
		    printf("Hurrayyy we are taking a loan !! abb puri jaa sakte hein :)\n");
			float p, r, t, si;
			printf("Enter Principal, Rate of Interest, and Time(in years): ");
			scanf("%f %f %f", &p, &r, &t);
			si = (p*r*t)/100;
			printf("Loan Interest = %f\n",si);
			si=p+si;
			printf("\n****************************************************\n");
			printf("Dear %s, Your Total Trip Expenditure = Rs. %f \n Remaining budget with us is %f \n", name, total_cost,budget-total_cost);
			printf("******************************************************\n");
		}
		else {
			printf("*********************************************************** \n\tWe are not taking a loan !!!\n Trip canceled \n************************** see u next time *****************************");
		}
	}
	else {
		// Final Output
		printf("\n****************************************************\n");
		printf("Dear %s, Your Total Trip Expenditure = Rs. %f \n Remaining budget with us is %f \n", name, total_cost,budget-total_cost);
		printf("******************************************************\n");
	}
	return 0;
}
