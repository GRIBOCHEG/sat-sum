#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#define COLOR_MAX 255
#define PIXEL_LENGTH 4

//void log_pixel(uint8_t pixel[PIXEL_LENGTH]) {
//    printf("Got dis pixel:\n");
//    for (int i = 0; i < PIXEL_LENGTH; i++) {
//        printf("%d\n", pixel[i]);
//    }
//} // function for logging pixels to console

int main()
{
    printf( "I am alive!  Beware.\n" );
    srand(time(NULL));
    uint8_t pixel1[PIXEL_LENGTH] = {0,rand(),rand(),rand()};
    uint8_t pixel2[PIXEL_LENGTH] = {0,rand(),rand(),rand()};
//    log_pixel(pixel1);
//    log_pixel(pixel2);
//    printf("Got dis result:\n");
    for (int i = 0; i < PIXEL_LENGTH; i++) {
        int tmp = pixel1[i] + pixel2[i];
        pixel1[i] = tmp <= COLOR_MAX ? tmp : COLOR_MAX; //ternary operator for saturated sum
    }
//    log_pixel(pixel1);
    return 0;
}
