#include<stdio.h>
int main() {
	int year, month, day, sum = 0, i;
	scanf("%d,%d,%d", &year, &month, &day);
	if (month == 1)
		printf("%d", day);
	else {
	     for(i=1;i<month;i++)
			 switch (i)
			 {
			 case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				 sum += 31;
				 break;
			 case 4:case 6:case 9:case 11:
				 sum += 30;
				 break;
			 case 2:
				 sum += 28;
			 }
		 sum += day;
		 if (year % 4 == 0 && month > 2)
			 sum += 1;
		 printf("%d", sum);
	}
	return 0;
}