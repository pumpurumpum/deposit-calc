#include<stdio.h>

int main()
{
	int day,deposit;
	
	printf("Input day");
	scanf("%d",&day);
	printf("Input deposit");
	scanf("%d",&deposit);
	
if ((day<365)&&(deposit>10000)){
	int revenue;
	if (day<=30){
		revenue=deposit*0.9;
		}
	if (31<=day<=120){
		revenue = deposit*1.02;
		}
	if (121<=day<=240){
		revenue = deposit*1.06;
		}
	if (241<=day<=365){
		revenue = deposit*1.12;
		}
	printf("%d",revenue); }
	
else printf("No correct");

	return 0;
	}