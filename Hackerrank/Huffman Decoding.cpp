//https://www.hackerrank.com/challenges/tree-huffman-decoding
/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    string decode;
    int ptr = 0;
    for(ptr = 0; ptr<=(s.length()-1); ) {
        node* temp = root;
        
        while(temp) {
            if(s[ptr]=='0') {
                if(temp->left) {
                    temp = temp->left;
                    ptr++;
                }
                else {
                    decode.append({temp->data});
                    break;
                }
            }
            else {
                if(temp->right) {
                    temp = temp->right;
                    ptr++;
                }
                else {
                    decode.append({temp->data});
                    break;
                }
            }
        }
    }
    
    cout<<decode;
}

