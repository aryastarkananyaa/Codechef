#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
long long c1=0,c2=0;
int i=n-1;
for(int x=1;x<=k&&i>=0;x++){
c1+=a[i];
a[i]=-1;
i-=2;
}
int j=n-2;
for(int y=1;y<=k&&j>=0;y++){
c2+=a[j];
a[j]=-1;
j-=2;
}
long long m=LLONG_MIN;
for(int p=0;p<n;p++){
if(a[i]!=-1)
m=max(m,a[p]);
}
c2+=m;
cout<<max(c1,c2)<<"\n";
}
return 0;
}
