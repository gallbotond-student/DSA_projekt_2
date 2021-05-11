//
// Created by Botond on 2021. 05. 10..
//

#ifndef PROJEKT2_FUNCTIONS_H
#define PROJEKT2_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct root{
    float atlag;
    char* nev;
    struct root *left;
    struct root *right;
}root;

root *create(float a, char* nev);
void insert(root **,float a, char* nev);
void inorder(root *);
void preorder(root *);
void postorder(root *);
root *findnev(root *fa, float atlag);
void destroy(root **fa);
//void delete(root **fa);
//void findanddelete( root ** fa, float val );


#endif //PROJEKT2_FUNCTIONS_H
