#include <bits/stdc++.h>
using namespace std;
struct Node {
    char data;
    Node* next;
    Node* prev;
};
void getList(Node*& head);
int main() {
    // input data
    string s;
    int M;
    char k;
    cin >> s >> M;


    Node* head = new Node();
    head->data = 0;

    Node* curNode = head;
    for(int i=0; i<s.size(); i++) {
        Node* newNode = new Node();
        newNode->data = s[i];
        newNode->next = NULL;
        newNode->prev = curNode;
        curNode->next = newNode;
        curNode = curNode->next;
    }

    for(int i=0; i<M; i++) {
        char command;
        cin >> command;

        if(command=='L'){
            if(curNode->data) curNode = curNode->prev;
        }

        else if(command=='D'){
            if(curNode->next) curNode = curNode->next;
        }

        else if(command=='B') {
            // 문자열의 제일 왼쪽이 아닐 때
            if(curNode->data) {     

                // 문자열의 제일 오른쪽일 때
                if(!curNode->next) curNode->prev->next = NULL; 

                // 문자열의 중간일 때 
                else {                                          
                    curNode->prev->next = curNode->next;
                    curNode->next->prev = curNode->prev;
                }

                curNode = curNode->prev;
            }
        }

        else if(command=='P') {
            cin >> k;

            Node* newNode = new Node();
            newNode->data = k;
            newNode->prev = curNode;
            // 문자열의 중간일 때
            if(curNode->next){
                newNode->next = curNode->next;
                curNode->next->prev = newNode;
            }

            curNode->next = newNode;
            curNode = newNode;
        }
    }
    // 문자열 출력
    getList(head);
}
void getList(Node*& head){
    Node* curNode = head;
    while(curNode->next!=NULL) {
        curNode = curNode->next;
        cout << curNode->data;
    }
}