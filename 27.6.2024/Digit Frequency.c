#include <stdio.h>
int Freq(int i, char UserIn[1000]){
    int len = strlen(UserIn);
    int NumFreq = 0;
    for(int j = 0; j < len; ++j){
        int temp = UserIn[j] - 48;
        if(i == temp){
            ++NumFreq;
        }
    }
    return NumFreq;
}
int main() {
    //Create variables
    char UserIn[1000];
    int NumFreq[10] = {0};
    fgets(UserIn, sizeof(UserIn), stdin);
    for(int i = 0; i < 10; ++i){
        NumFreq[i] = Freq(i, UserIn);
        printf("%d ", NumFreq[i]);
    }
    
    return 0;
}
#
