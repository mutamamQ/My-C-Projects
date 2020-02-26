#include <stdio.h>
int z = 1;
int i = 0;
int count = 0;
int ii = 0;
void Illuminati(int x) {
 while(count <= x){   
    i = 0;
    ii = 0;
    while (x-count > i)
    {
        printf("%s", " ");
        i++;
    }
    count++;
    while(ii < count){
        printf("%d", 1);
        ii++;
     }
    printf("\n");
}}
int main() {
    Illuminati(36);//whatsapp telefonda limit
}