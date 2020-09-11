#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void random1() {

	printf("\n[1] Random 1\n");
	printf("\n1.Car\n2.Fan\n3.Mobile\n4.Money is 100 baht\n");

}

void random3() {

	printf("\n[3] Random 2\n");
	printf("\n1.Apple\n2.Orange\n3.Grape\n4.Strawberry\n\n");
}


void random2() {

	printf("\n[2]Random 3\n");
	printf("\n1.Diamond\n2.Watch\n3.Bracelet\n4.Ring\n");
}


char random1_1() {

	char i[] = { '1','2','3','4','5' };
	return i[rand() % 5];
}

void show1(int coin) {



	char com = random1_1();

	if (com == '1') {printf("Car\n"); printf("You have coin %d", coin); }

	else if (com == '2') { printf("Fan\n");  printf("You have coin %d", coin); }

	else if (com == '3') { printf("Mobile\n"); printf("You have coin %d", coin); }

	else if (com == '4') { printf("Mirror\n"); printf("You have coin %d", coin); }

	else
	{

		if (rand() % 3 == 1)
		{
			printf("add %d coin\n", 1000);
			coin = coin + 1000;
			printf("You have coin %d", coin);
		}
		else if (rand() % 3 == 2)
		{
			coin = coin - 500;
			printf("coin = -500\n");
			printf("You have % d coin", coin);

		}
		else
		{
			printf("Not add coin\n");
			printf("You have % d coin", coin);

		}

	}



}

void show2(int coin) {


	char com = random1_1();

	if (com == '1') {  printf("Diamond\n");  printf("You have coin %d", coin ); }

	else if (com == '2') { printf("Watch\n");  printf("You have coin %d", coin ); }

	else if (com == '3') { printf("Bracelet\n"); printf("You have coin %d", coin); }

	else if (com == '4') { printf("Ring\n"); printf("You have coin %d", coin); }

	else
	{
		if (rand() % 3 == 1)
		{
			printf("add %d coin\n", 1000);
			coin = coin + 1000;
			printf("You have coin %d", coin);
		}
		else if (rand() % 3 == 2)
		{
			coin = coin - 500;
			printf("coin = -500\n");
			printf("You have % d coin", coin);

		}
		else
		{
			printf("Not add coin\n");
			printf("You have % d coin", coin);

		}

	}
}

void show3(int coin) {


	char com = random1_1();

	if (com == '1') {  printf("Apple \n"); printf("You have coin %d\n", coin); }

	else if (com == '2') {  printf("Orange\n"); printf("You have coin %d\n", coin); }

	else if (com == '3') { printf("Grape\n"); printf("You have coin %d\n", coin); }

	else if (com == '4') { printf("Strawberry\n"); printf("You have coin %d\n", coin); }

	else
	{
		if (rand() % 3 == 1)
		{
			printf("add %d coin\n", 1000);
			coin = coin + 1000;
			printf("You have coin %d", coin);
		}
		else if (rand() % 3 == 2)
		{
			coin = coin - 500;
			printf("coin = -500\n");
			printf("You have %d coin", coin);

		}
		else
		{
			printf("Not add coin\n");
			printf("You have %d coin", coin);

		}
	}

}

int main() {
	srand(time(NULL));


	int coin = 1000;		
	int v;
	printf("You have %d coin\n",coin);
	random1();
	random2();
	random3();
	printf("[4]quit");
	printf("\n");

	do
	{
		printf("Select : ");
		scanf_s("%d",&v);
		printf("\n");
		if (v == 1)
		{
			coin = coin - 500;
			show1(coin); if ( rand() % 2 == 0)
			{
				printf("\nyou get it\n");
			}
			else
			{
				printf("\nYou lose\n");
			}
			

		}

		else if (v==2)
		{
			coin = coin - 500;
			show2(coin);
			if (rand() % 2 == 0)
			{
				printf("\nyou get it\n");
			}
			else
			{
				printf("\nYou lose\n");
			}

		}

		else if (v==3)
		{
			coin = coin - 500;
			show3(coin);
			if (rand() % 2 == 0)
			{
				printf("\nyou get it\n");
			}
			else
			{
				printf("\nYou lose\n");
			}
		}

		else if (v==4)
		{
			printf("Your coin = %d coin" ,coin);
			break;

		}
		else
		{
			printf("Try again\n");
		}
		printf("\n");



	} while (coin >= 500 );



}