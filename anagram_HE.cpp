#include<bits/stdc++.h>

using namespace std;

void anagram(string s1, string s2)
{
   int h1[26]={0};
   int h2[26]={0};
   long long int i,c=0;
   
	for(i=0;i<s1.length();i++)
   {
       if(s1[i]>='a')
         h1[s1[i]-'a']++;
       else
         h1[s1[i]-'A']++;
   }
   
    for(i=0;i<s2.length();i++)
   {
       if(s2[i]>='a')
         h2[s2[i]-'a']++;
       else
         h2[s2[i]-'A']++;
   }
   
   
   for(i=0;i<26;i++)
   {
       c += abs(h1[i]-h2[i]);
   }
   
   cout<<c<<endl;
   c=0;
   return;
	
}

int main()
{
	string s1;
	string s2;
	
	cin>>s1>>s2;	
	anagram(s1,s2);
}
