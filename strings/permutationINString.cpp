#include <bits/stdc++.h>
using namespace std;

// new way

bool checkEqual(int count1[26], int count2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return 0;
        }
    }

    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};

    for (int i = 0; i < s1.size(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.size();
    int count2[26] = {0};

    while (i < windowSize && i < s2.size())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return 1;
    }

    while (i < s2.size())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
        {
            return 1;
        }
    }

    return 0;
}

// correct code:

// bool checkInclusion(string s1, string s2){
//     char ch[26]={0};
//     int total=s1.size();
//     int i=0;
//     int j=0;
//     for(int i=0; i<s1.size(); i++){
//         ch[s1[i]-'a']++;
//     }
//     i=0;

//     while(j<s2.size()){
//         if(ch[s2[j++]-'a']-- >0){
//             total--;
//         }
//         if(total==0){
//             return true;
//         }
//         if(j-i==s1.size() && ch[s2[i++]-'a']++ >=0){
//             total++;
//         }
//     }

//     return false;
// }

//  This code below i was trying and give wrong output for some test cases:

//   string permutation(string s){
//         string ans="";
//         int i=0;
//         while(next_permutation(s.begin(),s.end())){
//             i++;
//             if(i==s.length()-1){
//                 ans=s;
//                 break;
//             }
//         }

//         return ans;
//     }

//     bool checkInclusion(string s1, string s2) {
//         string s=permutation(s1);
//         int n1=s.size();
//         int n2=s2.size();
//         string temp="";
//         for(int i=0; i<n1; i++){
//             temp+=s2[i];
//         }
//         cout<<s<<endl;
//         cout<<temp<<endl;
//         for(int i=n1; i<=n2; i++){
//             if(temp==s){
//                 return true;
//             }
//             temp.erase(temp.begin(),temp.begin()+1);
//             temp+=s2[i];
//             cout<<temp<<endl;
//         }

//         return false;
//     }

int main()
{
    string s1 = "abc";
    string s2 = "bbbca";

    if (checkInclusion(s1, s2))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}