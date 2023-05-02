#include<stdio.h>
int main()
{
int n,c,search;
int array[100];
printf("entet the array size:");
scanf("%d",&n);
printf("enter the elements: ");
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
}
printf("enter a number to search\n");
{
scanf("%d",&search);
}
for(c=0;c<n;c++)
{
  if(array[c]==search)
{
   	printf("element is identified at position %d\n",c);
	break;
}
}
if(c==n)
  printf("%d element is not identified \n",search);
  
return 0;
}
