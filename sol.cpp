#include <bits/stdc++.h>

using namespace std;

signed main() {
  int n,m;
  cin>>n>>m;
  vi tr((1<<(n+1)),0);
  for(int i=0;i<1<<n;i++) {
    cin>>tr[i|(1<<n)];
  }
  for(int j1=1<<n;j1<(1<<(n+1));j1++) {
    int j=j1;
    for(int i=n-1;i>=0;i--) {
      if((i)%2==(n%2)) tr[j/2]=tr[j]+tr[j^1];
      else tr[j/2]=tr[j]^tr[j^1];
      j>>=1;
    }
  }
  while(m--) {
    int t;
    cin>>t;
    if(t==1) {
      int p,b;
      cin>>p>>b;
      --p;
      p|=1<<n;
      tr[p]=b;
      for(int i=n-1;i>=0;i--) {
        if((i)%2==(n%2)) tr[p/2]=tr[p]+tr[p^1];
        else tr[p/2]=tr[p]^tr[p^1];
        p>>=1;
      }
      cout<<tr[1]<<endl;
    }
    else {
      int k;
      cin>>k;
      cout<<tr[1]<<endl;
    }
  }
}
