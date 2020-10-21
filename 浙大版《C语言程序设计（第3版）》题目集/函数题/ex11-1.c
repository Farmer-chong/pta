#include <stdio.h>

char *getmonth(int n);

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL)
        printf("wrong input!\n");
    else
        printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *getmonth(int n)
{
    char *getmonth[13] = {"0", "January", "February", "March", "April", "May",
                          "June", "July", "August", "September", "October",
                          "November", "December"};

    if (n > 0 && n < 13) return getmonth[n];
    return 0;
}