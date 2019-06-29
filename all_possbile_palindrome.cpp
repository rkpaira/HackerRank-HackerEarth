#include<bits/stdc++.h>

using namespace std;

void find(string s,int low,int high, set <string> &sett,int n)
{
	while(low>=0 && high < n && s[low]==s[high])
	{
		
		string x = s.substr(low,high-low+1);
		if(x.length()>1)
		{
			sett.insert(x);
		}
		
		low--;
		high++;
	}
	
}


void allpalindrome(string s)
{
	int n = s.length();
	int i;
	
	set <string> sett;
	
	for(i=0;i<n;i++)
	{
		find(s,i,i,sett,n);
		find(s,i,i+1,sett,n);
		
	
	}
			set <string > :: iterator it;
		for(it = sett.begin(); it!= sett.end(); it++)
		{
			cout<<(*it)<<endl;
		}
	
}

int main()
{
	string s = "abaabd";
	
	allpalindrome(s);
}
