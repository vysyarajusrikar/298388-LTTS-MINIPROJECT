#include "busdetails.h"

float costing( int , float );

void enterbusdetails(struct bus *p, int n)
{
	printf("Enter name of Bus:");
	scanf("%s",(p + n)->name);
	printf("Destination:");
	scanf("%s",(p + n)->to);
	printf("From:");
	scanf("%s",(p + n)->from);
	printf("Cost:");
	scanf("%f",&(p + n)->cost);
	(p + n)->bus_id =n;
	(p + n)->seats =40;
}

void displaybus(struct bus *p, int n)
{
	printf("        Sevices Available        \n");
	for(int i=0; i<n; i++)
	{
		printf("Bus ID: %d\n",(p+i)->bus_id);
		printf("Bus Name: %s\n",(p+i)->name);
		printf("Destination: %s\n",(p+i)->to);	
		printf("From: %s\n",(p+i)->from);
		printf("Cost: Rs %f\n",(p+i)->cost);
		printf("-------------------------------------------------\n");
	}	
}

void displaycust(struct person *p, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("CustomerID: %d\n",(p+i)->id);
		printf("Name: %s\n",(p+i)->name);
		printf("Phone num: %s\n",(p+i)->phone);	
		printf("-------------------------------------------------\n");
	}	
}
									
void reservation(struct bus *p1, struct person *p2, struct booking *p3, int id, int count)
{
	int busid,bseat;
	float val;
	(p3 + id)->id = id;
	displaybus(p1,count);
	printf("Enter the bus ID of your choice:");
	scanf("%d",&busid);
	(p3 + id)->bus_id = busid;
	float price = (p1+busid)->cost;
	if((p1 + busid)->seats >= 0)
	{
		printf("Seats available: %d\n",(p1 + busid)->seats);
		printf("Enter required no. of seats: ");
		scanf("%d",&bseat);
		(p1+busid)->seats = (p1+busid)->seats - bseat;
		if((p1 + busid)->seats >= 0)
		{
			printf("Seats Booked!\n");
			(p3 + id)->seats = bseat;
			val = costing(bseat,price);
			(p2+id)->cost = val;
			printf("Total Amount: %f",(p2+id)->cost);
		}
		else
		{
			printf("Booking failed\n");
		}
	}
	else
	{
		printf("Bus Full\n");
	}			
}				
					
void displaybusdetails(struct bus *p1, int n)
{
	printf("        Bus Details       \n");
	printf("Bus ID: %d\n",(p1+n)->bus_id);
	printf("Bus Name: %s\n",(p1+n)->name);
	printf("Destination: %s\n",(p1+n)->to);	
	printf("From: %s\n",(p1+n)->from);
	printf("Cost: Rs %f\n",(p1+n)->cost);
	printf("Seats: %d\n",(p1+n)->seats);
	printf("-------------------------------------------------\n");	
}					

void entercustdetails(struct person *p, int n )
{
	printf("Customer Name:");
	scanf("%s",(p + n)->name);
	printf("Phone Number:");
	scanf("%s",(p + n)->phone);
	(p + n)->id = n;	
}
				
void displaycustdetails(struct person *p1, struct booking *p2, int n)
{
	printf("        Customer details       \n");
	printf("CustomerID: %d\n",(p1+n)->id);
	printf("Name: %s\n",(p1+n)->name);
	printf("Phone num: %s\n",(p1+n)->phone);
	printf("Bus booked: %d\n",(p2+n)->bus_id);
	printf("No. of seats: %d\n",(p2+n)->seats);	
	printf("-------------------------------------------------\n");	
}					

float costing( int s, float c)
{
	return (s*c);
}
