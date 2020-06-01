#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>

int main()
{
	int x, vehicle, bus = 0, cycle = 0, rickshaw = 0, amount = 0, a, t_wheelers = 0, f_wheelers = 0, rs,b,n;
	
	char ch;
	
	printf("\n\n\t\t\tPARKING MANAGEMENT SYSTEM\n\n\n");
	printf("\t\t\t**********************************\n\n");
    sleep(2);
	printf("\tPrices for vehicles are\n\n* * * * * * * * * * * * * * * * * *\n\n\tFor Bus 50rs\n\tfor Cycle 10rs\n\tFor Rickshaw 20rs\n\tFor 2 wheelers 30rs\n\tFor 4 wheelers 40rs\n\n\n");
	sleep(3);
	printf("\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
		do
		{
			
			printf("\t\t1. Enter 1 for bus\n\t\t2. Enter 2 for cycle\n\t\t3. Enter 3 for rickshaw\n\t\t4. Enter 4 for 2 wheelers\n\t\t5. Enter 5 for 4 wheelers\n\t\t6. Enter 6 for show status\n\t\t7. Enter 7 for delete data\n\t\t8. Enter 8 for exit\n\n\n");
			printf("Enter status:\n");
			scanf("%d",&n);
		
			if (n==1)
				{printf("your amount would be 50rs\n");
					printf("kindly pay the required amount to the cashier\n");
					scanf("%d",&rs);
					{
					
						if(rs<50)
						{
								printf("insufficient amount pay %d more.\n",50-rs);
								scanf("%d",&b);
							    
							    {
							    	if(b==50-rs)
							    	{
							    		printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
							    	else
							    	{
										printf("insufficient amount pay %d more.\n",50-rs-b);
										scanf("%d",&b);
										printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
								}
						}
							else if(rs>50)
							{
								printf("Collect %d amount from cashier\n\n",rs-50);
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
							else
							{
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
					}
				    bus = bus+1;
				}
						
			else if (n==2)
				{printf("your amount would be 10rs\n");
					printf("kindly pay the required amount to the cashier\n");
					scanf("%d",&rs);
					{
					
						if(rs<10)
						{
								printf("insufficient amount pay %d more.\n",10-rs);
								scanf("%d",&b);
							    
							    {
							    	if(b==10-rs)
							    	{
							    		printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
							    	else
							    	{
										printf("insufficient amount pay %d more.\n",10-rs-b);
										scanf("%d",&b);
										printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
								}
						}
							else if(rs>10)
							{
								printf("Collect %d amount from cashier\n\n",rs-10);
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
							else
							{
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
					}
				     cycle = cycle+1;
				}
					 
			else if (n==3)
			{
				printf("your amount would be 20rs\n");
					printf("kindly pay the required amount to the cashier\n");
					scanf("%d",&rs);
					{
					
						if(rs<20)
						{
							printf("insufficient amount pay %d more.\n",20-rs);
							scanf("%d",&b);
									
							    	if(b==20-rs)
							    	{
							    		printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
										
									}
							    	else
							    	{
							    		
										printf("insufficient amount pay %d more.\n",20-rs-b);
										scanf("%d",&b);
									
										printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
							
						}
							else if(rs>20)
							{
								printf("Collect %d amount from cashier\n\n",rs-20);
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
							else
							{
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
					}
				
				     rickshaw++;
				}
					
			else if (n==4)
				{
					printf("your amount would be 30rs\n");
					printf("kindly pay the required amount to the cashier\n");
					scanf("%d",&rs);
					{
					
						if(rs<30)
						{
								printf("insufficient amount pay %d more.\n",30-rs);
								scanf("%d",&b);
							    
							    {
							    	if(b==30-rs)
							    	{
							    		printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
							    	else
							    	{
										printf("insufficient amount pay %d more.\n",30-rs-b);
										scanf("%d",&b);
										printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
								}
						}
							else if(rs>30)
							{
								printf("Collect %d amount from cashier\n\n",rs-30);
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
							else
							{
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
					}
				     t_wheelers++;
				}
					
			else if (n==5)
				{
				printf("your amount would be 40rs\n");
					printf("kindly pay the required amount to the cashier\n");
					scanf("%d",&rs);
					{
					
						if(rs<40)
						{
								printf("insufficient amount pay %d more.\n",40-rs);
								scanf("%d",&b);
							    
							    {
							    	if(b==40-rs)
							    	{
							    		printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
							    	else
							    	{
										printf("insufficient amount pay %d more.\n",40-rs-b);
										scanf("%d",&b);
										printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
										sleep(2);
									}
								}
						}
							else if(rs>40)
							{
								printf("Collect %d amount from cashier\n\n",rs-40);
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
							else
							{
							    printf("\t\t\tTHANKYOU!! PLEASE VISIT AGAIN\n\n\nNEXT VEHICLE PLEASE\n\n\n ");
								sleep(2);
							}
					}
				    f_wheelers++;
				}
			else if (n==6)
				{	
			    	printf("number of bus: %d\n", bus);
					printf("number of cycles: %d\n", cycle);
					printf("number of rickshaw: %d\n", rickshaw);
					printf("number of vehicles= %d\n", bus + cycle + rickshaw);
					amount = (bus * 50) + (cycle * 10) + (rickshaw * 20) + (t_wheelers * 30) + (f_wheelers * 40);
					printf("total amount= %d rs.\n\n\n\n", amount);
					sleep(10);   
	            }
				
			else if (n==7)
				{
					printf("All vehicles deleted\n");
	                bus = 0;
	                cycle = 0;
	                rickshaw = 0;
	                printf("number of bus: %d\n", bus);
					printf("number of cycles: %d\n", cycle);
					printf("number of rickshaw: %d\n", rickshaw);
					printf("number of vehicles= %d\n\n\n\n", bus + cycle + rickshaw);
					sleep(10);   
	        	}
	        else if (n==8)
			break;	
	      	else
			printf("enter correct option");	
						 		
			}
		while(n!=0);
		
		
		
FILE *fp;
fp = fopen("kinjal.txt","w");
if (fp== NULL)
{
	printf("file opening error");
}


	fprintf(fp,"number of bus: %d\n", bus);
	fprintf(fp,"number of cycles: %d\n", cycle);
	fprintf(fp,"number of rickshaw: %d\n", rickshaw);
	fprintf(fp,"number of vehicles= %d\n", bus + cycle + rickshaw);
		amount = (bus * 50) + (cycle * 10) + (rickshaw * 20) + (t_wheelers * 30) + (f_wheelers * 40);
	fprintf(fp,"total amount= %d rs.\n\n\n\n", amount);
fclose(fp);
return 0;
	}

