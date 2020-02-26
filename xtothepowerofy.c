#include <stdio.h>

//  void power(int x, int y){
//     int count = 0;
//   int answer = 1;
//    while (count < y) {
//         answer = answer * x;
//        count++;
//     }
//     return answer;
//  }




 void power(int x, int y){
     int count = 0;
     int answer = 1;
     while(count < y){//y is the limit
    
        answer = answer * x;
        count++;
     }
     printf("%d\n", answer);
     return;
     
}

int main() {
   power(3, 4);
}