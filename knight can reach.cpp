#include<bits/stdc++.h>
using namespace std;
int ar[8][2]={{-2,1},{-2,-1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
void can(int a,int b) {
for (int i=0;i<8;i++) {
  cout<<a+ar[i][0]<<" "<<b+ar[i][1]<<endl;
  can(a+ar[i][0],b+ar[i][1])
}
}
int main(){
  int a,b;
  cin>>a>>b;
  can(a,b);
  return 0;
}
