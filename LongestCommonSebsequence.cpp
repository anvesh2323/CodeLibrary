#include <bits/stdc++.h>
using namespace std;

int get_lcs(string str1, string str2, int len1, int len2)
{
    int i, j;
    int lcs[len1+1][len2+1];
    for(i = 0 ; i < len2; i++)
        lcs[0][i] = 0;
    for(i = 0; i <= len1; i++)
        lcs[i][0]=0;
    for(i = 1; i <= len1; i++) {
        for(j = 1; j <= len2; j++) {
            if(str1[i-1] == str2[j-1])
                lcs[i][j] = 1 + lcs[i-1][j-1];
            else
                lcs[i][j] = lcs[i-1][j] > lcs[i][j-1]  ? lcs[i-1][j] : lcs[i][j-1];
        }
    }
    return lcs[len1][len2];
}


int main()
{
    string str1 = "answer";
    string str2 = "answwwwer";

    int result;
    result = get_lcs(str1, str2, str1.size(), str2.size());
    cout<<"LCS for supplied input is:\n";
    cout<<result;

    return 0;
}