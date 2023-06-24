#include<stdio.h>
#pragma warning(disable:4996)
//Defined constant
#define BOOK_A 246.00
#define BOOK_B 76.46
#define BOOK_C 150.68
#define BOOK_D 121.95
#define BOOK_E 71.80
#define BOOK_F 313.95
#define BOOK_G 103.36
#define BOOK_H 106.97
#define BOOK_I 213.89
//Create Function
void logo();
void selectOption();
void displaymenu();
void softwareField();
void webField();
void mobileField();
void order();
int bookqty();



void main()
{

	//Variables that control the display
	int option, chooseField;

	logo();

	do
	{
		selectOption();
		scanf("%d", &option);

		//Option 1 will display the menu for 3 field book
		if (option == 1)
		{
			displaymenu();
			scanf("%d", &chooseField);
			printf("\n");
			switch (chooseField)
			{

			case 1:
				softwareField();
				break;
			case 2:
				webField();
				break;
			case 3:
				mobileField();
				break;
			default:
				printf("Invalid choose ^-^ !!!\n");
				printf("Please key in input 1, 2 and 3\n");
			}
		}
		else if (option == 2) //option 2 display the program that let customers choose the book they want and calculate the total price
		{

			order();

		}

		else if (option == 3)//option 3 will exit and stop the program ,then display words of thanks
		{
			printf("\n\n\t\t\t\t\t\t\t\tTHANK YOU FOR COMING\n");
			printf("\t\t\t\t\t\t\t\tHAVE A NICE DAY :) !!!\n\n");
		}
		else
			printf("Please select option 1 ,2 ,3"); // display when the customers key in a wrong input for option



	} while (option != 3);   // controls the loop unless user want to exit the program


}


void logo() //Function that display the logo for UMT POS SYSTEM book shop and welcome message
{
	printf("\t\t\t*****************************************\n");
	printf("\t\t\t*\t       ************         \t*\n");
	printf("\t\t\t*\t      **************       \t*\n");
	printf("\t\t\t*\t       ##   **   ##        \t*\n");
	printf("\t\t\t*\t       ##   **   ##        \t*\n");
	printf("\t\t\t*\t      +##   **   ##+       \t*\n");
	printf("\t\t\t*\t      ++##  **  ##++       \t*\n");
	printf("\t\t\t*\t      +++########+++       \t*\n");
	printf("\t\t\t*\t      +++ +++++  +++       \t*\n");
	printf("\t\t\t*\t      +++  +++   +++       \t*\n");
	printf("\t\t\t*\t      +++   +    +++       \t*\n");
	printf("\t\t\t*****************************************\n");

	printf("***           *** *********  *****  *********   ********   *****    **** *********           \n");
	printf(" ***   ***   ***  ****       *****  *********  **********  *****    **** ****       ^      ^ \n");
	printf("  *** ***** ***   *********  *****  ****       ***    ***  *** ***** *** ********* ($)    ($)\n");
	printf("   ***** *****    *********  *****  ****       ***    ***  ***  ***  *** *********     ==    \n");
	printf("    ***   ***     ****       *****  *********  **********  ***   *   *** ****         *--*   \n");
	printf("     *     *      *********  *****  *********   ********   ***       *** *********           \n");
}


void selectOption()//Function that display the option
{
	printf("\nSelect an option ( 1 = View Menu , 2 = Place an order , 3 = Exit ) --> ");

}


void displaymenu()//Function that display the menu about the 3 field of programming book
{
	printf("Select a field to view:\n");
	printf("1 --> Software Development Programming\n");
	printf("2 --> Web Programming\n");
	printf("3 --> Mobile Programming\n");
	printf("Choose a field :");
}


void softwareField()//Function that display the software programming books
{
	printf("Software Development Programming Books :\n");
	printf("A = Code Complete: A Practical Handbook of Software Construction,2nd Edition    RM246.81\n");
	printf("B = Software Development for Beginners Step by Step                             RM 76.46\n");
	printf("C = Docs for Developers: An engineer’s Field Guide to Technical Writing         RM150.68\n");
	printf("Continue\n");

}


void webField()//Function that display the web programming books
{
	printf("Web Programing field :\n");
	printf("D = Coding : Common programming languages include HTML, PHP, cascading style sheets, and JavaScript for front-end design.  RM121.95\n");
	printf("E = Responsive design: people use a variety of devices to view websites.                                                   RM 71.80\n");
	printf("F = Web Application Architecture 2e - Principles, Protocols and Practice                                                   RM 313.95\n");
	printf("Continue\n");

}


void mobileField()//Function that display the mobile programming books
{
	printf("Mobile Programming field :\n");
	printf("G = Beginning App Development with Flutter: Create Cross-Platform Mobile Apps  RM103.36 \n");
	printf("H = Coding All-in-One For Dummies (For Dummies (Computer/Tech)) 2nd Edition    RM106.97\n");
	printf("I = Mobile Applications Development: with Python in Kivy Framework             RM213.89\n");
	printf("Continue\n");

}


//Function that includes code that lets customers order and then calculate the price of the book and display all things. 
void order() {
	// declare variables
	char response = 'N', response2 = 'Y', book;
	int salesOrder = 1, totalqty = 0, totalqtybook[9] = { 0,0,0,0,0,0,0,0,0 };
	float price1, price2, price3, price4, price5, price6, price7, price8, price9, subtotal = 0, total = 0, totalAmount = 0, discountRate = 0, discount = 0, totalDiscount = 0;
	do {
		//Store the value of quantitybook for each 9 book and Reset it when second sales order start
		int  qty[9] = { 0,0,0,0,0,0,0,0,0 };

		printf("\nSales Order NO %d\n", salesOrder++);


		do {
			//select book & quantity book
			printf("Book A,B,C,D,E,F,G,H,I (X = Exit) :");
			scanf(" %c", &book);
			response = 'N';

			switch (book)
			{
			case 'A':
			{

				qty[0] += bookqty();
				break;
			}
			case 'B':
			{
				qty[1] += bookqty();
				break;
			}
			case 'C':
			{
				qty[2] += bookqty();
				break;
			}
			case 'D':
			{
				qty[3] += bookqty();
				break;
			}
			case 'E':
			{
				qty[4] += bookqty();
				break;
			}
			case 'F':
			{
				qty[5] += bookqty();
				break;
			}
			case 'G':
			{
				qty[6] += bookqty();
				break;
			}
			case 'H':
			{
				qty[7] += bookqty();
				break;
			}
			case 'I':
			{
				qty[8] += bookqty();
				break;
			}
			case 'X':
			{
				printf("Confirm the order? (Y= yes , N = no) :");
				rewind(stdin);
				scanf("%c", &response);
				break;

			}
			default:
				printf("NO SUCH ITEM\n");

			}

		} while (response == 'n' || response == 'N');  // controls the sales order loop

		//Reset value subtotal to 0
		subtotal = 0;
		printf("\n============================================\n");
		//calculate and display books quantities and prices
		if (qty[0] > 0)
		{
			price1 = qty[0] * BOOK_A;
			totalqtybook[0] += qty[0];
			subtotal += price1;
			printf("\nBook A : %d @ RM%.2f = %.2f", qty[0], BOOK_A, price1);
		}

		if (qty[1] > 0)
		{
			price2 = qty[1] * BOOK_B;
			totalqtybook[1] += qty[1];
			subtotal += price2;
			printf("\nBook B : %d @ RM %.2f = %.2f", qty[1], BOOK_B, price2);
		}

		if (qty[2] > 0)
		{
			price3 = qty[2] * BOOK_C;
			totalqtybook[2] += qty[2];
			subtotal += price3;
			printf("\nBook C : %d @ RM%.2f = %.2f", qty[2], BOOK_C, price3);
		}

		if (qty[3] > 0)
		{
			price4 = qty[3] * BOOK_D;
			totalqtybook[3] += qty[3];
			subtotal += price4;
			printf("\nBook D : %d @ RM%.2f = %.2f", qty[3], BOOK_D, price4);
		}

		if (qty[4] > 0)
		{
			price5 = qty[4] * BOOK_E;
			totalqtybook[4] += qty[4];
			subtotal += price5;
			printf("\nBook E : %d @ RM %.2f = %.2f", qty[4], BOOK_E, price5);
		}

		if (qty[5] > 0)
		{
			price6 = qty[5] * BOOK_F;
			totalqtybook[5] += qty[5];
			subtotal += price6;
			printf("\nBook F : %d @ RM%.2f = %.2f", qty[5], BOOK_F, price6);
		}

		if (qty[6] > 0)
		{
			price7 = qty[6] * BOOK_G;
			totalqtybook[6] += qty[6];
			subtotal += price7;
			printf("\nBook G : %d @ RM%.2f = %.2f", qty[6], BOOK_G, price7);
		}

		if (qty[7] > 0)
		{
			price8 = qty[7] * BOOK_H;
			totalqtybook[7] += qty[7];
			subtotal += price8;
			printf("\nBook H : %d @ RM%.2f = %.2f", qty[7], BOOK_H, price8);
		}

		if (qty[8] > 0)
		{
			price9 = qty[8] * BOOK_I;
			totalqtybook[8] += qty[8];
			subtotal += price9;
			printf("\nBook I : %d @ RM%.2f = %.2f", qty[8], BOOK_I, price9);
		}

		// calculate discount and total
		if (subtotal > 400)
			discountRate = 0.05;
		if (subtotal > 600)
			discountRate = 0.10;
		if (subtotal > 800)
			discountRate = 0.15;

		discount = subtotal * discountRate;
		totalDiscount += discount;
		total = subtotal - discount;
		totalAmount += total;

		printf("\n");
		printf("\n============================================\n");
		printf("\n  Subtotal   = RM%7.2f", subtotal);
		printf("\n  Discount   = RM%7.2f", discount);
		printf("\n  Total      = RM%7.2f\n", total);
		printf("\n============================================\n");

		printf("\nNext order ? (Y=yes, N=no) ");
		rewind(stdin);
		scanf("%c", &response2);
	} while (response2 == 'y' || response2 == 'Y');

	for (int i = 0; i <= 8; i++)//loop 9 times to store the total quantity for each book to variable
	{
		totalqty += totalqtybook[i];

	}





	//Output Daily Sales Order Summary Report
	printf("-------------------------------------------------------------------------\n");
	printf("|\t\t\tDAILY SALES ORDER SUMMARY REPORT\t\t|\n");
	printf("|\tTotal Number of Sales Order = 2 \t\t\t\t|\n");
	printf("|\tBook\t\tQuantity Sold Sales\t\tAmount\t\t|\n");
	printf("|\tA   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[0], BOOK_A);
	printf("|\tB   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[1], BOOK_B);
	printf("|\tC   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[2], BOOK_C);
	printf("|\tD   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[3], BOOK_D);
	printf("|\tE   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[4], BOOK_E);
	printf("|\tF   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[5], BOOK_F);
	printf("|\tG   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[6], BOOK_G);
	printf("|\tH   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[7], BOOK_H);
	printf("|\tI   \t\t%18d\t\t%6.2f\t\t|\n", totalqtybook[8], BOOK_I);
	printf("|\t    \t\t                ===\t    ==========\t\t|\n");
	printf("|\tTotal Discount \t\t\t\t\t%6.2f\t\t|\n", totalDiscount);
	printf("|\tTotal  \t\t%18d\t\t%6.2f\t\t|\n", totalqty, totalAmount);
	printf("-------------------------------------------------------------------------\n");

	printf("\t\t\tSHOP CLOSE\n");
	printf("\t\t\tHAVE A NICE DAY\n");


}

//function that store the quantity of book customer want to buy and return the quantiy to each book 
int bookqty() {
	int qty;

	printf("Quantity :");
	scanf("%d", &qty);
	rewind(stdin);
	while (qty < 0)
	{
		printf("Error quantity!!\n");  // validation input
		printf("Quantity :");
		scanf("%d", &qty);
		rewind(stdin);
	}

	return qty;
}


