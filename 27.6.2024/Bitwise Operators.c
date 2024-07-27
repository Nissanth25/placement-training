#include <stdio.h>
void calculate_the_max(int n, int k) {
  int a1=0,a2=0,a3=0;
  for(int j=1;j<=k;j++){
    for(int i=j+1;i<=n;i++){
        if((j&i)>a1 && (j&i)<k ) a1=j&i;
        if((j|i)>a2 && (j|i)<k) a2=j|i;
        if((j^i)>a3 && (j^i)<k) a3=j^i;
    } 
  }
  printf("%d\n%d\n%d",a1,a2,a3);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_max(n, k);
    return 0;
}
