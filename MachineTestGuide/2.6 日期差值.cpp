#include <stdio.h>

//������ж��Ƿ������꣬�������ÿ������
#define ISYEAP(x) x%100!=0 && x%4==0 || x%400==0? 1:0

//Ԥ��ÿ�µ�������ע�������Ϻ궨�������⴦��
int dayOfMonth[13][2] = {
    0, 0,
    31, 31,
    28, 29,
    31, 31,
    30, 30,
    31, 31,
    30, 30,
    31, 31,
    31, 31,
    30, 30,
    31, 31,
    30, 30,
    31, 31
};

//�����࣬�������ڵ�����
struct Date {
    int Day;
    int Month;
    int Year;
    //������һ�������
    void nextDay() {
        Day++;
        //�����������˵����������
        if (Day > dayOfMonth[Month][ISYEAP(Year)]) {
            Day = 1;
            Month++; //������һ��
            //��������12
            if (Month > 12) {
                Month = 1;
                Year++; //������һ��
            }
        }
    }
};

int buf[5001][13][32]; //����Ԥ���������
//�����ֵ
int Abs(int x) {
    return x < 0 ? -x : x;
}

int main() {
    Date tmp;
    int cnt = 0; //��������
    //��ʼ�����������Ϊ0��1��1��
    tmp.Day = 1;
    tmp.Month = 1;
    tmp.Year = 0;
    //���ڲ�����5000��
    while (tmp.Year != 5001) {
        buf[tmp.Year][tmp.Month][tmp.Day] = cnt; //��������0��1��1�յ������������
        tmp.nextDay(); //������һ������
        cnt++; //�������ۼӣ�ÿ����һ���������+1��������ԭ�����ڵļ��������һ��
    }
    int d1, m1, y1;
    int d2, m2, y2;
    //����Ҫ�������������
    while (scanf("%4d%2d%2d", &y1, &m1, &d1) != EOF) {
        scanf("%4d%2d%2d", &y2, &m2, &d2);
        printf("%d\n", Abs(buf[y2][m2][d2] - buf[y1][m1][d1]) + 1); //��Ԥ��������ݼ��������ڲ�ֵ��ע������������ֵ
    }
}
