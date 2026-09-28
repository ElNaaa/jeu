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
  list_ptr nn;

  nn = malloc(sizeof(*nn));
  if (!nn) {
    fprintf(stderr, "Memory Error\n");
    exit(EXIT_FAILURE);
  }
  nn->data = sprite;
  nn->next = list;
  return nn;
}

/* Return true if the list is empty
 * */
bool list_is_empty(list_ptr l)
{
  if(!l) {
    return true;
  }
  return NULL;
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
  list_ptr next;
  while (l != NULL) {
    next = l->next;
    free(l);
    l = next;
  }
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
  list_ptr previous = NULL;
  list_ptr current;
  list_ptr next;

  current = *l;
  while (current != NULL) {
    list_ptr next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  *l = previous;
}

/* Copy a list to another one. 
 *  Return the new list
 * */
list_ptr list_clone(list_ptr list)
{
  list_ptr nl = NULL;
  list_ptr node = NULL;
  list_ptr nn;
  while (list != NULL) {
    nn = malloc(sizeof(*nn));
    if (nn == NULL) {
      fprintf(stderr, "Memory Error\n");
      exit(EXIT_FAILURE);
    }
    nn->data = list->data;
    nn->next = NULL;
    if (nl == NULL) {
      nl = nn;
    }
    else {
      node->next = nn;
    }
    node = nn;
    list = list->next;
  }
  return nl;
}
