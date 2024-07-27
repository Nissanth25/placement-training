#include <stdio.h>
void print(int a, int b);
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  print(a, b);
  return 0;
}
void print(int a, int b){
  for(int i = a; i <= b; i++){
    if(1<=i && i<=9){
      switch(i){
        case 1: printf("one\n"); 
        break;
        case 2: printf("two\n");
        break;
        case 3: printf("three\n"); 
        break;
        case 4: printf("four\n"); 
        break;
        case 5: printf("five\n"); 
        break;
        case 6: printf("six\n"); 
        break;
        case 7: printf("seven\n"); 
        break;
        case 8: printf("eight\n"); 
        break;
        default: printf("nine\n"); 
      }
    }
    else if(i % 2 == 0){
      printf("even\n");
    }
    else{
      printf("odd\n");
    }
  }
}
