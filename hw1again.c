#include <stdio.h>
int main(){int x = 7;
int sum = 0;
int i = 0;

while (sum < 24)
{
    int crx = x * i;
    i++;
    int sum = crx + sum;
    printf("%d\n", sum);
}
}