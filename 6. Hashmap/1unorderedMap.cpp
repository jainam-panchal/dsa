#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map<string, int> map;

    // insert
    pair<string, int> p("abc",1);
    map.insert(p);

    // insert (easy way)
    map["def"] = 2;

    // find / acccess
    cout << map["abc"] << endl;
    cout << map["def"] << endl;


    // if not exists
    cout << map["ghi"] << endl;     // doesnt throw error
    // cout << map.at("asdfa") << endl;  // throws error


    // check presence
    if(map.count("asdfa") > 0)
    {
        cout << "yes, it exists" << endl;
    }
    else{
        cout << "no, it doesn't exist" << endl;
    }



    return 0;
}