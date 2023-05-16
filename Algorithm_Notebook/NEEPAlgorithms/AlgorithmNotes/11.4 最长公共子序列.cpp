/**
* 问题：给定两个字符串（或数字序列）A和B，求一个字符串
*       使得这个字符串是A和B的最长公共部分（子序列可以不连续）
*       如，"sadstory"和"adminsorry"的最长公共子序列为"adsory"，长度为6
**/

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100;

char A[N], B[N];
int dp[N][N];

int main() {
    //从下标为1开始读入
    //gets(A + 1);
    //gets(B + 1);
    gets_s(A + 1, N);
    gets_s(B + 1, N);
    //由于读入时下标从1开始，因此读取长度也从+1开始
    int lenA = strlen(A + 1);
    int lenB = strlen(B + 1);
    //边界
    for (int i = 0; i <= lenA; i++)
        dp[i][0] = 0;
    for (int j = 0; j <= lenB; j++)
        dp[0][j] = 0;
    //状态转移方程
    for (int i = 1; i <= lenA; i++) {
        for (int j = 1; j <= lenB; j++) {
            if (A[i] == B[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    //dp[lenA][lenB]是答案
    printf("%d\n", dp[lenA][lenB]);
    return 0;
}
