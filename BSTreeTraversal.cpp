#include <iostream>

using namespace std;
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int d=0, Node *lr = 0, Node *rr = 0):data(d),left(lr),right(rr)
    {
    }
  };

Node *create()
{
    Node *root;
    Node *p4 = new Node(4);
    Node *p8 = new Node(8);
    Node *p6 = new Node(6, p4, p8);
    
    Node *p12 = new Node(12);
    Node *p16 = new Node(16);
    Node *p14 = new Node(14, p12, p16);

    Node *p10 = new Node(10, p6, p14);

    root = p10;

    return root;
}

void traveral(Node *p)
{
    if(p->left)
        traveral(p->left);

    cout << p->data << endl;

    if(p->right)
        traveral(p->right);
}

int main()
{
    Node *p;
    p = create();

    traveral(p);

    return 1;
}
