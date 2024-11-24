#include<stdio.h>
int main()
{
	int a;
	printf("Moi ban nhap so bat ki :");
	scanf("%d", &a);
	
	if(a%3==0&& a%5==0)
	{
		printf("La so chia het cho 3 va 5 ");
	}
	
	else 
	{
		if(a%5==0)
		{
			printf("La so chi chia het cho 5 ");
		}
		else
		{
			if(a%3==0)
			{
				printf("La so chi chia het cho 3");
			}
		}
	}
	
	return 0;
	
}
