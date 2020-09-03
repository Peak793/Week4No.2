#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void changeToint(char array[6], int* x, int* y);
int main()
{
	int *hour;											
	int *min;										
	hour = (int*)malloc(2 * sizeof(int));
	min = (int*)malloc(2 * sizeof(int));
	char array[6];										
	scanf("%s", array);
	for (int i = 0; i < 5; i++)		
	{
		if (array[i] < 48 || array[i]>58)
		{
			printf("Error\n");
			return 0;
		}
	}
	changeToint(array,hour,min);
	if (hour[0] > 1 || min[0] >= 6)
	{
		printf("Error\n");
		return 0;
	}
	if (hour[0] == 1 && hour[1] > 2)
	{
		printf("Error\n");
		return 0;
	}
	int hh = (10 * (*(hour+0))) + *(hour+1);
	int mm = (10 * (*(min+0))) + *(min+1);
	if (mm == 0)
	{
		printf("It's %d o'clock\n", hh);
		goto end;
	}
	if (mm < 30 && mm!=15)
	{
		printf("It's %d minutes past %d\n",mm,hh);
	}
	else if (mm == 15)
	{
		printf("It's aquarter past %d\n",hh);
	}
	else if (mm == 30)
	{
		printf("It's half past %d\n",hh);
	}
	else if (mm > 30 && mm != 45)
	{
		if (hh + 1 < 12)
		{
			if (60 - mm != 1)
			{
				printf("It's %d minutes to %d\n", 60 - mm, hh + 1);
			}
			else 
			{
				printf("It's %d minute to %d\n", 60 - mm, hh + 1);
			}
		}
		else
		{
			if (60 - mm != 1)
			{
				printf("It's %d minutes to %d\n", 60 - mm, 01);
			}
			else
			{
				printf("It's %d minute to %d\n", 60 - mm, 01);
			}
		}
	}
	else if (mm == 45)
	{
		if (hh + 1 < 12)
			printf("It's aquarter to %d\n", hh + 1);
		else
			printf("It's aquarter to %d\n",01);
	}
	end :
	return 0;
}
void changeToint(char array[6], int* x,int *y)
{
	for (int i = 0; i < 2; i++)
	{
		switch (array[i]) {
		case 48:
			*(x+i) = 0;
			break;
		case 49:
			*(x + i) = 1;
			break;
		case 50:
			*(x + i) = 2;
			break;
		case 51:
			*(x + i) = 3;
			break;
		case 52:
			*(x + i) = 4;
			break;
		case 53:
			*(x + i) = 5;
			break;
		case 54:
			*(x + i) = 6;
			break;
		case 55:
			*(x+i) = 7;
			break;
		case 57:
			*(x+i) = 8;
			break;
		case 58:
			*(x+i) = 9;
			break;
		}
	}
	for (int i = 3; i < 5; i++)
	{
		switch (array[i]) {
		case 48:
			*(y+i-3) = 0;
			break;
		case 49:
			*(y + i - 3) = 1;
			break;
		case 50:
			*(y + i - 3) = 2;
			break;
		case 51:
			*(y + i - 3) = 3;
			break;
		case 52:
			*(y + i - 3) = 4;
			break;
		case 53:
			*(y + i - 3) = 5;
			break;
		case 54:
			*(y + i - 3) = 6;
			break;
		case 55:
			*(y + i - 3) = 7;
			break;
		case 56:
			*(y + i - 3) = 8;
			break;
		case 57:
			*(y + i - 3) = 9;
			break;
		}
	}
}

