#include <iostream>
#include "BinaryTree.h"

int main()
{
    BinaryTree<int> tree;

    tree.AddNodeLoop(10);
    tree.AddNodeLoop(5);
    tree.AddNodeLoop(15);
    tree.AddNodeLoop(2);
    tree.AddNodeLoop(12);

    tree.Print();

    tree.AddNodeReq(7);
    tree.AddNodeReq(19);
    tree.AddNodeReq(11);
    tree.AddNodeReq(8);
    tree.AddNodeReq(1);
    
    std::cout << "\n";
    tree.Print();
    std::cout << "\n";

    auto find = tree.Find(5);
    if (find)
        std::cout << find->value << "\n";
    else
        std::cout << "not found\n";
    //tree.DeleteNode(tree.Root());
    
    tree.DeleteBranch(find);

    std::cout << "\n";
    tree.Print();
    std::cout << "\n";

}
