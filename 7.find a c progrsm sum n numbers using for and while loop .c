#include <stdio.h>
void main()
{
 int n, count, sum=0,op;
 printf("Enter an integer: ");
 scanf("%d",&n);
 printf("\n Press 1-do while loop, 2-for loop: ");
 scanf("%d",&op);
switch(op)
{
case 1:
 count=1;
 do
 {
sum+=count; 
 ++count;
 } while(count<=n); 
 printf("\n\nSum = %d",sum);
 break;
case 2:
 for(count=1;count<=n;++count) 
 {
 sum+=count; 
 }
 printf("\n\nSum = %d",sum);
 break;
default:
 printf("\n\n Invalid Option");
 }
}
