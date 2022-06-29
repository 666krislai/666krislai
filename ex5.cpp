#include <iostream>

using namespace std;

int main()
{
    int i,j,min,score[5];   //陣列score存放要比大小的數字
    for (i=0;i<5 ;i++)  //輸入陣列值
       {
         cin >> score[i];  //假設輸入 5,3,8
         
       }
    
    //排序   
    for (i=0; i <5 ; i++)
    {
      for (j=i+1; j<5; j++) //重點 j=i+1 
       {
         if (score[j] < score[i] )    
          {  
             //變數交換
                min = score[i];
                score[i] = score[j];
                score[j] = min;
           }
       }
    }
     //[output]
    for( i=0 ; i<5 ; i=i+1 )
    {
        cout << score[i] << " ";
    }

    return 0;
}
