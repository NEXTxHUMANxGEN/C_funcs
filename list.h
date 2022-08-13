//
//  list.h
//  
//
//  Created by Comedian Tiberius on 7/7/22.
//

#ifndef list_h
#define list_h

#include <stdio.h>

struct node* init (struct door* door);
struct node* remove_door(struct node* elem , struct node* root);
struct node* find_door(int door_id, struct node* root);
struct node* add_door(struct node* elem, struct door* door);
void destroy (struct node* root);

#endif /* list_h */
