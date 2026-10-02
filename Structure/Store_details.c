#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[50];
	int age;
	float marks;
};
int main() 
{
	struct student s1;
	s1.id=1;
    strcpy(s1.name,"Anirudh");
	s1.age=23;
	s1.marks=99;
	
	printf("id:%d",s1.id);
	printf("name:%d",s1.name);
	printf("age:%d",s1.age);
	printf("marks:%f",s1.marks);
}