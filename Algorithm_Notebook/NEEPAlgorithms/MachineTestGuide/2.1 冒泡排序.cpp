#include <stdio.h>

int main() {
    int n;
    int buf[100]; //�������ǽ�Ҫʹ�õı���n������buf[100]�����潫Ҫ���������
    while(scanf("%d", &n) != EOF) { //����n����ʵ�ֶ������ݵ�����
        for(int i = 0; i < n; i++) {
            scanf("%d", &buf[i]); //�������������
        }
        //ð����������
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - 1 - i; j++) {
                if(buf[j] > buf[j + 1]) {
                    int tmp = buf[j];
                    buf[j] = buf[j + 1];
                    buf[j + 1] = tmp;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            printf("%d ", buf[i]); //���������������֣�ע����Ŀ���Ҫ����ÿ�����ֺ����һ���ո�
        }
        printf("\n");
    }
    return 0;
}
