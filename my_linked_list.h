//
// Created by rudri on 9/12/2020.
//

#ifndef POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#define POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#include <iostream>
using namespace std;
class Node{
public:
    int key;
    int data;
    Node *next{};
    Node(){
        key =0;
        data= 0;
        next =NULL;
    }
    Node(int k ,int d){
        key = k;
        data=d;
    }

};

template <class utec>
class linked_list{
private:
    Node *head =nullptr;
    Node *tail =nullptr;
public:
    linked_list()=default;
    linked_list(Node *head) : head(head) {}
    void push_back(utec value){
        Node *temp = nullptr;
        temp->data=value;
        if(tail == nullptr)
            head= tail;
        else {
            tail ->next() = temp;
            tail = temp;
        };

    };
    

};

#endif //POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
