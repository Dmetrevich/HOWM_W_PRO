// #include <stdio.h>
// #include<stdint.h>
// #include <stdlib.h>

// typedef struct list {
// uint64_t address;
// size_t size;
// char comment[64];
// struct list *next;
// } list;

// uint64_t findMaxBlock(list *head);

// int main()
// {
//     list* head = NULL;

//     printf("%llu", findMaxBlock(head));
//     return 0;
// }

uint64_t  findMaxBlock(list *head)
{
    size_t mx_size = 0; 
    uint64_t address = 0; 
    while (head)
    {
        if (head->size > mx_size)
        {
            mx_size = head->size; 
            address = head->address; 
        }
        head = head->next; 
    }
    
    return address;
}