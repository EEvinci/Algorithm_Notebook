#include <queue>
#include <stdio.h>
using namespace std;

priority_queue<int, vector<int>, greater<int> > Q;  //����һ��С����

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        while (Q.empty() == false)
            Q.pop(); //��ն���Ԫ��
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            Q.push(x); //��Ȩֵ�������
        }
        int ans = 0;
        while (Q.size() > 1) {
            //ȡ������������СԪ�أ�����Ϊͬһ���������Ҷ��ӣ��Ҹ�˫�׽���ȨֵΪ���ǵĺ�
            int a = Q.top();
            Q.pop();
            int b = Q.top();
            Q.pop();
            ans += a + b; //�ø��׽���Ϊ��Ҷ�ӽ�㣬���ۼ���Ȩֵ
            Q.push(a + b); //����˫�׽���Ȩֵ�Żض���
        }
        printf("%d\n", ans); //�����
    }
    return 0;
}
