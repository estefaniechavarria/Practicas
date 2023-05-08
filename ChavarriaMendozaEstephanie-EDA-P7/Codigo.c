#include <stdio.h>
#include <stdlib.h>

struct Nodo {
   int dato;
   struct Nodo* next;
};

void insertNodo(struct Nodo** head, int valor) {
   struct Nodo* newNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
   newNodo->dato = valor;
   if (*head == NULL) {
      *head = newNodo;
      (*head)->next = *head;
      return;
   }
   struct Nodo* last = *head;
   while (last->next != *head) {
      last = last->next;
   }
   last->next = newNodo;
   newNodo->next = *head;
}

int Valido(struct Nodo* head, int check) {
   struct Nodo* temp = head;
   if (head == NULL) {
      return 0;
   }
   do {
      if (temp->dato == check) {
         return 1;
      }
      temp = temp->next;
   } while (temp != head);
   return 0;
}

int main() {
   struct Nodo* head = NULL;
   insertNodo(&head, 1);
   insertNodo(&head, 2);
   insertNodo(&head, 3);
   insertNodo(&head, 4);
   insertNodo(&head, 5);
   insertNodo(&head, 6);
   insertNodo(&head, 7);
   insertNodo(&head, 8);
   insertNodo(&head, 9);
   insertNodo(&head, 10);
   insertNodo(&head, 11);
   insertNodo(&head, 12);
   insertNodo(&head, 13);
   insertNodo(&head, 14);
   insertNodo(&head, 15);
   insertNodo(&head, 16);
   insertNodo(&head, 17);
   insertNodo(&head, 18);
   insertNodo(&head, 19);
   insertNodo(&head, 20);
   
   int numero;
 
    
    printf("Bienvenido.\nIngrese el valor: ");
    scanf("%d", &numero);
   
   int check = numero;
   if (Valido(head, check)) {
      printf("\n%d Se encuentra en la estructura.\n", check);
         } 
         else {
      printf("\n%d No se encuentra en la estructura.\n", check);
   }
   return 0;
}

