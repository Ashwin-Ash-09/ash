#include<stdio.h>
void main()
{
	int num[20],a,i,j,n;
	printf("Enter the number of elements in array :");
	scanf("%d",&n);
	printf("enter the elements\n");
	for (i=0;i<n;++i)
		scanf("%d",&num[i]);
	for (i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if (num[i]>num[j])
			{
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
	}
	printf("The numbers in assending order is:\n");
	for(i=0;i<n;++i)
	{
		printf("%d ",num[i]);
	}
}
