#include <stdio.h>

int main()
{
    FILE * fout = fopen( "檔案輸出.txt", "w+" );
    fprintf(fout ,"Hello我在這裡哦\n" );

    printf("Hello World\n");
}
