#include<stdio.h>
int solution(int X, int Y, int D) {
    if(X == Y) {
        return 0;
    }
    
    int R = (Y-X)%D;
    if(R == 0) {
        return (Y-X)/D;
    } else {
        return (Y-X)/D + 1;
    }
}
