#include <bits/stdc++.h>
using namespace std;
//10845. 큐
int main()
{
    int n, add, del;
    string cmd;
    queue<int> q;
    cin >> n;
    while(n--)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            cin >> add;
            q.push(add);
        }
        else if(cmd=="pop")
        {
            if(!q.empty())
            {
                cout<< q.front() << "\n";
                q.pop();
            }
            else cout << "-1\n";

        }
        else if(cmd=="front")
        {
            if(!q.empty()) cout<< q.front() <<"\n";
            else cout<< "-1\n";
        }
        else if(cmd=="back")
        {
            if(!q.empty())cout << q.back() << "\n";
            else cout<<"-1\n";
        }
        else if(cmd=="empty"){
            if(q.empty()) cout << "1\n";
            else cout<<"0\n";
        }
        else if(cmd=="size") cout << q.size() << "\n";

    }

}