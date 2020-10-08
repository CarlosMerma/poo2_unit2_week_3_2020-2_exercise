//
// Created by rudri on 9/12/2020.
//

#ifndef POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#define POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#include <iostream>
#include <list>
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
class linked_list {
private:
    Node *head = nullptr;
    Node *tail = nullptr;
    int size;
public:
    linked_list() = default;

    linked_list(Node *head) : head(head) {}

    void push_back(utec value) {
        Node *temp = nullptr;
        temp->data = value;
        if (tail == nullptr)
            head = tail;
        else {
            tail->next = temp;
            tail = temp;
        };

    };

    void pop_back() {
        if (size == 1) {
            delete tail;
            head = tail = NULL;
        } else {
            while (head->next->next != NULL) {
                head = head->next;
            }
            tail = head;
            delete tail->next;
            tail->next = NULL;
            --size;
        }

    }

    void insert(int n) {
        Node *tmp = new Node;
        tmp->data = n;
        tmp->next = NULL;
        if (head == NULL) {
            head = tmp;
            tail = tmp;
        } else {
            tail->next = tmp;
            tail = tail->next;
        }

    }

    void erase(int Value) {
        Node *prev = head; // empty header
        Node *current = head->next; // the first valid node
        while (current != NULL) {
            if (current->data == Value) {
                break;
            } else {
                prev = current;
                current = current->next; // go to next value
            }
        }
        if (current != NULL) {
            prev->next = current->next;
            delete current;
        };
    }

    void first(Node *prev, int new_data) {
        Node *new_node = new Node();
        new_node->data = new_data;
        new_node->next = prev->next;
        prev->next = new_node;
    };

    void last(Node *&first, int name) {
        Node *temp = first;
        while (temp && temp->next != NULL) temp = temp->next;
        Node *temp1 = new Node;
        temp1->data = name;
        temp1->next = NULL;
        if (temp == NULL)
            first = temp1;
        else
            temp->next = temp1;
    };
};
#endif //POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H