#include <stdio.h>

int main(int argc, char const *argv[])
{
    int target;
    double res;
    scanf("%d", &target);
    for(int i = 1; i <= target; i++){
        res += 1.0 / (2 * i - 1);
    }
    printf("sum = %.6f", res);
    return 0;
}
