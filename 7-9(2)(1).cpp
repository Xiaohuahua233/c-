#include <stdio.h>
#define ARR_SIZE 35

int ReadScore(long num[], float score[]);
int GetFail(long num[], float score[], int n);
float GetAver(float score[], int n);
int GetAboveAver(long num[], float score[], int n);
void GetDetail(float score[], int n);

int main()
{
    int n, fail, aboveAver;
    float score[ARR_SIZE]; //存储成绩
    long num[ARR_SIZE];    //存储学号

    n = ReadScore(num, score);
    //在此添加语句调用ReadScore函数读入数据

    // for(int i=1;i<=6;i++){
    //     printf("%ld %f\n",num[i],score[i]);
    // }
    printf("Total students %d\n\n", n);

    //在此添加语句调用 GetFail函数
    fail = GetFail(num, score, n);
    printf("Fail students %d\n\n", fail);

    //在此添加语句调用 GetAboveAver函数

    aboveAver = GetAboveAver(num, score, n);
    printf("Above aver students %d\n\n", aboveAver);
    //在此添加语句调用  GetDetail函数
    GetDetail(score, n);

    return 0;
}
int ReadScore(long num[], float score[])
{
    for (int i = 1; i <= ARR_SIZE - 1; i++)
    {
        scanf("%ld%f", &num[i], &score[i]);
        if (score[i] < 0)
        {
            return i - 1;
        }
    }
    return 0;
}
int GetFail(long num[], float score[], int n)
{
    int cnt = 0;
    printf("Fail:\nnumber -- score\n");
    for (int i = 1; i <= n; i++)
    {
        if (score[i] < 60)
        {
            printf("%4ld%12.2f\n", num[i], score[i]);
            cnt++;
        }
    }
    return cnt;
}
int GetAboveAver(long num[], float score[], int n)
{
    int cnt = 0;
    double avi = GetAver(score, n);
    printf("aver = %.2f\n", avi);
    printf("Above aver:\nnumber -- score\n");
    for (int i = 1; i <= n; i++)
    {
        if (score[i] > avi)
        {
            cnt++;
            printf("%4ld%10.2f\n", num[i], score[i]);
        }
    }
    return cnt;
}
float GetAver(float score[], int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += score[i];
    }
    return sum / n;
}
void GetDetail(float score[], int n)
{
    int stu[10] = {0};
    for (int i = 1; i <= n; i++)
    {
        if (score[i] < 60)
        {
            stu[0]++;
        }
        else if (score[i] < 70)
        {
            stu[1]++;
        }
        else if (score[i] < 80)
        {
            stu[2]++;
        }
        else if (score[i] < 90)
        {
            stu[3]++;
        }
        else if (score[i] < 100)
        {
            stu[4]++;
        }
        else if (score[i] == 100)
        {
            stu[5]++;
        }
    }
    printf("score   number   percent\n");
    printf("<60%8d%12.2f\n", stu[0], 1.0 * stu[0] / n * 100);
    for (int i = 1; i <= 4; i++)
    {
        int l = 50 + 10 * i, r = l + 9;
        printf("%d--%d%5d%12.2f\n", l, r, stu[i], 1.0 * stu[i] / n * 100);
    }
    printf("%d%8d%12.2f\n", 100, stu[5], 1.0 * stu[5] / n * 100);
}