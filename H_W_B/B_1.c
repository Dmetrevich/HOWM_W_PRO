// #include <stdio.h>
// #include<stdint.h>
// #include <stdlib.h>

// typedef struct list {
// uint64_t address;
// size_t size;
// char comment[64];
// struct list *next;
// } list;

// size_t totalMemoryUsage(list *head);

// int main()
// {
//     list* head = NULL;

//     printf("%llu", totalMemoryUsage(head));
//     return 0;
// }
size_t totalMemoryUsage(list *head)
{
     size_t total_size = 0; 
    void *address = 0; 
    while (head)
    {
        
            total_size += head->size; 
          
        
        head = head->next; 
    }
     return total_size;
}