#include<stdio.h>
void main ()
{  int minutes,h,m;
	printf("enter the minutes");
	scanf(" %d",& minutes);
	h=minutes/60;
	m=minutes%60;
	printf("%d hour(s) %d minute(s)", h, m);
}
