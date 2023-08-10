#include <iostream>

class Node{
public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Tree{
public:
    Node* head;

    Tree(){
        this->head= nullptr;
    }

    void add_next_available(Node*&new_node, Node*&current_node){
        if(new_node->data < current_node->data){
            if(current_node->left == nullptr){
                current_node->left=new_node;
            }
            else{
                add_next_available(new_node,current_node->left);
            }
        }
        else if(new_node->data > current_node->data){
            if(current_node->right == nullptr){
                current_node->right = new_node;
            }
            else{
                add_next_available(new_node, current_node->right);
            }
        }
    }

    void add_node(int data){
        Node* new_node = new Node(data);

        if(this->head == nullptr){
            this->head = new_node;
        }
        else{
            add_next_available(new_node, this->head);
        }
    }

    void search_for_node(int data, Node* next_node = nullptr){
        if(next_node== nullptr){
            next_node = this->head;
        }

        std::cout << "Current Node: " << next_node->data << " :: " << data << " :Value to Find" << std::endl;

        if(next_node->data == data){
            std::cout << "Node Found!" << std::endl;
        }
        else if(next_node->data > data){
            search_for_node(data,next_node->left);
        }
        else if(next_node->data < data){
            search_for_node(data, next_node->right);
        }
        else{
            std::cout << "Value Not in Tree!" << std::endl;
        }
    }
};

int main(){
    Tree* t = new Tree();

    t->add_node(12);
    t->add_node(17);
    t->add_node(4);
    t->add_node(0);
    t->add_node(-9);

    t->search_for_node(-9);
}