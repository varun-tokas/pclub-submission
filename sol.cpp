#include <bits/stdc++.h>

using namespace std;

signed main() {
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  //cout.tie(NULL);
  freopen("testcases.txt","r",stdin);
  freopen("op.txt","w",stdout);
  int n;
  scanf("%d",&n);
  vector<int> tr((1<<(n+1)),0);
  for(int i=0;i<1<<n;i++) {
    scanf("%d",&tr[i|(1<<n)]);
  }
  for(int j1=1<<n;j1<(1<<(n+1));j1++) {
    int j=j1;
    for(int i=n-1;i>=0;i--) {
      if((i)%2==(n%2)) tr[j/2]=tr[j]&tr[j^1];
      else tr[j/2]=tr[j]^tr[j^1];
      j>>=1;
    }
  }
  int m;
  scanf("%d",&m);
  while(m--) {
    int t;
    scanf("%d",&t);
    if(t==1) {
      int p,b;
      scanf("%d %d",&p,&b);
      --p;
      p|=1<<n;
      tr[p]=b;
      for(int i=n-1;i>=0;i--) {
        if((i)%2==(n%2)) tr[p/2]=tr[p]&tr[p^1];
        else tr[p/2]=tr[p]^tr[p^1];
        p>>=1;
      }
      printf("%d\n",tr[1]);
    }
    else {
      int k;
      scanf("%d",&k);
      printf("%d\n",tr[1]);
    }
  }
  fclose(stdin);
  fclose(stdout);
}