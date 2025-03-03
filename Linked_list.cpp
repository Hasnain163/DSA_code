#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
// typedef struct Node node;
Node *start = nullptr, *temp1= new Node();

void createNode()
{
    Node *temp;
    int iteam;
    cout << "Enter Data : ";
    cin >> iteam;
    if (start == nullptr)
    {
        temp = new Node();
        temp->data = iteam;
        start = temp;
        temp1 = start;
    }
    else
    {
        Node *node = new Node();
        node->data = iteam;
        node->next = NULL;
        temp1->next = node;
        temp1 = node;
    }
}
void display() {
    if (start == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = start;
    cout << "Current List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int a=-1;
    while (a!=0)
    {
        cout << "1 for add data \n0 for exit\nEnter choice:";
        cin >> a;
        if(a!=0)
        createNode();
        else
         display();
    }

}