#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    float r1 = 0.0, r2 = 0;
//    scanf("%f  %f", &r1, &r2);
//    float c = 0;
//    c = (r1 * r2) / (r1 + r2);
//    printf("%.1f", c);
//    return 0;
//}
//����
//ţţ�ڿ��ˣ�Ҫ��10��ˮ���ܽ�ʣ�������ֻ��һ���� h ���ף�����뾶�� r ���׵�ˮ����ţţ����Ҫ�ȶ��ٱ�ˮ���ܽ�ʡ�
//
//�С�h��r2������
//��  ȡ 3.14 ��
//h  ��r  ��������
//����������
//���뱭�ӵĸ߶� h ������뾶 r ��
//���������
//���ţţ����Ҫ�ȶ��ٱ�ˮ
//int main()
//{
//	float r = 0, h = 0, v = 0;
//	int n = 0;
//	scanf("%f %f", &h, &r);
//	v = r * r * h * 3.14;
//	float V = 10000;
//	n = V / v;
//
//	if (n * v !=V)
//	{
//		n++;
//	}
//	printf("%d", n);
//}
//����
//ţţ�սӴ��Ȳ����У� ��֪���Ȳ�������ÿ����ǰһ��Ĳ�ֵ����ȵ����У���֪��һ�� a �͵ڶ��� b ��ֵ������֪���������Ƕ��١�
//����������
//����Ȳ����еĵ�һ������ a �� b
//���������
//����Ȳ����е������ֵ
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d", &a, &b);
//	c = b + (b - a);
//	printf("%d", c);
//	return 0;
//}
//����
//ţţ��һ���뾶Ϊ r ��������֪�������������
//
//��������ʽ��
// r ��һ������
//����������
//������İ뾶
//���������
//���������
//int main()
//{
//	int r = 0;
//	float v = 0.0;
//	scanf("%d", &r);
//	v = 3.14 * 4 / 3 * r * r * r;
//	printf("%.2f", v);
//	return 0;
//}
//����
//С���ֱȽ����裬��������˯����Ȼ����ȥѧϰ����֪�����ڵ�ʱ�̣��Լ��Լ�Ҫ˯��ʱ�������趨һ�����ӽ�����ѧϰ��������̫���ˣ���֪��Ӧ�ð������趨���ĸ�ʱ�̣������������(ֻ����ʱ�ͷ֣�����������)
//
//����������
//�������ڵ�ʱ���Լ�Ҫ˯��ʱ��k����λ��minute�����м��ÿո�ֿ���
//
//�����ʽ��hour : minute k(��hour��minute��ֵΪ1������Ϊ1��������01)
//
//(0 �� hour �� 23��0 �� minute �� 59��1 �� k �� 109)
//
//���������
//����ÿ�����룬�������Ӧ���趨��ʱ�̣������ʽΪ��׼ʱ�̱�ʾ������ʱ�ͷֶ�������λ��ʾ��λ��������ǰ��0���룩��
//int main() {
//    int h = 0, m = 0, k = 0;
//    scanf("%d:%d", &h, &m);
//    scanf("%d", &k);
//    int H = 0, M = 0;
//    H = k / 60;
//    M = k % 60;
//    h = h + H;
//    m = m + M;
//    if (h > 23) {
//        h = h % 24;
//    }
//    if (m >= 60) {
//        H = m / 60;//�����׺��Ե�����λ�ý�������һ��
//        m = m % 60;
//        h = h + H;
//    }
//    printf("%#02d:%#02d", h, m);
//    return 0;
//}
//����
//С��������ڿ���ѧϰ����������������������Լ������С����������������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣
//
//����������
//ÿ�������������������n��m��(1 �� n �� 109��1 �� m �� 109)
//
//���������
//����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�