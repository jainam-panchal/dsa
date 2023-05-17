#include <bits/stdc++.h>
#include "customMap.h"
using namespace std;


int main(){
    ourmap<int>* m1 = new ourmap<int>();
    m1->insert("name",12);
    cout << "size : " << m1->size() << endl;

    cout << "getting value for key \"name\" : " << m1->getValue("name") << endl;

    m1->remove("name");
    cout << "after removing value size : " << m1->size() << endl;

    cout << "after removing the key : " << m1->getValue("name") << endl;

    m1->insert("key1",10);
    m1->insert("key2",12);
    m1->insert("key3",14);
    
    cout << m1->size();

}
