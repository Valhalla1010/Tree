//
// Created by davii on 10/13/2024.
//

#ifndef MASTERPROV_ATTER_H
#define MASTERPROV_ATTER_H
#include <algorithm>

#include <string>
#include <vector>
#include <iostream>




struct Node {
    char gender;
    std::vector<Node*> children; //dynamisk array
    Node (char g): gender(g){
    }
};

void addchild(Node* parent, Node* child){
    parent->children.push_back(child);
}

bool sameShape(Node* root1, Node* root2){
    //båda root är null, träd är lika
    if (root1 == nullptr && root2 == nullptr){
        return true;
    }
    //en av de root is null, träd inte lika
    if (root1 == nullptr || root2 == nullptr) {
        return false;
    }

    //om kön är inte matcha, träds är inte lika
    if(root1->gender==root2->gender){
        return true;
    }
    /*
    //Rekursivt jämförelse av varje barns subträd
    for (int i = 0; i < root1->children.size(); i++){
        if (!sameShape(root1->children[i], root2->children[i])){
            return false;
        }
    }*/
    return false;
}


bool familyEqual(std::vector<Node*>& family){
    for(int i=0; i < family.size()-1;i++){
        Node *tree1 = family[i];
        Node* tree2 = family[i + 1];
        /*
        if(family[i]->children.size()!=family[i+1]->children.size()){
            std::cout<<family[i]->children.size()<<" "<<family[i+1]->children.size()<<std::endl;
            return false;
        }*/

        if(tree1->gender != tree2->gender){
            return false;
        }
        if(tree1->children.size() != tree2->children.size()){
            return false;
        }
        for(int j = 0; j < tree1->children.size(); j++){
            if(!sameShape(tree1->children[j], tree2->children[j])){
                return false;
            }
        }

    }
    return true;
}



#endif //MASTERPROV_ATTER_H
