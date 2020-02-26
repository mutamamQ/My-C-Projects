#include <stdio.h>
void hw2 (int x){
    int i = 1; int count = 0; 
    while (i < 15000)
    {
        if (i % x == 0)
        {
            count = count + 2;
        }
        i++;
    }
    printf("%d\n", count);
        return;
}
int main(){
hw2(7);
}
int main(){
    int smp = 15000 / 7;
   int total = smp * 2; 
   printf("%d\n", total);


}