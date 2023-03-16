#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int aim;
	scanf("%d", &aim);
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	

	while(left<=right)

	{
		int mid = (left + right) / 2;
		if (arr[mid] > aim)
		{
			right = mid - 1;



		}
		else if (arr[mid] < aim)
		{

			left = mid + 1;



		}
		else
		{
			printf("找到了下标为%d", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到");
	}
	return 0;
}