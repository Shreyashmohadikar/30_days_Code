#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            if (!head){
                return head;
            }
            Node *num = head;
            while(num->next){
                if(num->data == num->next->data){
                    num->next = num->next->next;
                }
                else{
                    num = num->next;
                }
            }
            return head;
          }

          Node* insert(Node *head,int data)