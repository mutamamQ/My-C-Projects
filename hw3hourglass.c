#include <stdio.h>
int spacen = 1;
int letter = 1;
int i = 0;
int ii = 0;
int iii = 0;
void Triangle(int x) {
    letter = x;
    while (x/2 > i)
    {
        i++;
        ii = 0;
        iii = 0;
        letter= letter - 2;
        while (iii < spacen)
        {
            printf("%s", " ");
            iii++;
        }    
        while (ii <= letter)
        {
            printf("%d", 1);
            ii++;
        }    
        spacen++;
        printf("\n");
    }
    spacen = x/2; letter = 1; i = 0; ii = 0; iii = 0;
    while (x/2 > i)
    {
        i++;
        ii = 0;
        iii = 0;
        while (ii <= spacen)
        {
            printf("%s", " ");
            ii++;
        }
        spacen--;
        while (iii < letter)
        {
            printf("%d", 1);
            iii++;
        }        
        letter = letter +2;
        printf("\n");
    }
}
int main(){
    Triangle(36);
}