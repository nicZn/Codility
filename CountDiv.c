int solution(int A, int B, int K) {
    if(A == 0) {
        return B/K + 1;
    } else {
        return B/K -(A - 1)/K;
    }
}
