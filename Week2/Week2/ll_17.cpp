Node* segregate(Node *head) {
        
        int occurence[3] = {0, 0, 0}; 
	Node *curr = head;

	
	while (curr != NULL)
	{
		occurence[curr->data] += 1;
		curr = curr->next;
	}

	int i = 0;
	curr = head;

	
	while (curr != NULL)
	{
		if (occurence[i] == 0)
			++i;
		else
		{
			curr->data = i;
			--occurence[i];
			curr= curr->next;
		}
	}
       return head;
        
    }