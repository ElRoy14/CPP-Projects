#include <string>
#include <iostream>
#include "Node.h"

Node::Node(std::string data)
{
    Node::_data = data;
    Node::_next = nullptr;
};

Node::~Node()
{
    std::cout << "Borrando cancion." << std::endl;
};

std::string Node::GetData()
{
    return Node::_data;
};

void Node::setData(std::string data)
{
    Node::_data = data;
}

void Node::SetNext(Node* node)
{
    Node::_next = node;
}

Node* Node::GetNext()
{
    return Node::_next;
};