#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> s;
    cin >> n;
    list<char> l(s.begin(),s.end());
    auto now = l.end();

    for(int i=0;i<n;i++){
        char tmp;
        cin >> tmp;

        if(tmp == 'L'){
            if(now != l.begin()){
                now--;
            }
        }
        else if(tmp == 'D'){
            if(now != l.end()){
                now++;
            }
        }
        else if(tmp == 'B'){
            if(now != l.begin()){
                now = l.erase(--now);
            }
        }
        else if(tmp == 'P'){
            char c;
            cin >> c;
            l.insert(now, c);
        }
    }
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }
    return 0;
}
