//Ceyda Yenilmez
//2018280053


#include <stdio.h>

int main()
{
	int i,j,input_sayi, toplam_sayi;
	printf("Mukemmel sayilar kaca kadar hesaplanacak?\n ");
	scanf("%d", &input_sayi);
	for (i=1;i<=input_sayi;i++){
		toplam_sayi = 0;
		for (j=1; j<i;j++){
			if(i % j == 0){
				toplam_sayi = toplam_sayi + j;
			}
		}
		if(i==toplam_sayi){
			printf("\nMukemmel Sayi : %d", i);
		}
				
	}
}
