#include <iostream>

int main() {
    int mInt;
    long mLong;
    char mChar;
    float mFloat;
    double mDouble;

    scanf("%d %ld %c %f %lf", &mInt, &mLong, &mChar, &mFloat, &mDouble);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf \n", mInt, mLong, mChar, mFloat, mDouble);

    return (0);
}