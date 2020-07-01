#include "tree.hpp"

#include <cassert>

Tree::Tree(int data, Tree* parent)
    : data_(data),
    parent_(nullptr)
{
    if(parent != nullptr){
        parent->push_back(this);
    }
}

Tree::~Tree(){
    for(auto child: children_){
        delete child;
    }
}

int Tree::data() const
{
    return data_;
}

Tree* Tree::parent() const{
    return parent_;
}

bool Tree::has_children() const
{
    return !children_.empty();
}

void Tree::push_back(Tree* child){
    child->parent = this;
    children_.push_back(child);
}

Tree* Tree::child(std::size_t i) const{
    assert(i < children_.size());

    return children_[i];
}
