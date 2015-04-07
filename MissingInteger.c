int solution(int A[], int N) {
    // write your code in C99
    int *B;
    B = (int *)calloc(N, sizeof(int));
    for (int i = 0; i < N ; i ++) {
        if (A[i] > 0 && A[i] <= N) {
            B[A[i] - 1] = 1;
        }
    }

    for (int i = 0 ; i < N; i ++) {
        if (B[i] == 0) {
            return i + 1;
        }
    }
    
    return N + 1;
}
