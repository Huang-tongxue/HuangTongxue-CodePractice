#define _CRT_SECURE_NO_WARNINGS 1
//����
//����һ��ʮ��������a����һ���˽�����b�����a + b��ʮ���ƽ������Χ - 231~231 - 1����
//����������
//һ�У�һ��ʮ��������a����һ���˽�����b���м���һ���ո�
//���������
//һ�У�a + b��ʮ���ƽ����
//ʾ��1
//���룺
//0x12 05
//����
//�����
//23
//����
//��ע��
//ʮ������Hexadecimalһ����0x��ͷ������0xFF���˽���Octal��һ����0��ͷ������07��
//#include <stdio.h>
//
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%x", &a);
//    scanf("%o", &b);
//    printf("%d", a + b);
//    return 0;
//}
//����
//��������������Ҫ����������������ĺ�
//
//
//����������
//������������ a, b ��0 <= a, b <= 1000��
//���������
//���һ������.
//ʾ��1
//���룺
//1 2
//����
//�����
//3
//#include <stdio.h>
//
//int main() {
//    int a = 0, sum = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        sum = sum + a;
//    }
//    printf("%d", sum);
//    return 0;
//}
//����
//������������a, b, ���a / b��ֵ��ֻ������������
//����������
//������������, ��int��Χ��
//���������
//���һ������
//ʾ��1
//���룺
//5 2
//����
//�����
//2
//#include <stdio.h>
//
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    a = a / b;
//    printf("%d", a);
//    return 0;
//}
//����
//����һ����������Ҫ��õ��ø������ĸ�λ����
//
//���ݷ�Χ�� 0 < n \le 200 \0 < n��200
//	����������
//	һ�У�����һ����������
//	���������
//	һ�У�����һ��������Ϊ���븡������Ӧ�ĸ�λ����
//	ʾ��1
//	���룺
//	13.141
//	����
//	�����
//	3
//#include <stdio.h>
//
//int main() {
//    float a = 0;
//    scanf("%f", &a);
//    int b = 0;
//    b = (int)a % 10;
//    printf("%d", b);
//    return 0;
//}
//����
//ţţ���ڸ��������������ӰƱ����֪һ�ŵ�ӰƱ����100Ԫ������ x λ���ѵ���Ʊ���Ƕ��٣�
//����������
//����һ�������� x ����ʾţţ�����Ѹ���
//���������
//�����Ʊ�� ��ţţ����Ҫ���Լ���Ʊ��
//ʾ��1
//���룺
//1
//����
//�����
//100
//#include<stdio.h>
//int main() {
//    int x = 0;
//    int sum = 0;
//    scanf("%d", &x);
//    sum = 100 * x;
//    printf("%d", sum);
//    return 0;
//}
//����
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�������ͼ����
//����������
//�������룬һ��������1~20������ʾ�����εĳ��ȣ�Ҳ��ʾ���������
//
//���������
//���ÿ�����룬����á� * ����ɵĶ�Ӧ�߳��������Σ�ÿ���� * ��������һ���ո�
//
//ʾ��1
//���룺
//4
//����
//�����
//* ***
//****
//****
//****
//#include <stdio.h>
//int main() {
//    int l = 0;//����lΪ�߳�
//    int i = 0, j = 0;//
//    while (scanf("%d", &l) != EOF) //Ҫ��������룬Ӧ�ÿ⺯��scanf�ķ���ֵ�ص�
//    {
//        for (i = 0; i < l; i++)//��forѭ��������������
//        {
//            for (j = 0; j < l; j++)//���ƺ������
//            {
//                printf("* ");
//            }
//            printf("\n");//����
//        }
//    }
//    return 0;
//}
//����
//������ʥ���ڣ�ţţҪ��ӡһ��Ư����ʥ�����͸������е�Ů���ѣ����������ʵ�����롣
//����������
//����ʥ�����Ĵ�С nn
//1��n��81��n��8
//���������
//�����Ӧ��ʥ����
//#include<stdio.h>
//int main()
//{
//	/*��ӡһ������ͼ��*/
//	/*ÿ��ͼ������һ��ͼ���������Ӷ��ɣ����ѭ��Ҫ�����ڴ˹�����*/
//	/*ͼ�η����ɺ���֦*/
//	//���ɲ���
//	printf("  *  \n * * \n* * *");
//	int n = 1;
//	scanf("%d", &n);
//	int i = 0;
//	while (i < (1<<n))
//	{
//		printf("  *  \n * * \n* * *");
//		i++;
//	}
//	return 0;
//}