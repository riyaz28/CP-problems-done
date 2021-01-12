#include<bits/stdc++.h>
using namespace std;
#define ll long long



//note for edit distance dp as you are moving forward you are either just adding or replacing characters only when you got reverse they mean by deleting character 
//for more clarity refer quora edit distance

//dp(i,j) is nothing but min moves using add,delete and replace to make that string
//i ,j part denotes substring part not insertion deletion operation the +1,+0 represents insertion deletion

const int N=5001;
int dp[N][N];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s1,s2;
	cin>>s1>>s2;
	int n=s1.length();
	int m=s2.length();
	// n rows,m cols
	dp[0][0]=0;
	for(int i=1;i<=m;i++)
	{
		dp[0][i]=i;
	} 
		for(int i=1;i<=n;i++)
	{
		dp[i][0]=i;
	}
	
	for(int i=1;i<=n;i++)
	{for(int j=1;j<=m;j++)
	{
	  	if(s1[i-1]==s2[j-1])
	  	dp[i][j]=dp[i-1][j-1];
	  	else
	  	dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
	  	
	  //cout<<dp[i][j]<<" ";
	}
	//cout<<endl;
	}

	cout<<dp[n][m];
}




//I'll be answering using top-down approach here.
//So what is actually edit distance problem? It just tries to answer what are the minimum number of changes you need to make in a given string, say A, so that it get converted into another given string, say B.
//
//By changes you mean you can either Add a new letter, or Delete an existing letter, or Replace/Substitute an existing letter with some other letter.
//
//Example (from Wikipedia):
//
//The distance between "kitten" and "sitting" is 3. The minimal edit script that transforms the former into the latter is:
//
//kitten ? sitten (substitution of "s" for "k")
//sitten ? sittin (substitution of "i" for "e")
//sittin ? sitting (insertion of "g" at the end).
//
//We are assuming the cost of making a change (addition, deletion, replacement) is 1, throughout this answer.
//
//If we go ahead and try to solve this problem using top-down DP, the first thing we need to figure out is the sub-problem (i.e. a smaller version of the problem, given its solution we can find out solution for the bigger problem).
//
//I generally tend to think in terms of a recursive function when I think about top-down DP, and the parameters passed to the recursive function defines your state/sub-problems.
//
//So think of what you want: Distance between two given strings of length say x and y.
//So naturally it follows that the function should be of form f(a,b) where a and b are length of the strings (better say offset from the starting position), so now the answer lies in f(x, y) where x and y are the length of the given strings and the sub-problem becomes f(m,n) where m < x; n < y.
//
//Recurrent relation:
//
//So given the solution to a sub-problem how will you solve for a bigger one.
//In top-down approach we assume we have solutions available for all the smaller problem and we try to relate it with bigger ones, for f(x,y) the smaller problems mean:
//f(j, k) where 0 < j <= x; 0 < k <= y, but not j=x and k=y together, this is the case for which we are calculating.
//
//We need to calculate distance between "kitten" and "sitting", so we can follow up from the following three different states:
//
//
//f(x-1, y-1): Minimum distance between "kitte" and "sittin" using some combination of Addition, Deletion or Replacement.
//f(x-1, y): Minimum distance between "kitte" and "sitting" using some combination of Addition, Deletion or Replacement.
//f(x, y-1): Minimum distance between "kitten" and "sittin" using some combination of Addition, Deletion or Replacement.
//
//Someone who is new to DP might ask why not other smaller states, for that I would say let the recursion do it's job.
//
//What can be the minimum distance now?
//
//Say we follow up from f(x-1, y-1) and try to solve for f(x, y), So what's the change? You have been given a new letter at the end of each string. If the new letters added at the end are same then you don't have to make any extra changes to the strings for conversion from A to B, i.e. the changes made for converting "kitte" to "sittin" are enough i.e. f(x,y) = f(x-1, y-1) but if they are different then you have to replace one of the letters for the other, and consider the cost of that change, so finally you can write both in one equation as: f(x, y) = f(x-1, y-1) + diff(A[x], B[y])
//Or you can follow up from a different sub-problem which is : f(x-1, y) OR f(x, y-1) and try to calculate f(x,y). the first one says given distance between "kitte" and "sitting", what is the distance between "kitten" and "sitting"? Simple, you add "n" at the end of "kitte", i.e. you made a change. Now we add it's cost, and the relation becomes f(x,y) = f(x-1, y) + 1, similarly you can argue for the other case and write f(x,y) = f(x, y-1) + 1
//
//Since we are trying to calculate the minimum distance we take the minimum of these values. So combining all of these three the final relation becomes:
//
//f(x,y) = min { f(x-1, y-1) + diff(A[x], B[y]), f(x-1, y) + 1, f(x, y-1) + 1 }
//
//and don't forget to cache the values once calculated for a particular combination of parameters in a look-up table :)
