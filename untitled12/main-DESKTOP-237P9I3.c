 int someEven(struct node  *head) {

     if(head == NULL){return 0;}
         if (head->data % 2 == 0) {
             return 1;
         }
         ;


     return someEven(head->next);
 }