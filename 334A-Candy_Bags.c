#include <stdio.h>
int main(){
    int n, nn; 
    scanf("%d",&n);
    nn = n * n;
    for(int i = 0; i < nn/2; i++){
        printf("%d %d\n",i + 1, nn - i);
    }
    return 0;
}
