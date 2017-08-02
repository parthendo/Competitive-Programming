#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <set>
#include <vector>
 
using namespace std;
bool flag;
 
typedef struct tree{
    
    struct tree *next[26];
    bool isLeaf;
}tree;
 
tree *newnode(void){
    tree *temp = NULL;
    temp = (tree*)malloc(sizeof(tree));
    if(temp != NULL){
        
        temp->isLeaf = false;
        for(int i=0;i<26;i++)
            temp->next[i] = NULL;
    }
    return temp;
}
 
void insert(tree *root,string str){
    
    int l = str.length();
    for(int i=0;i<l;i++){
        int index = str[i]-'a';
        if(root->next[index]==NULL)
        {   
            root->next[index] = newnode();
        }
        root = root->next[index];
    }
    root->isLeaf = true;
}
 
bool search(tree *root, string str){
    
        tree *temp = root;
        int l = str.length();
        for(int i=0;i<l;i++)
        {
            int index = str[i] - 'a';
            temp=temp->next[index];
            if(temp == NULL)
                return false;
        }
    return true;  
}
 
string getword(tree *root,string str){
    
    int i=0;
    int l=str.length();
    tree *temp=root;
    for(i=0;i<l;i++)
    {
        int index =str[i]-'a';
        if(temp->next[index] == NULL)
            break;
        temp=temp->next[index];
    }
    return (str.substr(0,i+1));
}
int main(){
    
    tree *root = newnode();
    int n;
    int flag = 0;
    vector <string> str;
    vector <string> :: iterator it;
    set <string> ans;
    set <string> ::iterator it1;
    char c,sp;
    string s;
    cin>>n;
    while(n--)
    { 
        cin>>c>>s;
        if(c == '+')
            insert(root,s);
        else
            str.push_back(s);
    }
 
    for(it=str.begin();it!=str.end();++it)
    {
        if(search(root,*it) == true)
            flag = -1;
        else
        {
            ans.insert(getword(root,*it));
        }
    }
    if(flag < 0)
        cout<<-1;
    else
    {
        cout<<ans.size()<<endl;
        for(it1 = ans.begin();it1!=ans.end();++it1)
        {
            cout<<*(it1)<<endl;
        }
    }
    return 0;
} 