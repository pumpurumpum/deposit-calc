#include<stdio.h>

int main()
{
	int day,summa_vklada;
	
	printf("Input day");
	scanf("%d\n",&day);
	printf("Input sum");
	scanf("%d\n",&summa_vklada);
	
if ((day<365)&&(summa_vklada>10000)){
	int dohod;
	if (day<=30){
		dohod=summa_vklada*0.9;
		}
	if (31<=day<=120){
		dohod = summa_vklada*1.02;
		}
	if (121<=day<=240){
		dohod = summa_vklada*1.06;
		}
	if (241<=day<=365){
		dohod = summa_vklada*1.12;
		}
	printf("%d",dohod); }
	
else printf("No correct");

	return 0;
	}