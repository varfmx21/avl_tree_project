#ifndef AVL_H
#define AVL_H

#include <string>
using namespace std;

class User {
public:
    int id;
    string name;
    string email;
    string creationDate;

    User(int id, string name, string email, string creationDate);
};

class Node {
public:
    User* user;
    Node* left;
    Node* right;
    int height;

    Node(User* user);
};

class AVLTree {
private:
    Node* root;

    // Métodos auxiliares
    int height(Node* node);
    int getBalance(Node* node);
    Node* rightRotate(Node* y);
    Node* leftRotate(Node* x);
    Node* insert(Node* node, User* user);
    Node* remove(Node* node, int id);
    Node* minValueNode(Node* node);
    User* search(Node* node, int id);
    void inOrderTraversal(Node* root);

public:
    AVLTree();

    // Métodos públicos
    void insert(User* user);
    User* search(int id);
    void remove(int id);
    void inOrderTraversal();
};

#endif // USERAVL_H