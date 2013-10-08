//
//  single_list.h
//  CTrain
//
//  Created by Nick Martin on 10/7/13.
//  Copyright (c) 2013 Nick Martin. All rights reserved.
//

#ifndef CTrain_single_list_h
#define CTrain_single_list_h


#ifndef __cplusplus
typedef char bool;
#define true 1
#define false 0
#endif

struct list_element{
    struct list_element *next;
};

typedef struct list_element list_element;

typedef struct{
    list_element *first;
    list_element *last;
}list;


void list_init(list *container);

bool list_empty(list *container);

list_element *list_begin(list *container);

list_element *list_next(list_element *element);

void list_push_back(list *container, list_element *element);

list_element *list_pop_front(list *container);


#endif
