#include <iostream>
#include <string>
#include <vector>
using namespace std;

void kc(string* arr, int q, vector <string> e){
    if(q == 0){
        for(int i=0;i<e.size();i++){
            cout<<e[i]<<" ";
        }
        cout<<endl;
        cout << e.size() <<endl;
        return ;
    }
    int z = (q % 10)-1;
    vector <string> w;
    string valve = arr[z];
    for(int i = 0; i < valve.size(); i++){
        if(e.size() == 0){
            w.push_back(string(1,valve.at(i)));
        }
        else{
            for(int j = 0; j < e.size(); j++){
                w.push_back(valve.at(i)+e[j]);
            }
        }
    }
    kc(arr,q/10,w);
}

int main() {
	int q;
	cin >> q;
	string arr[9] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};
    vector<string> e;
    kc(arr,q,e);
	return 0;
}