//
//  int_node.hpp
//  T.P.L.B.4
//
//  Created by Артем Шарапов on 15/05/2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//
#pragma once
template<typename T>
class Node
{
    T Value;
    Node *Previous;
public:
    T getdata(){return Value;}
    Node* getnext(){return Previous;}
    void setdata(int a){Value=a;}
    void setnext(Node* a){Previous = a;}
};
