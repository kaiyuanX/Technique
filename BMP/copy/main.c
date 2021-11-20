#include <stdio.h>
#include "bitmap.h"

int main()
{
    /* copy PigHead.bmp to result.bmp */
    ClImage *img = clLoadImage("PigHead.bmp");
    bool flag = clSaveImage("result.bmp", img);
    if (flag)
    {
        printf("save ok... \n");
    }
    else
    {
        printf("No...\n");
    }

    // printf("%d", sizeof(ClBitMapFileHeader)); //14
    // printf("%d", sizeof(ClBitMapInfoHeader)); //40

    return 0;
}
