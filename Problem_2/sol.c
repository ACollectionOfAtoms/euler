#include <stdio.h>

int sum_array(int a[], int num_ele) {
    int i, sum = 0;
    for (i=0; i < num_ele; i ++) {
        sum = sum + a[i];
    }
    return sum;
}

int fib(int n) {
    int ans = 0;
    if (n == 0){
        return 0;
    } else {
        int last_two[2] = {0, 1};
        for (int i; i < n; i++) {
            ans = sum_array(last_two, 2);
            last_two[0] = last_two[1];
            last_two[1] = ans;
            }
    }
    return ans;
}

void main() {
    int answer = fib(6);
    printf("%i \n", answer);
}