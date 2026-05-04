#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function   
    int a_value = *a;
    int b_value = *b;
    *a =  a_value+b_value;
    *b = abs(a_value-b_value);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}