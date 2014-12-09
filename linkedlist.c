//Реализация односвязного списка
//Миновская Настя
#include <stdio.h>
#include <stdlib.h> 

typedef struct Node{
  int value;
  struct Node *next;
}Node;
Node *head = NULL;
Node *tmp;

void add() 
{
  int data;
  Node *tmp = (Node*)malloc(sizeof(Node));
  scanf("%d", &data);
  tmp->value = data;
  tmp->next = head;
  head = tmp;
} 

void delete()
{
  int data;
  scanf("%d", &data);
  Node *prev;
  for (tmp = head; tmp&&(tmp->value != data); prev = tmp, tmp = tmp->next);
  if (!tmp) (printf("В списке нет такого числа\n"));
  else  
  {
    if (tmp == head)
    {
      head = tmp->next;
      free(tmp);
    }
    else
    {  
      prev->next = tmp->next;
      free(tmp);
    }
  }
}

void print() 
{
  for(tmp = head;tmp != NULL;tmp = tmp->next) 
  { 
    printf("%d ", tmp->value);
  }
  printf("\n");
}


int main(void)
{
  char n;
  scanf("%c", &n);
  while (n != 'q')
  {
    switch(n)
    {
      case 'a': 
      {  
        add();
        break;
      }
      case 'd': 
      { 
        delete();
        break;
      }
      case 'p': 
      {  
        print();
        break;
      }
      case 'q': break;

      default: printf("Неверная команда\n");
    }
  scanf("%s", &n);
  }
}
