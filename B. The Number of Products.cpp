#include<bits/stdc++.h>
using namespace std;


/*
dp(i,k)=>defined as number of subsegments (+ or - depending on k) found till index i forming with a[i]'th element

note:dp(i,k) doesn't calculate the total subsegments(+ or -) rather it calculates
the all subsegments formed with that a[i]'th element

and our final answer is dp[1][0]+dp[2][0]+..dp[n][0] for + subsegments
                        dp[1][1]+dp[2][2]+..dp[n][1] for - subsegments
*/

int main()
{
	
	
}
