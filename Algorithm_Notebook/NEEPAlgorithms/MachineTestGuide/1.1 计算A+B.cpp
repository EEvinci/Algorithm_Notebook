#include<stdio.h>

int main() {
    int a, b;
    //ע��scanf�����з���ֵ���ɹ�������벢��ֵ�򷵻�1
    //��Ŀ��ȷҪ���������ݻ��ж��飬��ʹ�ø�ѭ��������������ɶ������Ƿ�������ж�
    while(scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
    return 0;
}
