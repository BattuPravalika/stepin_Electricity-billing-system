#include <stdio.h>
#include <conio.h>
#include <time.h>
#include<string.h>
int main()

{

    int id,units;

	int i;
    float total_bill;
    char name[40];
    char place[50];
    //Using printf(""); function to show the output on screen

    printf("\n\n\t\t WELLCOME TO ELECTRTICITY BOARD DEPPARTMENT\n\n");

    printf("\t       ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");
    time_t t;
    time(&t);
    printf("%s",ctime(&t));

  for(i=0;i<70;i++)
		printf("=");
    printf("\n\tUpto 20 Units .............................. =Rs.3/Unit      |\n\n");

    printf("\t21 To 30 Units .............................. =Rs.7/Unit     |\n\n");

    printf("\t31 To 50 Units .............................. =Rs.8.5/Unit   |\n\n");

    printf("\t51 To 150 Units ..............................=Rs.10/Unit    |\n\n");

    printf("\t151 To 250 Units .............................. =Rs.11/Unit  |\n\n");

    printf("\t251 To 400 Units .............................. =Rs.12/Unit  |\n\n");

    printf("\t400+ Units ................................. =Rs.13/Unit     |\n\n");
	for(i=0;i<70;i++)
		printf("=");

		printf("customerID:");
		scanf("%d",&id);
		printf("Customer Name:");
		scanf("%s",name);
         printf("Customer place:");
    scanf("%s",place);
    printf("\nPlease Enter Your Total Units Consumed : \n\n");

    //here we are using scanf(""); function to get input from end user
    scanf("%d", & units);
    //after getting input from user, we will check the conditions to calculate actual bill charges
    if (units <= 20)

    total_bill = units * 3;

    else if (units <= 30)

    total_bill = units * 7;

    else if (units <= 50)

    total_bill = units * 8.5;

    else if (units <= 150)

    total_bill = units * 10;

    else if (units <= 250)

    total_bill = units * 11;

    else if (units <= 400)

    total_bill = units * 12;

    else total_bill = units * 13;

    //and finally, we will show result with bill charges
    printf("\n\nYour Total Bill Is Rs.%f", total_bill);

    //here we are using getch(""); function to stop result on screen until we press any key
    getch();

}
