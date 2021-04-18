void deleteList(Node** head)
{
    Node* curr = *head;
    Node* next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
  
}