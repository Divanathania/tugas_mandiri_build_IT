#include <stdio.h>

int main() {

    long long a, b, c;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) return 0;
    
    int ronde = 0;
    
    for (; a != b && b != c && a != c; ronde++) {
        long long maks = a;
        if (b > maks) maks = b;
        if (c > maks) maks = c;
        
        long long min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        
        if (a == maks) a--;
        else if (b == maks) b--;
        else if (c == maks) c--;
        
        if (a == min) a++;
        else if (b == min) b++;
        else if (c == min) c++;
    }
    
    printf("%d\n", ronde);
      
    return 0;
}