#include <stdio.h>
int main(){
    int a = 1;
    int b = 0;
    int c = 1;
    int d = 0;
    if ( ((a || b) && c) ^ d )
    {
       printf("hello");
    }
}
