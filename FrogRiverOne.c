int solution(int X, int A[], int N) {
    int *B;
    if (N == 1) {
        if (A[0] == X) {
            return 0;
        } else {
            return -1;
        }
    }
    B = (int *)calloc(X, sizeof(int));
    int num = 0;
    for(int i = 0; i < N ; i ++) {
        if(B[A[i] - 1] == 0) {
            num ++;
            B[A[i] - 1] = 1;
        }
        if(i >= X - 1) {
            if (num == X) {
                return i;
            }
        }
    }
    return -1;
}
