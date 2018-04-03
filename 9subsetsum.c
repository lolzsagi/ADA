#include<stdio.h>
void subset(int n,int arr[],int value);
int main()
{
 
 int n;
 int arr[10];
 int value;
 int i;
	
printf("Enter the no of elements \n");
scanf("%d",&n);
printf("\nEnter the value of %d elements\n",n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
printf("\nEnter the desired value\n");
scanf("%d",&value);
 subset(n,arr,value);
}


void subset(int n,int arr[],int value)
{
 int i;
 int s=0;
 int x[10];
 for(i=1;i<=n;i++)
  x[i]=0;

 int k=1;
 x[k]=1;
 

 while(1)
 {
  if(k<=n && x[k]==1)
  {
   if(s+arr[k]==value) 
   {
    printf("\nSubset:\n{");
    for(i=1;i<=n;i++)
    {
     if(x[i]==1)
      printf("%d  ",arr[i]);
    }
    printf("}\n");
    x[k]=0;
   }
   else if(s+arr[k]<value)
   {
    s+=arr[k];
   }
   else
   {
    x[k]=0;
   }
  }
  else
  {
   k--;
   while(k>0 && x[k]==0)
   {
    k--;
   }

   if(k==0)
    break;

   x[k]=0;
   s=s-arr[k];
  } 
  k+=1;
  x[k]=1;
 }



}
