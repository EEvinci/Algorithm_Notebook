#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct E {
    char name[101];
    int age;
    int score;
} buf[1000];

//ʵ�ֱȽϹ���
bool cmp(E a, E b) {
    if(a.score != b.score)
        return a.score < b.score; //����������ͬ�����������ǰ
    int tmp = strcmp(a.name, b.name); //strcmp()�����Ƚ������ַ����Ĵ�С��s1<s2���ظ�ֵ��s1=s2�����㣬s1>s2������ֵ
    if(tmp != 0)
        return tmp < 0; //��������ͬ�������ֵ���С����ǰ
    else
        return a.age < b.age; //������Ҳ��ͬ������С����ǰ
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++) {
            scanf("%s%d%d", buf[i].name, &buf[i].age, &buf[i].score);
        }
        sort(buf, buf + n, cmp); //�����Լ�����Ĺ���������������
        for(int i = 0; i < n; i++) {
            printf("%s %d %d\n", buf[i].name, buf[i].age, buf[i].score);
        }
    }
    return 0;
}
