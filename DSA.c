/**
 * @file DSA.c
 * @author @Kenzouh @williebonavente
 * @brief
 * @version 0.1
 * @date 2023-09-12
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{

    printf("\nHello, boi!\n\n");
    printf("GG!!\n");

    /*
    argc -> Argument Count, int numerical value.
    argv -> Argument Vector, string
    */
    printf("\nYou have entered %d arguments.\n", argc);

    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
    
    printf("%n");

    return 0;
}
