#include <iostream>
#include "AVLTree_Class.h"
using namespace std; 


int main()
{
    setlocale(LC_ALL, "rus");

    AVLTree_Class Tree;
    bool f = false;

    Time k;

    k.hours = 41;
    k.minutes = 0;
    Tree.insertVirt(Tree.root, k);

    k.hours = 56;
    Tree.insertVirt(Tree.root, k);

    k.hours = 61;
    Tree.insertVirt(Tree.root, k);

    cout << "����� ������:" << endl;
    Tree.printTree(Tree.root);

    k.hours = 51;
    Tree.insertVirt(Tree.root, k);

    k.hours = 21;
    Tree.insertVirt(Tree.root, k);

    k.hours = 36;
    Tree.insertVirt(Tree.root, k);

    cout << "\n����� ������:" << endl;
    Tree.printTree(Tree.root);

    k.hours = 11;
    Tree.insertVirt(Tree.root, k);

    k.hours = 46;
    Tree.insertVirt(Tree.root, k);

    k.hours = 26;
    Tree.insertVirt(Tree.root, k);

    k.hours = 31;
    Tree.insertVirt(Tree.root, k);

    k.hours = 16;
    Tree.insertVirt(Tree.root, k);

    cout << "\n����� ������:" << endl;
    Tree.printTree(Tree.root);

    k.hours = 16;
    Tree.deleteVirt(Tree.root, k, f);

    cout << "\n����� ������ ����� �������� 16:" << endl;
    Tree.printTree(Tree.root);

    k.hours = 11;
    Tree.deleteVirt(Tree.root, k, f);

    cout << "\n����� ������ ����� �������� 11:" << endl;
    Tree.printTree(Tree.root);

    cout << "\n����� ���:" << endl;
    Tree.printLeftRightRoot(Tree.root);

    cout << "\n����� ���:" << endl;
    Tree.printRootLeftRight(Tree.root);
    cout << endl;

    Tree.FreeTree(Tree.root);

    return 0;
}