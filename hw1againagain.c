#include <stdio.h>
void hw1(int x, int y, int z){
    int i = 0;
    int sum = 0;   
    while (i < 1000){
     
        if (i % x ==0 || i % y ==0 || i % z ==0 )
            {
             sum = sum + i;
            }
        i++;
    }
    printf("%d\n", sum);
    return;
}
int main(){
hw1(7, 13, 17);

}