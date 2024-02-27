//在一个有序数组中查找具体的某个数字n。
//1 2 3 4 5 6 7 8 9 10
//0       4 5 6 7   9
//折半查找/二分查找
//多次循环查找
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	//在arr这个有序的数组中查找k（7）的值
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}