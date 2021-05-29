void populateNext(struct node* p)
{
    static node* next=NULL;
    if(p!=NULL)
    {
        populateNext(p->right);
        p->next=next;
        next=p;
        populateNext(p->left);
    }