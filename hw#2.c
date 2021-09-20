//
//  main.c
//  Systems
//
//  Created by Theodore Fahey on 9/19/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int test = 1+3;
    printf("1 and 3 together make: %d \n", test);
    short tooBig = 123456789;
    printf("This Number is Going out of Bounds: %hi \n", tooBig);
    short tooLittle = -987654321;
    printf("This Number is Too Little: %hi \n", tooLittle);
    for (int i = 0; i <= 5; i++){
        printf("%d \n", 5-i);
    }
    printf("Blastoff! \n");
    return 0;
}
