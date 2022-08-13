//
//  list.c
//  
//
//  Created by Comedian Tiberius on 7/7/22.
//

#include "list.h"
#include <stdlib.h>

struct node* init (struct door* door){
    struct node root* = (struct node*)malloc(sizeof(struct node* root));
    root -> door = door*;
    next -> next = NULL;
    int result = root;
    return result;
}


struct node* add_door(struct node* elem, struct door* door){
    struct node* p = elem;
    struct node* tmp = (struct node*)malloc(sizeof(struct node* root));
    tmp -> doors = *door;
    tmp -> next = p -> next;
    p -> next = tmp;
    return tmp;
    
    
    
}

struct node* find_door(int door_id, struct node* root){
    int result;
    int i;
    while(node.id != NULL){
        for (i = 0; node[i].id!=0; i++){
            if node[i].id == door_id;
            result = i;
            break;
        }   
    }
    printf("%d", node[result].id)



}

