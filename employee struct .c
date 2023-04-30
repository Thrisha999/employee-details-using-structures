#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char name[50];
	int id;
	int salary;
	int date_of_join;
}s1;
void main()
{   int i;
	for(i=0;i<5;i++)
	{
		printf("enter employee name:");
		scanf("%s",s1.name);
		printf("enter id no. of employee");
		scanf("%d",&s1.id);
		printf("enter salary:");
		scanf("%d",&s1.salary);
		printf("enter phone_number");
		scanf("%d",&s1.date_of_join);
	}
	for(i=0;i<5;i++)
	{
		printf("name=%s\n id no.=%d\n salary=%d\n date_of_join=%d\n",s1.name,s1.id,s1.salary,s1.date_of_join);
	}
}
