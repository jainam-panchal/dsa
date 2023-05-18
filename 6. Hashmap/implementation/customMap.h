#include <bits/stdc++.h>
using namespace std;

template<typename V>
class MapNode {
    public:
        string key;
        V value;
        MapNode* next;

    MapNode(string key, V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~MapNode(){
        delete next;
    }
};

template<typename V>
class ourmap {
    MapNode<V>** buckets;
    int count;
    int totalSize;
    double loadFactor;

    public:
    ourmap(){
        count = 0;
        totalSize = 5;
        buckets = new MapNode<V>* [totalSize];
        for(int i=0; i<totalSize; i++){
            buckets[i] = NULL;
        }
    }
    ~ourmap(){
        for(int i=0; i<totalSize; i++){
            delete buckets[i];
        }
        delete [] buckets;
    }

    int size(){
        return count;
    }

    double getLoadFactor(){
        return loadFactor;
    }


    private:
        int getHashIndex (string key){
            int hashcode=0;
            int coeff=1;
            for(int i=0; i<key.size()-1; i++){
                hashcode += key[i] * coeff;
                hashcode = hashcode % totalSize;
                coeff *= 37;
                coeff = coeff % totalSize;
            }
            return hashcode;
        }
        
        void rehash(){
            MapNode<int>** old = buckets;
            int oldtotalSize = totalSize;
            totalSize *= 2;
            count=0;
            buckets = new MapNode<V>*[totalSize];
            for(int i=0; i<totalSize; i++){
                buckets[i] = NULL;
            }

            for(int i=0; i<oldtotalSize; i++){
                MapNode<V>* head = old[i];
                while(head != NULL){
                    string key = head->key;
                    V value = head->value;
                    insert(key,value);
                    head = head->next;   
                }
            }

            // now deleting old hashmap
            for(int i=0; i<oldtotalSize; i++){
                MapNode<V>* head = old[i];
                delete head;
            }
            delete [] old;
        }

    public:
    void insert (string key,V value){
        int index = getHashIndex(key);
        MapNode<V>* head = buckets[index];

        // if the key exists then update
        while(head != NULL){
            if(head->key == key){
                head->value = value;
                return;
            }
            head = head->next;
        }
        // if execution comes here then it means there is no such key exists
        head = buckets[index];\
        MapNode<V>* newNode = new MapNode<V>(key,value);
        newNode->next = head;
        buckets[index] = newNode;
        count++;
        // Rehashing Implementation
        loadFactor = (1.0*count) / totalSize;
        if (loadFactor > 0.7) {
            rehash();
        }
    }



    V remove(string key){
        // first case if it exists then return the value
        // second case if it doesn't exists return 0
        int index = getHashIndex(key);
        MapNode<V>* head = buckets[index];

        if(head->key == key){
            V data = head->value;
            MapNode<V>* newHead = head->next;
            head->next = NULL;
            buckets[index] = newHead;
            delete head;
            count--;
            return data;
        }

        while(head->next != NULL){
            if(head->next->key == key){
                MapNode<V>* temp = head->next;
                head->next = temp->next;
                temp->next = NULL;
                V data = temp->value;
                delete temp;
                count--;
                return data;
            }
            head = head->next;
        }

        return -1;
    }
    
    V getValue(string key){
        int index = getHashIndex(key);
        MapNode<V>* head = buckets[index];

        while(head != NULL){    
            if(head->key == key){
                return head->value;
            }
            head = head->next;
        }

        return -1;
    }
};