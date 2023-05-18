#include <bits/stdc++.h>
#include "customMap.h"
using namespace std;


int main(){
    // ourmap<int>* m1 = new ourmap<int>();
    // m1->insert("name",12);
    // cout << "size : " << m1->size() << endl;

    // cout << "getting value for key \"name\" : " << m1->getValue("name") << endl;

    // m1->remove("name");
    // cout << "after removing value size : " << m1->size() << endl;

    // cout << "after removing the key : " << m1->getValue("name") << endl;

    // m1->insert("key1",10);
    // m1->insert("key2",12);
    // m1->insert("key3",14);
    
    // cout << m1->size();
    ourmap<int>* map = new ourmap<int>();
    
    for (int i=0; i<20; i++){
        char num = '0' + i;
        string key = "abc";
        key = key + num;
        int value = i+1;
        map->insert(key,value);
        // cout << map->getLoadFactor() << endl;
    }   
    
    cout << map->size() << endl;
    cout << map->getValue("abc1") << endl;
    map->remove("abc1");
    cout << map->getValue("abc1") << endl;
    cout << map->size() << endl;
    map->insert("abc1",99);
    cout << map->getValue("abc1") << endl;
    return 0;

}
