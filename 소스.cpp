//#include <stdio.h>
//
//int main(void)
//{
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10)
//	{
//		is = 1;
//		while (is < 10)
//		{
//			printf("% d * %d = % d \n", cur, is, cur * is);
//			is++;
//		}
//		cur++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int total = 0;
//	int num = 1;
//
//	while (num != 0)
//	{
//		printf("정수입력(0 to quit) : ");
//		scanf_s("%d", &num);
//		total += num;
//	}
//
//	printf("입력된 정수의 총 합: %d \n", total);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int total = 0;
//	int num = 1;
//	int cnt = 0;
//
//	while (num != 0)
//	{
//		printf("정수입력(0 to quit) : ");
//		scanf_s("%d", &num);
//		total += num; 
//		cnt++;
//	}
//
//	printf("입력된 정수의 총 합: %f \n", (double)total/cnt);
//
//	
//
//
//		return 0;
//}


#include <stdio.h>

int main(void)
{
	int gu = 9, num = 0;
	printf("몇 단? : ");
	scanf_s("%d", &num);

	while (gu >=1)
	{
		printf("%d*%d=%d \n", num, gu, gu * num);

		gu--;
	}
	return 0;
}