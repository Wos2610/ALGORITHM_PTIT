#include<bits/stdc++.h>
#define M 1000006
#define MOD 123456789

using namespace std;

struct node
{
    int info;
    struct node *next;
}*start;
class single_llist
{
public:
    node* create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_last();
    void delete_pos();
    void sort();
    void search();
    void display();
    single_llist() //Constructor của lớp llist.
    {
        start = NULL;
    }
};

node *single_llist::create_node(int value)
{
    struct node *temp;
    temp = new(struct node);
    if (temp == NULL)
    {
        cout<<“Không đủ bộ nhớ để cấp phát"<<endl;
            return NULL;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}

void single_llist::insert_begin()
{
    int value;
    cout<<"Nhập giá trị node:";
    cin>>value;
    struct node *temp, *p;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
    cout<<"Hoàn thành thêm node vào đầu DSLKĐ"<<endl;
}

void single_llist::insert_last()
{
    int value;
    cout<<"Nhập giá trị cho node: ";
    cin>>value;
    struct node *temp, *s;
    temp = create_node(value);
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    cout<<"Hoàn thành thêm node vào cuối"<<endl;
}

void single_llist::insert_pos()
{
    int value, pos, counter = 0;
    cout<<"Nhap gia tri node:";
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout<<"Nhập vị trí node cần thêm: ";
    cin>>pos;
    int i;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)
    {
        if (start == NULL)
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if (pos > 1 && pos <= counter)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else
    {
        cout<<"Vượt quá giới hạn DSLKĐ"<<endl;
    }
}



int main(){

}










