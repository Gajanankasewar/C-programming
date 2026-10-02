
//user input student detail
#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[50];
	int age;
	
};
int main()
{
   struct student s1;
	printf("STUDENT DETAILS:\n");
	printf("enter student id:");
	scanf("%d",&s1.id);
	printf("%d\n",s1.id);
	
	printf("Enter your name:");
	scanf("%s",s1.name);
	printf("%s\n",s1.name);

	
	printf("Enter your age: ");
	scanf("%d",&s1.age);
	printf("%d\n",s1.age);	
}