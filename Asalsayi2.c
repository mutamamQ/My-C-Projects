#include <stdio.h>
int y = 2;
void prime(int x){
    for (int i = 2; i < x;)
    {
        if (x % i != 0)
        {
            i++;
        }
        else
        {
            return;
        }
        
    }
    printf("%d is prime.\n", x);
    return;
}
int main(){
    for (int i = 0; i < 10000;)
    {
        prime(y);
        y++;
        i++;
    }
    
}