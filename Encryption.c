#include <stdio.h>

int main(void){

    int iV1,iTmp; //iTmp 此變數用途為暫存功能
    int iV1_1, iV1_2, iV1_3,iV1_4;

    printf("Please input inetger number : ");
    scanf(" %d", &iV1); //輸入一組整數數字

    iV1_1 = iV1 /1000; //取第一個數字
    iV1_2 = (iV1 - iV1_1 * 1000) / 100; //取第二個數字
    iV1_3 = (iV1 - iV1_1 * 1000 - iV1_2 * 100) / 10; //取第三個數字
    iV1_4 = (iV1 - iV1_1 * 1000 - iV1_2 * 100 - iV1_3 * 10) / 1; //取第三個數字
    
    //以下是對每一個位數 做加7後 除以10 再取餘數
    iV1_1 = (iV1_1 + 7) % 10; //第一位數的數字 加7後 除以10 再取餘數
    iV1_2 = (iV1_2 + 7) % 10; //第二位數的數字 加7後 除以10 再取餘數
    iV1_3 = (iV1_3 + 7) % 10; //第三位數的數字 加7後 除以10 再取餘數
    iV1_4 = (iV1_4 + 7) % 10; //第四位數的數字 加7後 除以10 再取餘數

    // 以下為第一位數與第三位數對調
    iTmp = iV1_1; //先將第一位數的數字 放入暫存變數內保存
    iV1_1 = iV1_3; //將第三位數的數字 取代第一位數的數字
    iV1_3 = iTmp; // 將暫存變數內保存的第一位數的數字 取代第三位數的數字

    // 以下為第二位數與第四位數對調
    iTmp = iV1_2; //先將第二位數的數字 放入暫存變數內保存
    iV1_2 = iV1_4; //將第四位數的數字 取代第二位數的數字
    iV1_4 = iTmp; // 將暫存變數內保存的第二位數的數字 取代第四位數的數字

    // 將改變後的每一個位數 組合成一組數字
    iV1 = iV1_1 * 1000 + iV1_2 * 100 + iV1_3 * 10 + iV1_4;

    // 最後將組合後的數字 輸出到終端機 且輸出後再換行 "\n"
    printf("Encryption Output : %4d \n",iV1);
}