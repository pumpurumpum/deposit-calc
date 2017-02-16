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
		printf("%d",revenue);}
	if ((31<=day)&&(day<=120)){
		revenue = deposit*1.02;
	printf("%d",revenue);}
	if ((121<=day)&&(day<=240)){
		revenue = deposit*1.06;
 	printf("%d",revenue);}
	if ((241<=day)&&(day<=365)){
		revenue = deposit*1.12;
	printf("%d",revenue);}
	}
else printf("No correct");

	return 0;
	}
