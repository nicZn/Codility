#include<stdio.h>
#include<stdlib.h>
int solution(int A[], int N) {
     if(N == 0) {
        return 1;
    }
    if (N == 1) {
        if (A[0] != 1) {
            return 1;
        } else {
            return 2;
        }
    }
    int sum = 0;
    int idxSum = 0;
    for(int i = 0;i < N ; i ++) {
        idxSum += i +1;
        sum += A[i];
    }
    
    return idxSum + N + 1 - sum;
}
