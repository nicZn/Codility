int solution(int A[], int N) {
    // write your code in C99
    int passing = 0;
    int westCars = 0;
    int hasEast = 0;
    for (int i = N - 1; i >=0 ; i -- ) {
        if (A[i] == 0) {
            hasEast ++;
            passing += westCars;
            if (passing > 1000000000) {
                return -1;
            }
        } else {
            westCars ++;
        }
    }
    
    return passing;
}
