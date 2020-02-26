#include <stdio.h>
/* 1 ve 1000 arasındaki tüm yedinin, on üçün veya 17 nin katı olan sayıların toplamını bulmanızı bekliyorum.
Bu kodu yazarken cevabı döndürecek bir fonksiyon kullanmanız gerekiyor.
Sonra da cevabı ekrana yazdiracaksiniz. Sorunun başka asamalari da var,
bana çözümü özelden gönderdikten sonra diğer aşamaları da açıklayacağım
*/
void hw1 (int x, int y, int z){
    int sumx = 0; int sumy = 0; int sumz = 0; 
    int curx = 0; int cury = 0; int curz = 0; int multx = 1; int multy = 1; int multz = 1; int total = 0;
    while(curx < 1000){
        curx = x * multx;
        multx++;            
        sumx = curx + sumx;
    } 
    while(cury < 1000){
        cury = y * multy;
        if (cury % x != 0)
        {
        sumy = cury + sumy;
        multy++;   
        } else {
        multy++;
        } 
    }
    while(curz < 1000){
        curz = z * multz;
        if(curz % x != 0 && curz % y != 0){
            sumz = curz + sumz;
            multz++;
            }else{
            multz++;
            }
    }
    total = sumx + sumy + sumz;
    printf("%d\n", total);
    return;
}
int main() {
   hw1(7, 13, 17);
}