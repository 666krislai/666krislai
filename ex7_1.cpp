#include <iostream>

using namespace std;

int main()
{
    int i,max,score[3];   //陣列score存放要比大小的數字
    for (i=0;i<3 ;i++)  //輸入陣列值
       {
         cin >> score[i];  //假設輸入 5,3,8
         max = score[0];  //預設最大是第一個陣列值=5
       }
       
    for (i=0; i<3; i++) //開始比較,從陣列0開始,目前max=5
     {
      if (score[i] > max)   //score[0]=5,score[1]=3,score[2]=8 ,
         max = score[i];
     }   
    cout<<max;

    return 0;
}
