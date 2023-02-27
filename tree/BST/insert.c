// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// void preOrder(struct  node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// void postOrder(struct  node* root){
//     if(root!=NULL){
//         postOrder(root->left);
//         postOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inOrder(struct  node* root){
//     if(root!=NULL){
//         inOrder(root->left);
//         printf("%d ", root->data);
//         inOrder(root->right);
//     }
// }





// void insert(struct node *root, int key){
//    struct node *prev = NULL;
//    while(root!=NULL){
//        prev = root;
//        if(key==root->data){
//            printf("Cannot insert %d, already in BST", key);
//            return;
//        }
//        else if(key<root->data){
//            root = root->left;
//        }
//        else{
//            root = root->right;
//        }
//    }
//    struct node* new = createNode(key);
//    if(key<prev->data){
//        prev->left = new;
//    }
//    else{
//        prev->right = new;
//    }

// }

// int main(){
     
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     insert(p, 16);
//     printf("%d", p->right->right->data);
//     return 0;
// }

//----------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left, *right;
};
struct node* newNode(int item)
{
struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}


void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        
        preOrder(root->right);
    }
}
struct node* insert(struct node* node, int data)
{

	if (node == NULL)
		return newNode(data);


	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
return node;
}
int main()
{
    int arr[10] = {4, 5, 6, 8, 3,7};
    int n = 6;
struct node* root = NULL;

for (int i = 0; i < n; i++) {
	  
        root =insert(root, arr[i]);
    }

	inorder(root);
	printf("\n");
	preOrder(root);

	return 0;
}




