#define _CRT_SECURE_NO_WARNINGS 1
//����
//���ݸ�����������3����a, b, c�����������ε��ܳ��������
//
//���ݷ�Χ��
//	0 < a, b, c��100000
//	����������
//	һ�У�������3���ߣ��ܹ��������Σ����м���һ���ո������
//	���������
//	һ�У��������ܳ��������������λС�������м���һ���ո��������������ʽ������������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float ci = 0;
//    float s = 0;
//    float a = 0, b = 0, c = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    ci = a + b + c;
//    float d = ci / 2.0;
//    s = sqrt(d * (d - a) * (d - b) * (d - c));
//    printf("circumference=%.2f area=%.2f", ci, s);
//    return 0;
//}
//����������
//���У�
//
//��1�У�������n��1��n��100��
//
//��2�У�n�Ƴɼ�����Χ0.0~100.0�����ÿո�ָ���
//���������
//���һ�У��������������ֱ��ʾ����߷֣���ͷ��Լ�ƽ���֣�С�������2λ�����ÿո�ָ���
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    float score = 0;
//    float l = 0, r = 0;
//    float sum = 0;
//    scanf("%d", &n);
//    int tm = n;
//    scanf("%f", &l);
//    scanf("%f", &r);
//    int t = 0;
//    sum = l + r;
//    if (r < l)
//    {
//        t = r;
//        l = r;
//        r = t;
//    }
//    while ((n - 2) > 0)
//    {
//        scanf("%f", &score);
//        sum = sum + score;
//        if (score < l)
//        {
//            l = score;
//        }
//        if (score > r)
//        {
//            r = score;
//        }
//        n--;
//    }
//    float a = 0;
//    a = sum / tm;
//    printf("%.2f %.2f %.2f", r, l, a);
//    return 0;
//}
