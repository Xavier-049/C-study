#include <stdio.h>

int main(void)
{
    double a, b; // ��������˫���ȸ������������ڴ洢���εĳ��Ϳ�
    double perimeter, area; // ��������˫���ȸ������������ڴ洢���ε��ܳ������

    // ��ȡ�û�����ľ��εĳ��Ϳ�
    scanf("%lf %lf", &a, &b);

    // ������ε��ܳ������
    perimeter = 2 * (a + b); // �ܳ���ʽ��2 * (�� + ��)
    area = a * b; // �����ʽ���� * ��

    // ������ε��ܳ������������λС��
    printf("%.2lf\n", perimeter);

    // ������ε���������������λС��
    printf("%.2lf\n", area);

    return 0;
}