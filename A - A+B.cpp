#include<stdio.h>
int main(){
    int i, n, a,b,c;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        //c=a+b;
        printf("%d\n",a+b);
    }
    return 0;
}
