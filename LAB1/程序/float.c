#include<stdio.h>
int main()
{
	float f;
	for( ; ; )
	{
		printf("������һ����������");
		scanf("%f",&f);
		printf("�����������ֵ��%f\n",f);
		if(f==0)
		{
			break;
		}
	}
	return 0;
}
