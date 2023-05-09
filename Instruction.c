#include<stdio.h>
#include<time.h>

int main()
{
    time_t startTime, endTime;
    long long i, n;
    scanf("%lld", &n);
    time(&startTime);
    for(i=1; i<=n; i++);
    time(&endTime);
    printf("%lf second(s)", (double)(endTime-startTime));
    return 0;
}