#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s; cin>>s;
long long len=0;
for(int i=0;i<n-1;i++){
if(s[i]==s[i+1]) len+=2;
else len+=1;
}
while(k--){
long long q; cin>>q; q-=1;
if(s[q]=='1')
s[q]='0';
else 
s[q]='1';

if(q<n-1){
if(s[q]==s[q+1])
len++;
else
len--;
}
if(q>0){
if(s[q-1]==s[q])
len++;
else
len--;
}
cout<<len<<"\n";
}
}
return 0;
}
