#include <stdio.h>

int main()
{
     int sum = 0;
     int i,j;
     int arr[5][3];//二维数组先行后列
     double v[3];
     double average;
     printf("请从上至下从左至右输入各科成绩");
     for(j = 0;j <3;j++)
     {
         for(i = 0;i < 5;i++)
         {
             scanf("%d",&arr[i][j]);
             sum += arr[i][j];
         }
         v[j] = sum / 5;
         sum = 0;

     }
    average = (v[0] + v[1] + v[2])/3;
    printf("数学平均分为%lf 语文平均分为%lf 英语平均分为%lf\n",v[0],v[1],v[2]);
    printf("总平均分为%lf\n",average);
    return 0;
}
