#include <stdio.h>

int main(void){

    int iV1,iTmp;
    int iV1_1, iV1_2, iV1_3,iV1_4;

    printf("Please input inetger number :");
    scanf(" %d", &iV1); //輸入一組整數數字

    iV1_1 = iV1 /1000; //取締一個數字
    iV1_2 = (iV1 - iV1_1 * 1000) / 100; //取第二個數字
    iV1_3 = (iV1 - iV1_1 * 1000 - iV1_2 * 100) / 10; //取第三個數字
    iV1_4 = (iV1 - iV1_1 * 1000 - iV1_2 * 100 - iV1_3 * 10) / 1; //取第三個數字
    
    iV1_1 = (iV1_1 + 7) % 10;
    iV1_2 = (iV1_2 + 7) % 10;
    iV1_3 = (iV1_3 + 7) % 10;
    iV1_4 = (iV1_4 + 7) % 10;

    iTmp = iV1_1;
    iV1_1 = iV1_3;
    iV1_3 = iTmp;

    iTmp = iV1_2;
    iV1_2 = iV1_4;
    iV1_4 = iTmp;

    iV1 = iV1_1 * 1000 + iV1_2 * 100 + iV1_3 * 10 + iV1_4;

    printf("Encryption Output = %4d \n",iV1);
    //printf("%s\n","My first program!!");
}