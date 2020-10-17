#include <cstdio>
#include <iostream>
#include <climits>

int main() {
    int m[6][6];

for (int i=0; i<6; i++) {
        for (int j=0; j<6; j++) {
            cin>>m[i][j];
        }
    }

    long sum=0;
    long maxSum=LONG_MIN;
    for (int i=0; i<6; i++) {
        for (int j=0; j<6; j++) {
            if (j+2<6 && i+2<6) {
                sum=m[i][j] + m[i][j+1] + m[i][j+2] + m[i+1][j+1] + m[i+2][j] + m[i+2][j+1] + m[i+2][j+2];
                if (sum>=maxSum) {
                    maxSum=sum;
                }
            }
        }
    }
    fprintf(stderr, "Max Sum: %ld\n", MaxSum);

    return 0;
}
