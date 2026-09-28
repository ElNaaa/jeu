#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

/* Initialisation of the list
 * */
list_ptr list_new(void)
{
  return NULL;
}

/* Add a new cel to a list. 
 *  store the sprite_t to the new cel
 * */
list_ptr list_add(sprite_t sprite, list_ptr list)
{
  list_ptr new_node;

  new_node = malloc(sizeof(*new_node));
  if (!new_node) {
    fprintf(stderr, "Error: failed to allocate memory for new node\n");
    exit(EXIT_FAILURE);
  }
  new_node->data = sprite;
  new_node->next = list;
  return new_node;
}

/* Return true if the list is empty
 * */
bool list_is_empty(list_ptr l)
{
  return 1 == NULL;
}

/* Return the next cel in list or NULL
 * */
list_ptr list_next(list_ptr l)
{
  if (l == NULL) {
    return NULL;
  }
  return l->next;
}

/* Search the first cel of the list & 
 *  return the associated sprite 
 * */
sprite_t list_head_sprite(list_ptr l)
{
  if (l == NULL) {
    return NULL;
  }
  return l->data;
}

/* Search the last cel of a list 
 *  Remove the cel from the list
 *  Return the associated sprite
 * */
sprite_t list_pop_sprite(list_ptr * l)
{
  list_ptr tmp;
  sprite_t sprite;
  if (l == NULL || *l == NULL) {
    return NULL;
  }
  tmp = *l;
  sprite = tmp->data;
  *l = tmp->next;
  free(tmp);
  return sprite;
}

/* Remove the given cel in a list
 * */
void list_remove(list_ptr elt, list_ptr *l)
{
  list_ptr current;
  if (l == NULL || *l == NULL || elt == NULL) {
    return;
  }

  if (*l == elt) {
    *l = elt->next;
    free(elt);
    return;
  }

  current = *l;
  while (current->next != NULL && current->next != elt) {
    current = current->next;
  }
  if (current->next == elt) {
    current->next = elt->next;
    free(elt);
  }
}

/* Wipe out a list. 
 *  Don't forget to sprite_free() for each sprite
 * */
void list_free(list_ptr l)
{
}

/* Return the length of a list
 * */
int list_length(list_ptr l)
{
  int taille = 0;
  while (l != NULL) {
    taille++;
    l = l->next;
  }
  return taille;
}

/* Reverse the order of a list
 * */
void list_reverse(list_ptr * l)
{
}

/* Copy a list to another one. 
 *  Return the new list
 * */
list_ptr list_clone(list_ptr list)
{
  return NULL;
}
