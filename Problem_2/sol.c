#include <stdio.h>

int sum_array(int a[], int num_ele) {
    int sum = 0;
    for (int i=0; i < num_ele; i ++) {
        sum = sum + a[i];
    }
    return sum;
}

int fib(int n) {
    int i, ans = 0;
    if (n == 0){
        return ans;
    }else{
        int last_two[] = {0, 1};
        for (i; i < n; i++) {
            ans = sum_array(last_two, 2);
            last_two[0] = last_two[1];
            last_two[1] = ans;
            }
    }
    return ans;
}

int main() {
    int maximum = 4000000;
    int evenSum = 0;
    int n = 2;
    while (n < 5) {
        n++;
        int var = fib(10);
        printf("this is a number %i\n", var);
        printf("what the %i\n", fib(n));
        printf("%i\n", n);
        if (fib(n) % 2 == 0) {
            evenSum += fib(n);
        }
    }
    printf("%i", evenSum);
    return 0;
}
