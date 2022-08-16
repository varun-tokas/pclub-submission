
#include <bits/stdc++.h>
#include <random>
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  random_device device;
  mt19937 generator(device());
  uniform_int_distribution<int> distribution(1,1<<30);
  freopen("testcases.txt","w",stdout);
  int n=(distribution(generator))%17+1;
  printf("%d\n",n);
  for(int i=0;i<(1<<n);i++) {
    printf("%d ",distribution(generator));
  }
  printf("\n");
  int q=(distribution(generator))%100001;
  printf("%d\n",q);
  while(q--) {
    int x=distribution(generator)%2+1;
    printf("%d ",x);
    if(x%2)
    printf("%d %d\n",distribution(generator)%(1<<n)+1,distribution(generator));
    else printf("%d\n",distribution(generator));
  }
  fclose(stdout);
}