// test111.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "time.h"

int	g_nCount = 10001;
int* g_pArray = new int[g_nCount];



void InitData()
{
	int i = 0;
	for(int j = g_nCount-1; j >= 0;j--)
	{
		g_pArray[i] = j;
		i++;
	}
}

//冒泡排序
void BubbleSort()
{
	// TODO: Add your control notification handler code here
	InitData();
	double time1,time2;
	time1 = clock();
	for(int i = 0; i < g_nCount - 1;i++)
		for(int j = g_nCount-1;j > i;j--)
		{
			if(g_pArray[j] < g_pArray[j-1])
			{
				int temp = g_pArray[j];
				g_pArray[j] = g_pArray[j-1];
				g_pArray[j-1] = temp;
			}
		}
	time2= clock();
}




//选择排序
void SelectSort()
{
	// TODO:  Add your control notification handler code here
	InitData();
	double time1,time2;
	time1 = clock();
	for(int i = 0; i < g_nCount -1;i++)
		for(int j = i + 1;j < g_nCount ;j++)
		{
			if(g_pArray[j] < g_pArray[i])
			{
				int temp = g_pArray[j];
				g_pArray[j] = g_pArray[i];
				g_pArray[i] = temp;
			}
		}
	time2= clock();

}

int _tmain(int argc, _TCHAR* argv[])
{
	BubbleSort();
	return 0;
}

