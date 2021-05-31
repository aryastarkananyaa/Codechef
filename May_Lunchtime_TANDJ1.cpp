#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long a,b,c,d,k;
cin>>a>>b>>c>>d>>k;
long long move = abs(a-c) + abs(b-d);
if (k>=move && (k - move) % 2 == 0)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
}
return 0;
}
