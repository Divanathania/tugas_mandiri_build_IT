#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int a[1000005];

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    qsort(a, n, sizeof(int), compare);
    
    long long total = 0;
    long long mod = 1000000007;
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        while (j < n && a[j] < a[i]) {
            j++;
        }
        total = (total + j) % mod;
    }
    
    printf("%lld\n", total);
    
    return 0;
}