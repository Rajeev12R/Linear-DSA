// Reverse every word in a string

#include <bits/stdc++.h>
using namespace std;

string reverse_string(string s)
{
    int i = 0;
    int n = s.length();

    int st, end;
    vector<string> word;

    while (i < n)
    {
        while (i < n && s[i] == ' ')
            i++;

        if (i >= n)
            break;
        st = i;
        while (i < n && s[i] != ' ')
            i++;
        end = i - 1;

        string w = s.substr(st, end - st + 1);
        word.push_back(w);
    }

    string ans = "";
    for (int i = word.size() - 1; i >= 0; i--)
    {
        ans += word[i];
        if (i != 0)
            ans.push_back(' ');
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverse_string(s) << endl;

    return 0;
}