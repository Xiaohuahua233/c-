#include  <stdio.h>
#define ARR_SIZE 30

int ReadScore(long num[], float score[]);
{

}

/*函数功能：从键盘输入一个班学生某门课的成绩及其学号，当输入成绩为负值时，输入结束

  函数参数： 长整型数组num，存放学生学号

						实型数组score，存放学生成绩

  函数返回值：学生总数

*/

int GetFail(long num[], float score[], int n);

/*函数功能：统计不及格人数并打印不及格学生名单

  函数参数：长整型数组num，存放学生学号

					   实型数组score，存放学生成绩

					   整型变量n，存放学生总数

  函数返回值：不及格人数

*/

float GetAver(float score[], int n);

/*函数功能：计算全班平均分

   函数参数：实型数组score，存放学生成绩

						 整型变量n，存放学生总数

  函数返回值：平均分

*/

int GetAboveAver(long num[], float score[], int n);

/*函数功能：统计成绩在全班平均分及平均分之上的学生人数并打印其学生名单

函数参数：长整型数组num，存放学生学号

					 实型数组score，存放学生成绩

					  整型变量n，存放学生总数

  函数返回值：成绩在全班平均分及平均分之上的学生人数

*/

void GetDetail(float score[], int n);

/*函数功能：统计各分数段的学生人数及所占的百分比

  函数参数：实型数组score，存放学生成绩

						整型变量n，存放学生总数

  函数返回值：无

*/

int main()
{
	int n, fail, aboveAver;
	float score[ARR_SIZE];   //存储成绩
	long num[ARR_SIZE];    //存储学号

   //在此添加语句调用ReadScore函数读入数据

	printf("Total students %d\n\n", n);

	//在此添加语句调用 GetFail函数

	printf("Fail students %d\n\n", fail);

	//在此添加语句调用 GetAboveAver函数             

	printf("Above aver students %d\n\n", aboveAver);
	//在此添加语句调用  GetDetail函数     

	return 0;
}

