#include <iostream>
#include "tree.hpp"
#include <cstdlib>

using namespace std;

int main()
{
    Tree* root = new Tree(1);

    Tree* t1 = new Tree(2, root);

    Tree* t2 = new Tree(3, root);
    Tree* t3 = new Tree(4, root);
    Tree* t4 = new Tree(2, root);

    Tree* t21 = new Tree(5, t2);
    Tree* t22 = new Tree(6, t2);

    delete root;

    return EXIT_SUCCESS;
}
