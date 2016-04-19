//https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor
/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    node* temp = root;
    while(temp) {
        if((temp->data >v1) && (temp->data >v2))
            temp=temp->left;
        else if((temp->data <v1) && (temp->data <v2))
            temp= temp->right;
        else
            return temp;
    }
    return root;
}


