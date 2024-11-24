#include<stdio.h>
int main()
{
	int month;
	printf("Moi ban nhap so thang:");
	scanf("%d", &month);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("Thang nay co 31 ngay");
		break;
		case 4: case 6: case 9: case 11: 
		printf("thang nay co 30 ngay");
		break; 
		case 2:
		printf("Thang nay co 28 or 29 ngay");
		break;
		default:
		printf("Thang nay khong co em:<"); 
	} 


	return 0;
}
