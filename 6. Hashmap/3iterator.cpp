#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> ourmap;
    ourmap["abc"] = 1;
    ourmap["abc1"] = 2;
    ourmap["abc2"] = 3;
    ourmap["abc3"] = 4;
    ourmap["abc4"] = 5;
    ourmap["abc5"] = 6;

    
    unordered_map<string,int>::iterator it = ourmap.begin();
    while(it != ourmap.end()){
        cout << "Key: " << it->first << " Value:" << it->second << endl;
        it++;
    }

    // find and delete
    unordered_map<string,int>::iterator it3 = ourmap.find("abc");
    ourmap.erase(it3);


    vector<string> random;
    random.push_back("abc");
    random.push_back("abc1");
    random.push_back("abc2");

    vector<string>::iterator it2 = random.begin();
    while(it2 != random.end()){
        cout << *it2 << endl;
        it2++;
    }
}