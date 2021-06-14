//Uarlley do Nascimento Amorim
//Ualaci dos Anjos Junior

#ifndef ARN_H
#define ARN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define black false
#define red true

typedef struct {
    int id;
    int ano;
    char autor[200];
    char titulo[200];
    char revista[200];
    char DOI[20];
    char palavraChave[200];
}artigo;

typedef struct {
    artigo* key;
}Info;

typedef struct t_node {
    Info* info;
    bool color;
    struct t_node* right;
    struct t_node* left;
    struct t_node* father;
}ARNNode;

extern ARNNode* externo;

//--------------------------------------------------------------------------------------------------------
void copy(ARNNode* a1, ARNNode* a2);
//--------------------------------------------------------------------------------------------------------
int getID(ARNNode* root);
//--------------------------------------------------------------------------------------------------------
bool getColor(ARNNode* root);
//--------------------------------------------------------------------------------------------------------
ARNNode* leftNode(ARNNode* root);
//--------------------------------------------------------------------------------------------------------
ARNNode* rightNode(ARNNode* root);
//--------------------------------------------------------------------------------------------------------
artigo* criaArtigo(int id, int ano, char* autor, char* titulo, char* revista, char* DOI, char* palavraChave);
//--------------------------------------------------------------------------------------------------------
Info* createInfo(artigo* key);
//--------------------------------------------------------------------------------------------------------
ARNNode* createNode(artigo* key);
//--------------------------------------------------------------------------------------------------------
void imprimeArtigo(ARNNode* node);
//--------------------------------------------------------------------------------------------------------
void changeColor(ARNNode* node);
//--------------------------------------------------------------------------------------------------------
ARNNode* searchNode(ARNNode* root, int id);
//--------------------------------------------------------------------------------------------------------
ARNNode* insereARN(ARNNode* root, ARNNode* newNode);
//--------------------------------------------------------------------------------------------------------
int insere(ARNNode** root, ARNNode* newNode);
//--------------------------------------------------------------------------------------------------------
void insereFixUp(ARNNode** root, ARNNode* newNode);
//--------------------------------------------------------------------------------------------------------
void rightrotate(ARNNode** root, ARNNode* temp);
//--------------------------------------------------------------------------------------------------------
void leftrotate(ARNNode** root, ARNNode* temp);
//--------------------------------------------------------------------------------------------------------
void imprimeARN(ARNNode* root);
//--------------------------------------------------------------------------------------------------------
void transferePai(ARNNode** root, ARNNode* u, ARNNode* v);
//--------------------------------------------------------------------------------------------------------
ARNNode* removeARN(ARNNode** root, int id);
//--------------------------------------------------------------------------------------------------------
void removeFixUp(ARNNode** root, ARNNode* x);
//--------------------------------------------------------------------------------------------------------
void destroyARN(ARNNode* root);
//--------------------------------------------------------------------------------------------------------
void freeNode(ARNNode* node);
//--------------------------------------------------------------------------------------------------------
ARNNode* successor(ARNNode* node);
//--------------------------------------------------------------------------------------------------------


#endif