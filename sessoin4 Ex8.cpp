#include <stdio.h>

int main(){
	int A,B,C;
	
	printf("Moi ban nhap canh thua nhat : ");
	scanf("%d",&A);
	printf("Moi ban nhap canh thu hai : ");
	scanf("%d",&B);
	printf("Moi ban nhap canh thu ba : ");
	scanf("%d",&C);
	
	if(A>0 &&B >0 && C>0){
		if(A+B>C && A+C>B && B+C>A){
			printf("La 3 canh cua tam giac");
		}else{
			printf("Khong phai 3 canh cua tam giac");
		}
	}else{
		printf("Sai so lieu la mat em!!!");
	}
	return 0;
}
