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
    single_llist(){
        start = NULL;
    }
};

node *single_llist::create_node(int value)
{
    struct node *temp;
    temp = new(struct node);
    if (temp == NULL)
    {
        cout<<"Khong du bo nho de cap phat"<<endl;
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
    cout<<"Nhap gia tri node:";
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
    cout<<"Hoan thanh them node vao dau DSLKD"<<endl;
}

void single_llist::insert_last()
{
    int value;
    cout<<"Nhap gia tri cho node: ";
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
    cout<<"Hoan thanh them node vao cuoi"<<endl;
}

void single_llist::insert_pos()
{
    int value, pos, counter = 0;
    cout<<"Nhap gia tri node:";
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout<<"Nhap vi tri node can them: ";
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
        cout<<"Vuot qua gioi han DSLKD"<<endl;
    }
}

void single_llist::search()
{
    int value, pos = 0;
    bool flag = false;
    if (start == NULL)
    {
        cout<<"Danh sach rong"<<endl;
        return;
    }
    cout<<"Noi dung node can tim:";
    cin>>value;
    struct node *s;
    s = start;
    while (s != NULL)
    {
        pos++;
        if (s->info == value)
        {
            flag = true;
            cout<<"Tim thay "<<value<<" tai vi tri "<<pos<<endl;
        } s
            = s->next;
    }
    if (!flag)
    {
        cout<<"Gia tri"<<value<<"khong ton tai"<<endl;
    }
}

void single_llist::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"Khong co thong tin de hien thi"<<endl;
        return;
    }
    temp = start;
    cout<<"Noi dung DSLKD: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void single_llist::delete_pos()
{
    int pos, i, counter = 0;
    if (start == NULL)
    {
        cout<<"Khong thuc hien duoc"<<endl;
        return;
    }
    cout<<"Vi tri can loai bo:";
    cin>>pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
        s->next=NULL;
        free(s);
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1; i < pos; i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Vi tri ngoai danh sach"<<endl;
        }
        free(s);
        cout<<"Node da bi loai bo"<<endl;
    }
}


int main(){
    single_llist s;

}










