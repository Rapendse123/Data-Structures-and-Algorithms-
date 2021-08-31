//// { Driver Code Starts
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node {
//    int data;
//    struct Node* next;
//
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};
//
//void append(struct Node** headRef, struct Node** tailRef, int newData) {
//    struct Node* new_node = new Node(newData);
//
//    if (*headRef == NULL) {
//        *headRef = new_node;
//    }
//
//    else {
//        (*tailRef)->next = new_node;
//    }
//    *tailRef = new_node;
//}
//
//void printList(struct Node* head) {
//    while (head) {
//        cout << head->data << ' ';
//        head = head->next;
//    }
//}
//
//int countPairs(struct Node* head1, struct Node* head2, int x);
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        struct Node* head1 = NULL;
//        struct Node* tail1 = NULL;
//        struct Node* tail2 = NULL;
//        struct Node* head2 = NULL;
//        int n1, n2, tmp, x;
//        cin >> n1;
//        while (n1--) {
//            cin >> tmp;
//            append(&head1, &tail1, tmp);
//        }
//        cin >> n2;
//        while (n2--) {
//            cin >> tmp;
//            append(&head2, &tail2, tmp);
//        }
//        cin >> x;
//        cout << countPairs(head1, head2, x) << '\n';
//    }
//    return 0;
//}// } Driver Code Ends
//
//
///*
//Structure of the node of the linked list is as
//struct Node
//{
//    int data;
//    struct Node* next;
//
//    Node(int x){
//        data = x;
//        next = NULL;
//    }
//};
//*/
//// your task is to complete this function
//int countPairs(struct Node* head1, struct Node* head2, int x) {
//    // Code here
//    Node *ptr1;
//    Node *ptr2;
//    int count=0;
//
//    for(ptr1=head1;ptr1!=NULL;ptr1=ptr1->next){
//        for(ptr2=head2;ptr2!=NULL;ptr2=ptr2->next){
//            if(ptr1->data+ptr2->data==x){
//                count++;
//            }
//        }
//    }
//    return count;
//}