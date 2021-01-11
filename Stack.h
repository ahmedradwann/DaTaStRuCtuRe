//
//  Stack.h
//  project_Data
//
//  Created by ahmed radwan on 11/01/2021.
//

#ifndef Stack_h
#define Stack_h
#include "Classes & Assignments Decleration.h"
#include "linked list.h"

//fixed stack
template <class T>
bool stack_array<T>::IsEmpty() {

    if (top == -1)
        return 1;
    return 0;
}
template <class T>
bool stack_array<T> ::IsFull() {
    if (top == MAX - 1)
        return 1;
    return 0;
}
template <class T>
stack_array<T>::stack_array() {
    top = -1;
    counter = 0;
}
template <class T>
void stack_array<T> ::push(T val) {

    if (!IsFull()) {
        arr[++top] = val;
        counter++;
    }
    else
        return;

}
template <class T>
T stack_array<T>::pop() {

    if (!IsEmpty()) {
        counter--;
        return arr[top--];
    }
    exit(0);
}
template <class T>
T stack_array<T>::peak(){
    return arr[top];
}
template <class T>
void stack_array<T>::Display(){
    int temp=top;
    while (temp!=-1) {
        cout<<arr[temp]<<" ";
        temp--;
    }
    cout<<endl;
}
//dynamic stack
template <class T>
stack_Dynamic<T>::stack_Dynamic(int size){
    arr=new float[size];
    this->size=size;
    top=-1;
    counter=0;
}
template <class T>
void stack_Dynamic<T>::push(T element){
    if(IsFull()){
        cout<<"over flow\n";
        return;
    }
    arr[++top]=element;
    counter++;
}
template <class T>
T stack_Dynamic<T>::pop(){
    if(IsEmpty()){
        cout<<"under flow\n";
        assert(!IsEmpty());
    }
    counter--;
    return arr[top--];
}
template <class T>
bool stack_Dynamic<T>::IsEmpty(){
    return top==-1;
}
template <class T>
T stack_Dynamic<T>::peak(){
    return arr[top];
}
template <class T>
bool stack_Dynamic<T>::IsFull(){
    return top==size-1;
}
template <class T>
void stack_Dynamic<T>::display(){
    for(int i=top;i>=0;i--)
        cout<<arr[i]<<" ";
    cout<<endl;
}
template <class T>
stack_Dynamic<T>::~stack_Dynamic(){
    delete arr;
}
//stack with linked list <inheritance>

template <class T>
linked_list<T>::linked_list(){
    head=NULL;
    tail=NULL;
    count=0;
}
template <class T>
void stack_liked_list<T>::push(T val){
    this->insert_first(val);
}
template <class T>
T stack_liked_list<T>::pop(){
    T val;
    val =this->head->val;
    this->deletion_first();
    return val;
}
template <class T>
T stack_liked_list<T>::peak(){
    T val;
    val =this->head->val;
    return val;
}
template <class T>
bool stack_liked_list<T>::IsEmpty(){
    return this->number_of_element()==0;
}
template <class T>
void stack_liked_list<T>::dispaly_stack(){
    this->display();
}
#endif /* Stack_h */
