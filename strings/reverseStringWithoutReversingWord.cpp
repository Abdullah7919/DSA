#include <bits/stdc++.h>
using namespace std;

string reverse(string temp)
{
    int s = 0;
    int e = temp.size();

    while (s <= e)
    {
        swap(temp[s++], temp[e--]);
    }

    return temp;
}

string reverseWords(string S)
{
    string temp = "";
    string revString = "";
    for (int i = S.size(); i >= 0; i--)
    {

        if (S[i] == ' ')
        {
            temp = reverse(temp);
            cout<<temp<<endl;
            revString += temp + ' ';
            temp = "";
        }
        
        temp.push_back(S[i]);
        
    }

    temp = reverse(temp);
    revString += temp;

    return revString;
}

int main()
{
    string s = "the sky is blue";
    string ans = reverseWords(s);
    cout << ans;
    return 0;
}