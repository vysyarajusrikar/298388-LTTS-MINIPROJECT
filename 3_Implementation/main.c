#include<stdio.h>
#include<string.h>
#include"busdetails.h"

void displaybus(struct bus *, int );
void enterbusdetails(struct bus *, int );
void reservation(struct bus *, struct person *, struct booking *, int , int );
void displaycust(struct person *, int );
void entercustdetails(struct person *, int );
void displaybusdetails(struct bus *, int );
void displaycustdetails(struct person *, struct booking *, int );
float costing( int , float );

int main()
{
	struct bus ptr1[100];
	struct person ptr2[100];
	struct booking ptr3[100];
	int x,r=0,p=0;
	char pass[20];
	char pak[20] = "IamAdmin"; //Password
	
	while(x!=5)
	{
		int choice;
		printf("                 Bus Booking System\n");
		printf(" -------------------------------------------------------------------\n");
		printf("               1- Update Bus Schedule (Admin):           \n");
		printf("               2- Check Bookings made (Admin):          \n");
		printf("               3- Book tickets:                              \n");
		printf("               4- Check Bus Schedule:                             \n");
		printf("               5- Exit system:                                    \n");
		printf(" ------------------------------------------------------------------ \n");
		printf("  Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter Admin password:\n");
				scanf("%s",&pass);
				if (strcmp(pass,pak)==0)
				{
				
					if(r>=0)
					{
						enterbusdetails(ptr1,r);
						r = r+1;
					}
				}
				break;
			case 2:
				printf("Enter Admin password:\n");
				scanf("%s",&pass);
				if (strcmp(pass,pak)==0)
				{
					int y=0,a=0,b=0;
					while(y!=3)
					{	
						int ch;
						printf("                 Admin Options\n");
						printf(" -------------------------------------------------------------------\n");
						printf("               1- Check Bus routes:           \n");
						printf("               2- Check Customer bookings:          \n");
						printf("               3- Exit:                              \n");
						printf(" ------------------------------------------------------------------ \n");
						printf("  Enter your choice: ");
						scanf("%d",&ch);
						
						switch(ch)
						{
							case 1:
								while(a!=3)
								{
									int busd;
									printf(" -------------------------------------------------------------------\n");
									printf("               1- Print all Bus details:           \n");
									printf("               2- Search specific bus ID:          \n");
									printf("               3- Exit:                              \n");
									printf(" ------------------------------------------------------------------ \n");
									printf("  Enter your choice: ");
									scanf("%d",&busd);
									switch(busd)
									{
										int sp_id;
										case 1:
											displaybus(ptr1, r);			
											break;
										case 2:
											printf("Enter ID:\n");
											scanf("%d",&sp_id);
											displaybusdetails(ptr1,sp_id);
											break;
										case 3:
											a=3;
											break;
										default: 
											printf("Incorret Entry\n");
											break;
									}
								}
								break;	
							case 2:
								while(b!=3)
								{
									int custd;
									printf(" -------------------------------------------------------------------\n");
									printf("               1- Print all Customer details:           \n");
									printf("               2- Search specific customer ID:          \n");
									printf("               3- Exit:                              \n");
									printf(" ------------------------------------------------------------------ \n");
									printf("  Enter your choice: ");
									scanf("%d",&custd);
									switch(custd)
									{
										int cuid;
										case 1:
											displaycust(ptr2, r);			
											break;
										case 2:
											printf("Enter ID:\n");
											scanf("%d",&cuid);
											displaycustdetails(ptr2,ptr3,cuid);
											break;
										case 3:
											b=3;
											break;
										default: 
											printf("Incorret Entry\n");
											break;
									}
								}
								break;	
							case 3:
								y=3;
								break;
							default: 
								printf("Incorret Entry\n");
								break;
						}
					}
				}
				break;
			case 3:
				if(p>=0)
				{
					entercustdetails(ptr2,p);
					reservation(ptr1,ptr2,ptr3,p,r);
					p = p+1;
				}
				break;
			case 4:
				displaybus(ptr1, r);			
				break;
			case 5:
				x=5;
				break;
			default: 
				printf("Incorret Entry\n");
				break;
		}
	}
	return 0;
}	


									
					
					
					
					
					
					
					
					
								
					
					
					
					
					
					
					
					
