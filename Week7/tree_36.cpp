bool isSumProperty( node* node)
{
	int ldata = 0, rdata = 0;
	if(node == NULL ||
		(node->left == NULL &&
		node->right == NULL))
		return true;
	else
	{
		if(node->left != NULL)
		ldata= node->left->data;
		if(node->right != NULL)
		rdata = node->right->data;
		if((node->data == ldata + rdata)&&
			isSumProperty(node->left) &&
			isSumProperty(node->right))
		return true;
    }
		return false;
}