#include <stdio.h>

int main(){
	int a;
	printf ("xin moi nhap gia tri nguyen de kiem tra am/duong: ");
	scanf("%d", &a);
	if (a<0){
	
		printf ("so ban vua nhap la so am");
    }else{
		printf ("so ban vua nhap la so duong");
	} 

	return 0;
}
