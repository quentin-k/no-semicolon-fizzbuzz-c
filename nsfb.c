#include <stdio.h>
int main(int c){while(printf("%d\n\0Fizz\n\0Buzz\n\0FizzBuzz\n"+((c%3==0?4:0)+(c%5==0?10:0)),c),c++<100){}}
