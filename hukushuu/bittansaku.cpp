#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;//集合の要素の数
    int bit;
    int i;
    vector<int> shugou;
    cin >> n;
    /*cout << n;*/
    for(i=0;i<n;i++){
        cin >> bit;
        shugou.push_back(bit);
    }
    for(bit = 0;bit<(1<<n);bit++){
        vector<int> s;
        for(i=0;i<n;i++){
            if(bit & (1<<i)){ //(1<<i)は１をi桁目まで移すということなので例えばbit = 0101のときifはi=0,2でうごく。
                s.push_back(shugou[i]);
            }
        }
        cout << "{";
        for(i=0;i<(int)s.size();i++){
            cout << s[i];
            if(i != (int)s.size()-1){
                cout << ",";
            }
        }
        cout << "}" << endl;
    }
    return 0;
}