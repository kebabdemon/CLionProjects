#include <stdlib.h>
#include <stdio.h>
#include <math.h>
struct node{
    int value;
    struct node* next;


};
typedef struct node node_t;

node_t *create_new_node(int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;

}
node_t *insert(node_t *head, node_t *node_to_insert){
    node_to_insert->next = head;
    return node_to_insert;

}
void mathpow(node_t *head){

    node_t *temp = head;
        //umocní se na druhou
    temp->value = pow(temp->value,2);
    //vypíšu hodnotu
        printf("%d\n", temp->value);
        //posunu na další hodnotu v linked listu
        temp= temp ->next;

    if(temp == NULL){ printf("NULL");}
        //zavolám funkci znovu
        mathpow(temp);



}
int main(){
    node_t *head = NULL;
    node_t *tmp;
    for(int i = 1; i <5;i++){
        tmp = create_new_node(i);
        head = insert(head,tmp);


    }

    mathpow(head);






    return 0;

}