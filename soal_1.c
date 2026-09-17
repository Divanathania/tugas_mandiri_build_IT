#include <stdio.h>

int main() {

    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    long long total= 0;
    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);
        total += a;
    }
    
    long long ans = total < 0 ? -total : total;
    printf("%lld\n", ans);
    
    return 0;
}