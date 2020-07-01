#ifndef TREE_HPP_INCLUDED
#define TREE_HPP_INCLUDED

#include <cstddef>
#include<vector>

class Tree{
public:
    Tree(int data, Tree* parent = nullptr);
    ~Tree();
    int data() const;
    Tree* parent() const;
    bool has_children() const;
    void push_back(Tree* child);
    Tree* child(std::size_t i) const;
private:
    int data_;
    Tree* parent_;
    std::vector<Tree*> children_;
};

#endif // TREE_HPP_INCLUDED
