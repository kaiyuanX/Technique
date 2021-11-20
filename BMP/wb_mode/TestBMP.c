/* generate binary file */

#include <stdio.h>
#include <stdlib.h>

#define WIDTH 128

int main(void)
{
    FILE *sp, *spout;
    int n = 0;
    unsigned char *ch = malloc(sizeof(char) * 3);
    unsigned char ch_;
    int count = 0; //计数，打印的字节数
    if ((sp = fopen("TestBMP.bmp", "rb")) == NULL)
    {
        while (1)
        {
            putchar('*');
        }
    }
    else //打开文件成功
    {
        spout = fopen("OpenedBMPb.txt", "w");

        fprintf(spout, "header\n");

        for (int i = 0; i < 54; i++)
        {
            fscanf(sp, "%c", &ch_);
            fprintf(spout, "%02x ", ch_);
        }

        fprintf(spout, "\ninfo\n");

        while ((n = fread(ch, 1, 3, sp)) > 0) //输出文件的所有数据(二进制)
        {
            for (int i = 0; i < n; i++)
            {
                fprintf(spout, "%02x", ch[i]);
                count++;
            }
            fprintf(spout, " ");

            if (count % (WIDTH * 3) == 0)
            {
                fprintf(spout, "\n");
            }
        }

        printf("%d", count);
        fclose(sp);
        free(ch);
    }
    return 0;
}