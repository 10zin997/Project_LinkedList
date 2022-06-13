#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

ifstream file("input.txt");
string line;

struct Node{
    char type;
    int quantity;
    double price;
    Node *next;
};

struct Node *head = NULL, *tail = NULL;

void push_back(char type, int quanity, double price = 0){
    Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->type = type;
    newNode->quantity = quanity;
    newNode->price = price;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

struct Node* print(struct Node *head,int q){
    struct Node  *ptr;
    ptr = head;
    double total = 0;
    while(ptr != NULL && q > 0){
        head = ptr;
        if(q >= head -> quantity){
            cout<< head->quantity<< " at " << head->price << " each \t" << endl;
            cout<< "Sales: $" << head->quantity * head->price << endl;
            total += head->quantity * head->price;
            q -= head->quantity;
            ptr = ptr->next;
        }else{
            cout<<q<< " at " << head->price << " each \t" << endl;
            cout<< "Sales: $" << q * head->price << endl;
            total += q * head->price;
            head -> quantity -= q;
            break;
        }
        if(ptr == NULL && q > 0){
            cout<< "remainder of " << q << " widgets not avaialble" << endl;
        }
    }
     cout<< "\t Total Sales: $" << total << endl;
        return head;
};;

int main(){
    char type;
    double price;
    int quantity;

    if (!file){
        cout << "File not found" << endl;
        return 0;
    }
    //check
    while(getline(file, line)){
        istringstream iss(line);
        iss >> type >> quantity >> price;

    if (type == 'R'){
        push_back (type, quantity, price);
        cout<< "R " << quantity << " widgets recieved at: $" << price << endl;
    }else if (type == 'P'){
        push_back (type, quantity, price);
        cout<< "P Next two customers discount= " << quantity<< "%" << endl;
    }else if (type == 'S'){
        cout<< "S " << quantity << " widgets sold " << endl;
        print(head, quantity);
        cout<<endl;
    }
}
file.close();
return 0;
}