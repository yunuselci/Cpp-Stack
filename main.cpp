#include <iostream>
using namespace std;

class StackNode{
public:
    int data;
    StackNode* next;
    StackNode(const int& data = 0,StackNode* next = NULL) : data(data), next(next){}
};

class Stack{
    StackNode* root;
public:
    Stack() : root(NULL){}
    ~Stack(){
        makeEmpty();
    }
    StackNode* begin()const { return root; }
    StackNode* end()const { return NULL; }
    bool isEmpty()const { return begin() == end(); }

    void push(const int& value){
        StackNode* tmp = new StackNode(value,root);
        root = tmp;
    }

    int size()const{
        StackNode* tmp =begin();
        int lenght = 0;
        while (tmp != end()){
            lenght++;
            tmp = tmp -> next;
        }
    }

    int top()const{
        if(isEmpty())
            cout << "Bos oldugu icin hata.";
        return begin()->data;
    }

    void pop(){
        if(isEmpty())
            cout << "Bos oldugu icin hata.";
        StackNode* tmp= root;
        root = tmp -> next;
        delete tmp;
    }

    void makeEmpty(){
        while(!isEmpty())
            pop();
    }

    void print() const{
        StackNode* tmp = begin();
        while(tmp != end()) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }
};

int main() {
    
}