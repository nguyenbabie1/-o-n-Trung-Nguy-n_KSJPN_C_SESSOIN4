#include <stdio.h>

int main(){
	int a,du;
	printf ("xin moi nhap gia tri nguyen de kiem tra chan/le: ");
	scanf("%d", &a);
	du = a % 2;
	if( du == 0){
	
		printf ("so ban vua nhap la so chan");
    }else{
		printf ("so ban vua nhap la so le");
	} 

	return 0;
}
