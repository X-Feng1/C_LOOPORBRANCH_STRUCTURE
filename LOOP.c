//���������ѭ��/��֧�ṹ��ϰ

#include<stdio.h>

////���ȴ�ӡ��1-101�����е�����
//int main()
//{
//	int i = 1;
//	int num = 2;
//	while (i<102)
//	{
//		if (i % num == 1)
//		{
//			printf("%d\n", i);
//			i += 1;
//		}
//		else
//			i += 1;
//	}
//	return 0;
//}

//switch ���

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}

	printf("m = %d,n = %d", m, n);

	return 0;
}