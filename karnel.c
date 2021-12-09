#include <stdio.h>
//#include <unistd.h>
//define
#define FILE_MUX 1000000
//#define WAITING_TIME 0.1
//関数
int main(void){
    char file[FILE_MUX];
    FILE *fp;
    int i;
//    int n = 1;
//    double time = 0.1;
//    int microsecond = WAITING_TIME * 1000000;

    for(i = 0; i < FILE_MUX; i++){
        sprintf(file, "README!(%d).txt", i);
        printf("Generating text file. creat nunber  %d\n", n);
        n++;
        fp = fopen(file, "w");
        fprintf(fp, "このコンピューターはこのウイルスが乗っ取った。\n修復方法についてはYoutubeを参照してね^^\nhttps://bit.ly/kyenotomia");
        fclose(fp);
        //usleep(microsecond);
    }
}
