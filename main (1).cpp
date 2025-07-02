#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
class Doublelinkedlist{
    private:
    Node*head;
    
    public:
    Doublelinkedlist(){
        head=nullptr;
    }
};
    int main(){
    Doublelinkedlist ll;
    };
