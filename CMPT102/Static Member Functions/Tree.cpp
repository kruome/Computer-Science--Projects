#include <iostream>
#include <string>
using namespace std;

class Tree{
    private:
        static int treeCount;
    public:
        Tree();
        static int getTreeCount();
};

int Tree::treeCount = 0;

int main(){
    
    Tree Oak, Elm, Pine;
    
    cout<<"There are "<<Tree::getTreeCount()<<" trees.";
    
    return 0;
}

Tree::Tree(){
    treeCount++;
}
int Tree::getTreeCount(){
    return treeCount;
}
