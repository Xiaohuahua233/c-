#include  <stdio.h>
#define ARR_SIZE 30

int ReadScore(long num[], float score[]);
{

}

/*�������ܣ��Ӽ�������һ����ѧ��ĳ�ſεĳɼ�����ѧ�ţ�������ɼ�Ϊ��ֵʱ���������

  ���������� ����������num�����ѧ��ѧ��

						ʵ������score�����ѧ���ɼ�

  ��������ֵ��ѧ������

*/

int GetFail(long num[], float score[], int n);

/*�������ܣ�ͳ�Ʋ�������������ӡ������ѧ������

  ��������������������num�����ѧ��ѧ��

					   ʵ������score�����ѧ���ɼ�

					   ���ͱ���n�����ѧ������

  ��������ֵ������������

*/

float GetAver(float score[], int n);

/*�������ܣ�����ȫ��ƽ����

   ����������ʵ������score�����ѧ���ɼ�

						 ���ͱ���n�����ѧ������

  ��������ֵ��ƽ����

*/

int GetAboveAver(long num[], float score[], int n);

/*�������ܣ�ͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ����������ӡ��ѧ������

��������������������num�����ѧ��ѧ��

					 ʵ������score�����ѧ���ɼ�

					  ���ͱ���n�����ѧ������

  ��������ֵ���ɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ������

*/

void GetDetail(float score[], int n);

/*�������ܣ�ͳ�Ƹ������ε�ѧ����������ռ�İٷֱ�

  ����������ʵ������score�����ѧ���ɼ�

						���ͱ���n�����ѧ������

  ��������ֵ����

*/

int main()
{
	int n, fail, aboveAver;
	float score[ARR_SIZE];   //�洢�ɼ�
	long num[ARR_SIZE];    //�洢ѧ��

   //�ڴ����������ReadScore������������

	printf("Total students %d\n\n", n);

	//�ڴ���������� GetFail����

	printf("Fail students %d\n\n", fail);

	//�ڴ���������� GetAboveAver����             

	printf("Above aver students %d\n\n", aboveAver);
	//�ڴ����������  GetDetail����     

	return 0;
}

