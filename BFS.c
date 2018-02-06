						//BREADTH FIRST SEARCH//

#include<stdio.h>
int gr[21][21],queue[21],visit[21],f=0,r=-1,n,v,flag;

void bfs(int v)
{
	for(int i=1;i<=n;i++)
	{
		if(gr[v][i]&&!visit[i])
			queue[++r]=i;
	}	
	if(f<=r)
	{
		visit[queue[f]]=1;
		bfs(queue[f++]);
	}
}

int main()
{
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			visit[i]=queue[i]=0;
		}
		printf("\n Enter graph data in matrix form:\n");
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d",&gr[i][j]);
			}
		}	
		printf("\n Enter the starting vertex:\n");
		scanf("%d",&v);
		bfs(v);
		printf("\n The node which are reachable from the vertex %d are:\n",v);
		for(int i=1;i<=n; i++)
		{
			if(visit[i])
			printf("%d\t",i);
			else
			{
				flag=1;
			}
		}
		if(flag)
		{
			printf("\n BFS is not possible...Not all nodes are reachable\n");
		}
		else
			printf("\n BFS is possible...All nodes are reachable\n");
}		
	
