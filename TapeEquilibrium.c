int solution(int A[], int N) {
    if(N == 0) {
        return 0;
    }
    
    if (N == 1) {
        return A[0];
    }
    
    int *sum;
    sum = (int *)calloc(N, sizeof(int));
    
    int singleSum = 0;
    for (int i = 0; i < N ; i ++) {
        singleSum += A[i];
        sum[i] = singleSum;
    }
    int result = sum[N - 1];
    for (int i = 0; i < N - 1; i ++) {
        int singleMin = abs(sum[N - 1] - 2 * sum[i]);
        if(result == sum[N -1] && i == 0) {
            result = singleMin;
            continue;
        }
        if(result > singleMin || result < 0){
            result = singleMin;
        }
    }
    return result;
}
