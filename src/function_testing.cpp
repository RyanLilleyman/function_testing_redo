#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int max_of_four(int a, int b, int c, int d){
  if (a>b && a>c && a>d) {
    return a;
  }else if (b>a && b>c && b>d) {
    return b;
  }else if (c>a && c>d && c>b) {
    return c; 
  }else if (d>a && d>c && d>b) {
    return d;
  }else{
    return 0;
  }
}
int main(){
  int a, b, c, d; 
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int result = max_of_four(a, b, c, d);
  printf("%d",result);
  return 0;
}
