#include<stdio.h>
int main()
{
    int a[10], b[10], c[10], a1, b1, c1, i, j, k=0, f=0;
    printf("Enter number of  element of set A\n");
    scanf("%d",&a1);
    printf("Enter the element of set A \n");
    for(i=0;i<a1;i++)
    scanf("%d",&a[i]);
    printf("Enter number of  element of set B\n");
    scanf("%d",&b1);
    printf("Enter the element of set B\n");
    for(j=0;j<b1;j++)
    {
     scanf("%d",&b[j]);
    }
    for(i=0;i<a1;i++)
    {
    c[i]=a[i];
    k++;
    }
   for(j=0;j<b1;j++)
    {
    	int f=0;
 for(i=0;i<a1;i++)
      {
        if(c[i]==b[j])
        {
	f=1; 
                break;
       }
      }
      if(f==0)
      {
      	c[k]=b[j];
      	k++;
	  }
    }
    printf("Union of set A and B are ");
    for(i=0;i<k;i++)
    {
    	printf("%d ",c[i]);
	}
	return 0;
  }
