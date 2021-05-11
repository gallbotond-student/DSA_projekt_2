//
// Created by Botond on 2021. 05. 10..
//

#include "functions.h"
#include <string.h>

root *create(float a, char* nev){
    root *branch;
    branch = (root*)(malloc(sizeof(root)));
    if(!branch)
    {
        printf("Error");
        return 0;
    }
    branch->nev = (char *)malloc(sizeof(char) * strlen(nev));
    branch->atlag = a;
    for (int i = 0; i < strlen(nev); ++i) {
        branch->nev[i] = nev[i];
    }
    branch->right = NULL;
    branch->left = NULL;

    return branch;
}

void insert(root **tree, float a, char* nev)
{
    if((*tree)==NULL)
    {
        (*tree)=create(a, nev);
    }
    else
    {
        if((*tree)->atlag>a)
            insert(&((*tree)->left), a, nev);
        else insert(&((*tree)->right), a, nev);
    }
}

void inorder(root *tree){
    if(tree->left){
        inorder(tree->left);}
    printf("%f  %s\n", tree->atlag, tree->nev);
    if(tree->right){
        inorder(tree->right);}
}

void preorder(root *tree){
    printf("%f  %s", tree->atlag, tree->nev);
    if(tree->left){
        preorder(tree->left);
        if(tree->right){
            preorder(tree->right);
        }
    }
}

void postorder(root
               *tree) {
    if (tree->left) {
        postorder(tree->left);
    }
    if (tree->right) {
        postorder(tree->right);
    }
    printf("%f  %s", tree->atlag, tree->nev);

}

root *findnev(root *fa, float atlag)
{
    if(fa == NULL)
    {
        return NULL;
    }
    if(atlag == fa->atlag)
        return fa;
    else
    {
        if(atlag < fa->atlag)
            findnev(fa->left, atlag);
        else
            findnev(fa->right, atlag);
    }
}

void destroy(root **fa)
{
    if((*fa) != NULL)
    {
        destroy(&((*fa)->left));
        destroy(&((*fa)->right));
        free((*fa));
        (*fa) = NULL;
    }
}
//
//void delete(root **fa)
//{
//    if(*fa == NULL){
//        return;
//    }
//    if((*fa)->left != NULL){
//
//    }
//}
//
//void findanddelete( root ** fa, float val ){
//    //delete(find(*fa, val));
//}

