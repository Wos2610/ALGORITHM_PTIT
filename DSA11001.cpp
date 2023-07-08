#include<bits/stdc++.h>
#define M 1000006
using namespace std;
struct node { //dinh nghia mot node
    int key; //thanh phan du lieu
    struct node *left;//con tro trai
	struct node *right; //con tro phai
};
// tao node roi rac co gia tri item
node *newNode(char item) {
    node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
// Duyet theo thu tu giua
void inorder( node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
// Duyet theo thu tu giua
void preorder( node *root) {
    if (root != NULL) {
    	cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
// Duyet theo thu tu su
void postorder( node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}

//them node vao cay tim kiem
node* insert( node* node, int key) {
    //neu cay rong: node key chinh la goc
    if (node == NULL) return newNode(key);
    //ney key nho hon goc
    if (key < node->key)
        //them node sang cay ben trai
		node->left  = insert(node->left, key);
    else if (key > node->key) //neu key lon hon goc
    	//them node sang cay ben phai
        node->right = insert(node->right, key);
    /* return the (unchanged) node pointer */
    return node;
}
// Test solution

string s;
char s0[] = {'+', '-', '*', '/'};

void process(){
    cin >> s;
    int n = s.size();

    node *root = NULL;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            if(s[i] == s0[j]){
                root = insert(root, s[i]);
            }
        }
    }
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        process();
    }
}
