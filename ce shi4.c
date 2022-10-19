#include<stdio.h>
int main()
{
	char grade;
	scanf_s("%c", &grade);
	printf("your score:");
	switch (grade)
	{
	case 'A':printf("100~~90"); break;
	case'B':printf("90~~80"); break;
	case'C':printf("80~~70"); break;
	case'D':printf("70~~60"); break;
	case'E':printf("0~~60"); break;
	default:printf("your date in error!");
	}
	return 0;
}