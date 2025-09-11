#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node*left;
	struct Node*right;
};
struct Node* createNode(int value)
{
	struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
	
}
// Inorder Traversal (Left ? Root ? Right ?)
void inorder(struct Node*root)
{
	if (root != NULL)
	{
		inorder(root -> left );
		printf("%d ",root -> data);
		inorder(root -> right);
	}
}

//preorder traversal ( root ? left ? right ? )
void preorder(struct Node*root)
{
	if (root != NULL)
	{
		printf("%d ",root -> data);
		preorder(root -> left);
		preorder(root -> right);
	}
}

// Postorder traversal ( left ? Right ? Root ? )
void postorder(struct Node*root)
{
	if ( root != NULL)
	{
		postorder(root -> left);
		postorder(root -> right);
		printf("%d ",root -> data);
	}
}

int main()
{
	struct Node* root = createNode(50);
	root -> left = createNode(25);
	root -> right = createNode(75);
	root -> left -> left = createNode(12);
	root -> left -> right = createNode(37);
	root -> right -> left = createNode(62);
	root -> right  -> right = createNode(87);
	root -> left -> left -> left = createNode(6);
	root -> left -> left -> right = createNode(18);
	root -> left -> right -> left = createNode(30);
	root -> left -> right -> right = createNode(43);
	root -> right -> left -> right = createNode(70);
	root -> right -> right -> right = createNode(6);
	
	printf("Inorder Traversal: ");
	inorder(root);
	printf("\n");
	printf("Preorder Traversal: ");
	preorder(root);
	printf("\n");
	printf("Postorder Traversal: ");
	postorder(root);
	printf("\n");
	
	return 0;
}
