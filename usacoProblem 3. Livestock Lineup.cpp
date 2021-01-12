#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	vector<string>dict;
	dict.push_back("Beatrice");
	dict.push_back("Sue");
	dict.push_back("Belinda");
	dict.push_back("Bessie");
	dict.push_back("Betsy");
	dict.push_back("Blue");
	dict.push_back("Bella");
	dict.push_back("Buttercup");
	//vector<pair<string,string>>m;

	sort(dict.begin(),dict.end());
	do
	{
//	 	for(int i=0;i<n;i++)
//	{
//		string a,b,c,d,e,f;
//		cin>>a>>b>>c>>d>>e>>f;
//		
//		if(checker(a,f)==0)
//	}
    for(auto ele:dict)
	cout<<ele<<" ";
	
	cout<<endl;			
	}while(next_permutation(dict.begin(),dict.end()));
	
}
