int solution(int A[], int N) {
    // write your code in C99
    int *B;
    B = (int *)calloc(N, sizeof(int));
    for(int i = 0; i < N ; i ++) {
        if(A[i] > N) {
            return 0;
        }
        B[A[i] - 1] ++;
    }
    for(int i = 0; i < N ; i ++) {
        if(B[i] > 1) {
            return 0;
        }
    }
    return 1;
}
