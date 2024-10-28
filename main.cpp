#include <iostream>
#include "atter.h"




int main() {
    Node* F_1 = new Node('M');
    Node* firstchildren = new Node('M');
    Node* secondchildren = new Node('I');
    Node* threechildren = new Node('M');
    addchild(F_1, firstchildren);
    addchild(F_1, secondchildren);
    addchild(F_1, threechildren);


    Node* F_2 = new Node('M');
    Node* child_3 = new Node('M');
    Node* child_4 = new Node('I');
    Node* child_5 = new Node('M');

    addchild(F_2, child_3);
    addchild(F_2, child_4);
    addchild(F_2, child_5);

    Node* F_3 = new Node('M');
    Node* child_6 = new Node('M');
    Node* child_7 = new Node('I');
    Node* child_8 = new Node('M');
    addchild(F_3, child_6);
    addchild(F_3, child_7);
    addchild(F_3, child_8);

    std::vector<Node*> families = {F_1, F_2, F_3 };
    if(familyEqual(families)) {
        std::cout << "all families are structurally equal\n" << std::endl;
    }
    else{
        std::cout << "not equal.\n";

    }
    return 0;
}
