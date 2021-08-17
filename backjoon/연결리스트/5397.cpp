// 5397. 키로거
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int j=0;j<t;j++)
    {
        list<char> l;
        list<char>::iterator cursor = l.begin();
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='<')
            {
                if(cursor!=l.begin()) cursor--;
            }
            else if(s[i]=='>')
            {
                if(cursor!=l.end()) cursor++;
            }
            else if(s[i]=='-')
            {
                if(cursor!=l.begin()) cursor= l.erase(--cursor);
            }
            else
            {
                l.insert(cursor,s[i]);
            }
        }
        for (cursor=l.begin();cursor!=l.end();cursor++) cout << *cursor ;
        cout << '\n';
    }
    return 0;
}