#include <stdio.h>
void sum(int x,int y,int z){
    int t = x + y + z;
    printf("%d\n", t);
    return;
}
int main() {
   sum(4, 3, 4);
}