#include <stdio.h>
#include <stdlib.h>

int count(int num);

int main()
{
int num;
printf("please input the number to count:\n");
scanf("%d",&num);
int n;
n=count(num);
printf("the count of 1 from 1 to %d is %d\n",num,n);
system("pause");
}

int count(int num)
{
int tmp = num;
int i;
int countnuml=0;
int countnumw=0;
for(i=1;i<=tmp;i++)
{
while(i)
{
if(i%10 == 1)
  countnuml++;
i/=10;
}
countnumw += countnuml;
}
return countnumw;
}
