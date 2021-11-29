#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct stu
{
	char name[20];
	short age;
};
int cmp_struct(const void *e1, const void *e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_fl(const void* e1, const void* e2)
{
	if ((float*)e1 - (float*)e2 > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
void swap(char *e1, char *e2,int sz_width)
{
	int i;
	for (i = 0; i < sz_width; i++)
	{
		char tmp = *(e1+i);
		*(e1+i) = *(e2+i);
		*(e2+i) = tmp;
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;

}
void bubble_sort(void *start, int sz,int sz_width,int cmp_fuc(const void *e1,const void *e2))
{
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz-1-i; j++)
		{
			if (cmp_fuc((char*) start+j*sz_width,(char*)start+(j+1)*sz_width)>0)
			{
				swap((char*) start + j*sz_width, (char*)start + (j + 1)*sz_width,sz_width);
			}
		}
	}
}
int main()
{
	int arr1[] = { 1, 2, 3, 4,9,8,7,6,5 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz1_width = sizeof(arr1[0]);
	struct stu s[3] = { { "zhangsan", 14 }, { "lisi", 12 }, { "wangwu", 16 } };
	int sz2 = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz2, sizeof(s[0]),cmp_struct);
	return 0;
}