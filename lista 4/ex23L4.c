#include <stdio.h>

int main(){
    double fat=1, i, n, e=1;
    scanf("%lf", &n);
    for(i=1;i<=n;i++){
        fat*=i;
        e += 1/fat;
    }
    printf("e ~ %.14lf", e);

    return 0;
}