#define _CRT_SECURE_NO_WARNINGS 1
//����
//���⣺һ��Լ�� 3.156��107 s��Ҫ�������������䣬��ʾ������϶����롣
//
//���ݷ�Χ�� 0 < age \le 200 \0 < age��200
//
//	����������
//	һ�У�����һ������age��
//	���������
//	һ�У�����һ����������������Ӧ��������
//	ʾ��1
//	���룺
//	20
//	����
//	�����
//	631200000
//#include <stdio.h>
//
//int main()
//{
//    long long age = 0;
//    scanf("%d", &age);
//    long long time = 0;
//    time = age * 3156 * 10000;
//    printf("%lld", time);
//    return 0;
//}
//22222222222222222222222222
//����
//ţţ�ڿ��ˣ�Ҫ��10��ˮ���ܽ�ʣ�������ֻ��һ���� h ���ף�����뾶�� r ���׵�ˮ����ţţ����Ҫ�ȶ��ٱ�ˮ���ܽ�ʡ�
//
//ˮ���������ʽ�� \pi \times h \times r ^ 2 \�С�h��r
//2
//������ \pi \��  ȡ 3.14 ��h\h  �� r\r  ��������
//����������
//���뱭�ӵĸ߶� h ������뾶 r ��
//���������
//���ţţ����Ҫ�ȶ��ٱ�ˮ
//ʾ��1
//���룺
//2 6
//����
//�����
//45
//int main(void)
//{
//    int h = 0, r = 0;
//    scanf("%d%d", &h, &r);
//    float v = h * 3.14 * r * r;
//    int c = 10000;
//    int d = 0;
//    while (c > 0)
//    {
//        c = c - v;
//        d++;
//    }
//    printf("%d", d);
//    return 0;
//}