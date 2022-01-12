#pragma once
#include <iostream>
#include "Node.h"

class AVLTree_Class
{
public:
    AVLTree_Class();
    ~AVLTree_Class();

    Node *root;

    // ������ ������������
    void BalanceR(Node *&node, bool &flag);

    void BalanceL(Node *&node, bool &flag);

    // ����� ������� �� �����
    void insertVirt(Node *&node, Time key);

    // ������ �������� ���� �� �����
    void del(Node *&r, bool &flag, Node *&q);

    void deleteVirt(Node *&node, Time key, bool &flag);

    // ����� ������ ������
    void printTree(Node *root);

    // ����� ����-�����-������
    void printLeftRightRoot(Node *&node);

    // ����� ������-����-�����
    void printRootLeftRight(Node *&node);

    // ����� ������������ ������
    void FreeTree(Node *node);
};