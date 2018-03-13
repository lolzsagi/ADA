#include<stdio.h>

int main()
{
	 int arr[99][99],x=1,value,flag=0,magic[99],size,countj,countk,countl,ra=1,sum=0;
	int st;
	 
	printf("\nEnter the number of vertices\n");
	scanf("%d",&size);
	int counti=size;
	printf("\nEnter the values of vertex\n");
	for( int i=1;i<=size;i++)
	{
	for( int j=1;j<=size;j++)
	{
	scanf("%d",&arr[i][j]);
	}
	}
	printf("\nEnter the starting vertex\n");
	scanf("%d",&st);
	magic[ra]=1000;
			 int m=st,arr1[99][99];
			
			if(size==5)
			{
				int i=1,j=2,k=3,l=4;
				if(i==m)
				{
				i=5;
				}
				if(m==k)
				{
				k=5;
				}
				if(m==l)
				{
				l=5;
				}
				if(j==m)
				{
				m=5;
				}
			}

			else if(size==4)
			{
				int j=1,k=2,l=3;
				if(j==m)
				{
				j=4;
				}
				if(m==k)
				{
				k=4;
				}
				if(l==m)
				{
				l=4;
				}
			}
			
			else if(size==3)
			{
				int k=1,l=2;
				if(k==m)
				{
				k=3;
				}
				if(m==l)
				{
				l=3;
				}
				
			}

			for( int i=1;i<=size;i++)
			{	
				
				countj=size;
				if(flag)
					{
					break;
					}
				for( int j=1;j<=size;j++)
				{
					countk=size;
					if(flag)
					{
					break;
					}
						
					for( int k=1;k<=size;k++)
					{	
						countl=size;
						if(flag)
						{
						break;
						}
						
						for( int l=1;l<=size;l++)
						{
							if(flag)
							{
							break;
							}

							if(size==5)
							{
			if(((m!=i)&&(m!=j)&&(m!=k)&&(m!=l)&&(i!=j)&&(i!=k)&&(i!=l)&&(j!=k)&&(j!=l)&&(k!=l))&&(arr[m][i]&&arr[i][j]&&arr[j][k]&&arr[k][l]&&arr[l][m]))
								{
									sum=0;
		
									sum=sum+arr[m][i]+arr[i][j]+arr[j][k]+arr[k][l]+arr[l][m];
									printf("\n");
									printf("%d -> %d -> %d",m,i,j);
									printf(" -> %d -> %d -> %d \t%d",k,l,m,sum);
									if(magic[ra]>sum)
									{
										magic[ra]=sum;
										arr1[ra][1]=arr1[ra][6]=m;
										arr1[ra][2]=i;
										arr1[ra][3]=j;	
										arr1[ra][4]=k;
										arr1[ra][5]=l;
									}
									
									else if(magic[ra]==sum)
									{
										ra++;
										magic[ra]=sum;
										arr1[ra][1]=arr1[ra][6]=m;
										arr1[ra][2]=i;
										arr1[ra][3]=j;	
										arr1[ra][4]=k;
										arr1[ra][5]=l;	
									}
								}
							}						
								//


							else if(size==4)
							{
								if(((m!=j)&&(m!=k)&&(m!=l)&&(j!=k)&&(j!=l)&&(k!=l))&&(arr[m][j]&&arr[j][k]&&arr[k][l]&&arr[l][m]))
								{
									sum=0;
									sum=sum+arr[m][j]+arr[j][k]+arr[k][l]+arr[l][m];
									printf("\n");
									printf("%d -> %d -> %d",m,j,k);
									printf(" -> %d -> %d \t%d",l,m,sum);
									if(magic[ra]>sum)
									{
										magic[ra]=sum;
										arr1[ra][1]=arr1[ra][5]=m;
										arr1[ra][2]=j;
										arr1[ra][3]=k;	
										arr1[ra][4]=l;
									}
									
									else if(magic[ra]==sum)
									{
										ra++;
										magic[ra]=sum;
										arr1[ra][1]=arr1[ra][5]=m;
										arr1[ra][2]=j;
										arr1[ra][3]=k;	
										arr1[ra][4]=l;	
									}
								}
							}

						//

									else if(size==3)
									{
										if(((m!=k)&&(m!=l)&&(k!=l))&&(arr[m][k]&&arr[k][l]&&arr[l][m]))
										{
											sum=0;
											sum=sum+arr[m][k]+arr[k][l]+arr[l][m];
											printf("\n %d -> %d -> %d ->%d \t \t %d",m,k,l,m,sum);
											if(magic[ra]>sum)
											{
												magic[ra]=sum;
												arr1[ra][1]=arr1[ra][4]=m;
												arr1[ra][2]=k;
												arr1[ra][3]=l;	
									
											}
							
											else if(magic[ra]==sum)
											{
												ra++;
												magic[ra]=sum;
												arr1[ra][1]=arr1[ra][4]=m;
												arr1[ra][2]=k;
												arr1[ra][3]=l;		
											}
										}
									}
						//
									if(i==size)
									{
										i=1;
									}
									if(j==size)
									{
										j=1;
									}
									if(k==size)
									{
										k=1;
									}
									if(l==size)
									{
										l=1;
									}
									if(m==size)
									{
										m=1;
									}
			
							
							if(countl==1)
							{
							break;
							}
							countl--;
						}
						if(countk==1)
						{
							if(size==3)
							{
							flag=1;
							}
						break;
						}
						countk--;
					}
				if(countj==1)
				{
				if(size==4)
					{
					flag=1;
					}
				break;
				}
				countj--;
			}
			if(counti==1)
			{
			break;
			}
			counti--;
		}
				printf("\nThe shortest distance and its value is:\n");		
				
				while(ra!=0)
				{
					if(size==5)
					{
						printf("%d -> %d -> %d" ,arr1[ra][x],arr1[ra][x+1],arr1[ra][x+2]);
						printf(" -> %d -> %d -> %d",arr1[ra][x+3],arr1[ra][x+4],arr1[ra][x+5]);
						
					}
					else if(size==4)
					{
						printf("%d -> %d -> %d -> %d -> %d ",arr1[ra][x],arr1[ra][x+1],arr1[ra][x+2],arr1[ra][x+3],arr1[ra][x+4]);
					}
					else if(size==3)
					{
						printf("%d -> %d -> %d -> %d ",arr1[ra][x],arr1[ra][x+1],arr1[ra][x+2],arr1[ra][x+3]);
					}
					printf("\t%d \n",magic[ra]);
					ra--;
				}






}



int arrp[21][21];
for(int i=i;i<=ra;i++)
{
for(int j=1;i<=size;j++)
{
arrp[i][j]=arr1[i][j];
}
}













