typedef struct node {
    int data;
    struct node *next;
} node;     //struct node can now  be called node

// typedef node* list;   //list is a pointer-type to node data type

void init(node **, int);   //taking address of node* here. node** points to the first node of the list
void append(node **, int );
void display(node *);      //node * points to the first node of the list
int count(node *);
int delete(node **, int);
int maxElement(node *);
int *search(node *p, int key, int *indices);