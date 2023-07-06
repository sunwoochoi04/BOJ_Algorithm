#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    unordered_map<string, int>um;
    int pkm_num,question_num; cin >> pkm_num >> question_num;
    string arr[pkm_num];
    for(int i=1;i<=pkm_num;i++){
        string pkm_name; cin >> pkm_name;
        um.insert({pkm_name,i});
        arr[i-1] = pkm_name;
    }
    for(int i=0;i<question_num;i++){
        string question; cin >> question;
        int temp = atoi(question.c_str());
        if(temp == 0){
            cout << um[question] << '\n';
        }else{
            int kk = stoi(question);
            cout << arr[stoi(question)-1] << '\n';
        }

    }
}



// unordered_map<string, int>m;
// m.insert({"ex",26});
// m["er"] 는 26