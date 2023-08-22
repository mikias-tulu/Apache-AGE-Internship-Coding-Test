#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    ABS,
    FIB,
    LIT
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
    struct Node *left;
    struct Node *right;
} Node;

#define MAXN 100
int fib[MAXN];

Node* createNode(TypeTag type) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->type = type;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* createValueNode(int value) {
    Node *newNode = createNode(LIT);
    newNode->value = value;
    return newNode;
}

int fibonacci(int n) {
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int evaluate(Node* node) {
    if (node->type == ADD) {
        return evaluate(node->left) + evaluate(node->right);
    }
    else if (node->type == SUB) {
        return evaluate(node->left) - evaluate(node->right);
    }
    else if (node->type == MUL) {
        return evaluate(node->left) * evaluate(node->right);
    }
    else if (node->type == DIV) {
        return evaluate(node->left) / evaluate(node->right);
    }
    else if (node->type == ABS) {
        return abs(evaluate(node->left));
    }
    else if (node->type == FIB) {
        return fibonacci(evaluate(node->left));
    }
    else if (node->type == LIT) {
        return node->value;
    }
    printf("Invalid node type %d\n", node->type);
    exit(1);
}

int main() {
    for (int i = 0; i < MAXN; i++) {
        fib[i] = -1;
    }
    Node *add = createNode(ADD);
    add->left = createValueNode(10);
    add->right = createValueNode(6);
    Node *mul = createNode(MUL);
    mul->left = createValueNode(5);
    mul->right = createValueNode(4);
    Node *sub = createNode(SUB);
    sub->left = createValueNode(evaluate(add));
    sub->right = createValueNode(evaluate(mul));
    Node *fibo = createNode(FIB);
    fibo->left = createValueNode(abs(evaluate(sub)));
    fibo->value = fibonacci(evaluate(fibo->left));

    printf("add: %d\n", evaluate(add));
    printf("mul: %d\n", evaluate(mul));
    printf("sub: %d\n", evaluate(sub));
    printf("fibo: %d\n", evaluate(fibo));

    return 0;
}
