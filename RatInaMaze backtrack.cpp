#include<bits/stdc++.h>
using namespace std;

const int N=4;


void print(int sol[N][N])
{
	for(int i=0;i<N;i++)
	{for(int j=0;j<N;j++)
		{
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool issafe(int grid[N][N],int sol[N][N],int row,int col)
{
	if(row<N&&row>=0&&col<N&&col>=0&&grid[row][col]==0)
	 return true;
	 
	 return false;	
}


void solve(int grid[N][N],int sol[N][N],int row,int col)
{
	if(row==N-1&&col==N-1&&grid[N-1][N-1]==0)
	{
		sol[row][col]=1;
		print(sol);
		return;
	}
	
	if(issafe(grid,sol,row,col))
	{
		sol[row][col]=1;
		
		solve(grid,sol,row+1,col);
		solve(grid,sol,row,col+1);
		
		//backtrack part if the path doesn't exist in that case we go back and remove that possibility in recursion tree
		sol[row][col]=0;
		return;
	}
	return;
}

int main()
{   
	int grid[N][N]={0};
	
	for(int i=0;i<N;i++)
	{for(int j=0;j<N;j++)
		{
			cin>>grid[i][j];
		}
	}
	
	int sol[N][N]={0};
	solve(grid,sol,0,0);
}
