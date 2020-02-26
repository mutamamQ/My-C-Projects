#include <stdio.h>
int spacen = 0;
int letter = 1;
int i = 0;
int ii = 0;
int iii = 0;
void Triangle(int x) {
    spacen = x;
    while (x > i)
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