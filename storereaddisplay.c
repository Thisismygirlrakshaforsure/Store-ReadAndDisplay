#include<stdio.h>
#include<conio.h>
void main()
{
  int p,c,m,t,avg;
char name[50], ch;
FILE *fp;
fp=fopen("marks.dat","a");
do
{
printf("enter name & marks in 3 different subjects");
scanf("%s %d %d %d", name, &p, &c, &m);
fprintf(fp,"%s \t %d \t %d \t %d \t, name,p,c,m);
  printf("/n Do you want to add more data?");
scanf("%c",&ch);
}
  while(ch=='Y' || ch=='y')
  printf("Data saved successfully");
fclose(fp);
fp=fopen("marks.dat","r");
printf("\n Name \t Total \t Average");
while (fscanf(fp"%s %d %d, name, &p, &c, &m)!=EOF
  {
  t=p+c+m;
  avg=t/3;
printf("\n %s \t %d \t %d \t, name, p, c, m);
  }
fclose(fp);
getch();
}
