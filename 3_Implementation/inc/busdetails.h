#include<stdio.h>
#include<stdlib.h>

struct bus{
	char name[30];
	char to[30];
	char from[30];
	float cost;
	int bus_id;
	int seats;
};

struct person{
	char name[25];
	char phone[15];
	int id;
	float cost;
};

struct booking{
	int id;
	int bus_id;
	int seats;
};
