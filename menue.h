//
//  menue.h
//  project_Data
//
//

#ifndef menue_h
#define menue_h
#include "Assignments.h"
#include "Queue.h"
#include "Tree.h"
#include "linked list.h"
#include <stdio.h>
#include <Windows.h>
#include<cstring>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);
HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
void Drow_Box(int);
int operation_Box();
int que_operation();
int menue_Box();
int menue_stack();
int menue_Queue();
int menue_linked();
int linked_operation();
int display_lin();
int Assignment_menue();
int Assignment_operaion();
int Tree_menue();
int Tree_operation();
int Tree_Display();
int display_depth();
void ShowConsoleCursor(bool showFlag);


void Full_Menue(){
    stack_array<int> obj_stack;
    stack_Dynamic<float> obj_Dynamic_stack(10);
    stack_liked_list<int> obj_Stack_linked;
    queue_array<int> obj_Queue_Array;
    queue_linked_list<int> obj_Queue_linked_list;
    queue_circular_array<int> obj_Circular_Queue_Array;
    queue_circular_linked_list<int>obj_Circular_Queue_linked_list;
    linked_list<int> obj_linked;
    linked_list_double<int> obj_double_linked;
    linked_list_circular<int> obj_circular_linked;
    linked_list_double_circular<int> obj_double_circular_linked;
    linked_list_ASS<int> obj_ASSignment1;
    post_fix_evaluate<float> obj_evalu(20);
    poly obj_poly, obj_poly2, obj_poly3;
    queue_using_stack<float> obj_queue(20);
    BinartTree<int> BT_obj;
    BinartSearchTree<int> BST_obj;
<<<<<<< HEAD
    ShowConsoleCursor(0);
    char ch;
    int choose, S, num, val;
ME:
    int pos = menue_Box();
    SetConsoleTextAttribute(Console, 15);
    system("cls");
    if (pos == 1) {
    ST:
        int s = menue_stack();
        SetConsoleTextAttribute(Console, 15);
        system("cls");
        if (s == 1) {
        operation:
            int opera = operation_Box();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (opera == 1) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_stack.push(num);
                cout << "insert successed\n";
                goto operation;
            }
            else if (opera == 2) {
                obj_stack.pop();
                cout << "poped successed\n";
                goto operation;
            }
            else if (opera == 3) {
                cout << obj_stack.peak() << endl;
                goto operation;
            }
            else if (opera == 4) {
                cout << "number of element = " << obj_stack.number_of_element() << endl;
                goto operation;
            }
            else if (opera == 5) {
                obj_stack.Display();
                goto operation;
            }
            else if (opera == 6) {
                goto ST;
            }
        }
        else if (s == 2) {
        Dy_operation:
            int Dy = operation_Box();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (Dy == 1) {
                cout << "Enter the element you want to push : ";
                cin >> num;
                obj_Dynamic_stack.push(num);
                cout << "pushed successed\n";
                goto Dy_operation;
            }
            else if (Dy == 2) {
                obj_Dynamic_stack.pop();
                cout << "poped successed\n";
                goto Dy_operation;
            }
            else if (Dy == 3) {
                cout << obj_Dynamic_stack.peak() << endl;
                goto Dy_operation;
            }
            else if (Dy == 4) {
                cout << "number of element = " << obj_Dynamic_stack.number_of_element() << endl;
                goto Dy_operation;
            }
            else if (Dy == 5) {
                obj_Dynamic_stack.display();
                goto Dy_operation;
            }
            else if (Dy == 6) {
                goto ST;
            }
        }
        else if (s == 3) {
        Li_operation:
            int Sl = operation_Box();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (Sl == 1) {
                cout << "Enter the element you want to push : ";
                cin >> num;
                obj_Stack_linked.push(num);
                cout << "pushed successed\n";
                goto Li_operation;
            }
            else if (Sl == 2) {
                obj_Stack_linked.pop();
                cout << "poped successed\n";
                goto Li_operation;
            }
            else if (Sl == 3) {
                cout << obj_Stack_linked.peak() << endl;
                goto Li_operation;
            }
            else if (Sl == 4) {
                cout << "number of element = " << obj_Stack_linked.number_of_element() << endl;
                goto Li_operation;
            }
            else if (Sl == 5) {
                obj_Stack_linked.dispaly_stack();
                goto Li_operation;
            }
            else if (Sl == 6) {
                goto ST;
            }
        }
        else if (s == 4) {
            goto ME;
        }
    }
    else if (pos == 2) {
    Que:
        int Qu = menue_Queue();
        SetConsoleTextAttribute(Console, 15);
=======

int choose,S,num,val;
char ch;
menue:
cout<<"1-Stack\n";
cout<<"2-Queue\n";
cout<<"3-Linked-list\n";
cout<<"4-TRee\n";
cout<<"5-Assignment\n";
cout<<"6-Exit\n";
cout<<"please, enter your choice : ";
cin>>choose;
system("cls");
switch (choose) {
    case 1:
        stack:
        cout<<"a-Stack-Array\n";
        cout<<"b-Stack-Dynamic-Array\n";
        cout<<"c-Stack-Linked-list\n";
        cout<<"d-return\n";
        cout<<"please, enter your choice : ";
        cin>>ch;
        system("cls");
        switch (ch) {
         case 'a':
             S_operation:
             cout<<"1-push\n";
             cout<<"2-pop\n";
             cout<<"3-peak\n";
             cout<<"4-number of element\n";
            cout<<"5-Display\n";
            cout<<"6-return\n";
             cout<<"please, enter your choice : ";
             cin>>S;
             system("cls");
                switch (S) {
                 case 1:
                     cout<<"Enter the element you want to push : ";
                     cin>>num;
                     obj_stack.push(num);
                     cout<<"pushed successed\n";
                     goto S_operation;
                     break;
                 case 2:
                     obj_stack.pop();
                     cout<<"poped successed\n";
                     goto S_operation;
                     break;
                 case 3:
                     cout<<obj_stack.peak()<<endl;
                    goto S_operation;
                     break;
                 case 4:
                     cout<<"number of element = "<<obj_stack.number_of_element()<<endl;
                     goto S_operation;
                     break;
                    case 5:
                        cout<<"----------------------------------------------------\n";
                        obj_stack.Display();
                        cout<<"----------------------------------------------------\n";
                        goto S_operation;
                 case 6:
                  goto stack;
                     break;
                 default:
                     break;
                }
             break;
         case 'b':
                S_operation2:
            cout<<"1-push\n";
            cout<<"2-pop\n";
            cout<<"3-peak\n";
            cout<<"4-number of element\n";
            cout<<"5-Display\n";
            cout<<"6-return\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to push : ";
                    cin>>num;
                       obj_Dynamic_stack.push(num);
                    cout<<"pushed successed\n";
                    goto S_operation2;
                    break;
                case 2:
                       obj_Dynamic_stack.pop();
                    cout<<"poped successed\n";
                    goto S_operation2;
                    break;
                case 3:
                    cout<<obj_Dynamic_stack.peak()<<endl;
                   goto S_operation2;
                    break;
                case 4:
                    cout<<"number of element = "<<obj_Dynamic_stack.number_of_element()<<endl;
                    goto S_operation2;
                    break;
                case 5:
                       cout<<"----------------------------------------------------\n";
                       obj_Dynamic_stack.display();
                       cout<<"----------------------------------------------------\n";
                       goto S_operation2;
                       break;
                case 6:
                 goto stack;
                    break;
                default:
                    break;
               }
            break;
            case 'c':
            S_operation3:
                cout<<"1-push\n";
                cout<<"2-pop\n";
                cout<<"3-peak\n";
                cout<<"4-Display\n";
                cout<<"5- return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                   switch (S) {
                    case 1:
                        cout<<"Enter the element you want to push : ";
                        cin>>num;
                           obj_Stack_linked.push(num);
                        cout<<"pushed successed\n";
                        goto S_operation3;
                        break;
                    case 2:
                           obj_Stack_linked.pop();
                        cout<<"poped successed\n";
                        goto S_operation3;
                        break;
                    case 3:
                        cout<<obj_Stack_linked.peak()<<endl;
                       goto S_operation3;
                        break;
                       case 4:
                           cout<<"----------------------------------------------------\n";
                           obj_Stack_linked.dispaly_stack();
                           cout<<"----------------------------------------------------\n";
                           goto S_operation3;
                            break;
                       case 5:
                           goto stack;
                           break;
                       default:
                           break;
                   }
             break;
            case 'd':
                goto menue;
         default:
             break;
        }
        break;
    case 2:
    que:
    cout<<"a-Queue-Array\n";
    cout<<"b-Queue_linked_list\n";
    cout<<"c-Queue_circular_array\n";
    cout<<"d-Queue_circular_linked_list\n";
    cout<<"e-return\n";
    cout<<"please, enter your choice : ";
    cin>>ch;
    system("cls");
    switch (ch) {
     case 'a':
         Q_operation:
         cout<<"1-enqueue\n";
         cout<<"2-dequeue\n";
         cout<<"3-number of element\n";
        cout<<"4-Display\n";
        cout<<"5-return\n";
         cout<<"please, enter your choice : ";
         cin>>S;
         system("cls");
            switch (S) {
             case 1:
                 cout<<"Enter the element you want to enqueue : ";
                 cin>>num;
                    obj_Queue_Array.enqueue(num);
                 cout<<"pushed successed\n";
                 goto Q_operation;
                 break;
             case 2:
                    cout<<obj_Queue_Array.dequeue()<<endl;
                 cout<<"poped successed\n";
                 goto Q_operation;
                 break;
             case 3:
                 cout<<"number of element = "<<obj_Queue_Array.number_of_element()<<endl;
                 goto Q_operation;
                 break;
             case 4:
                    cout<<"----------------------------------------------------\n";
                    obj_Queue_Array.display();
                    cout<<"----------------------------------------------------\n";
                    goto Q_operation;
                    break;
             case 5:
              goto que;
                 break;
             default:
                 break;
            }
        break;
        case 'b':
            Q_operation2:
            cout<<"1-enqueue\n";
            cout<<"2-dequeue\n";
            cout<<"3-number of element\n";
           cout<<"4-Display\n";
           cout<<"5-return\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to enqueue : ";
                    cin>>num;
                       obj_Queue_linked_list.enqueue(num);
                    cout<<"pushed successed\n";
                    goto Q_operation2;
                    break;
                case 2:
                       obj_Queue_linked_list.dequeue();
                    cout<<"poped successed\n";
                    goto Q_operation2;
                    break;
                case 3:
                    cout<<"number of element = "<<obj_Queue_linked_list.number_of_element()<<endl;
                    goto Q_operation2;
                    break;
                case 4:
                       cout<<"----------------------------------------------------\n";
                       obj_Queue_linked_list.display();
                       cout<<"----------------------------------------------------\n";
                       goto Q_operation2;
                       break;
                case 5:
                 goto que;
                    break;
                default:
                    break;
               }
           break;
        case 'c':
            Q_operation3:
            cout<<"1-enqueue\n";
            cout<<"2-dequeue\n";
            cout<<"3-number of element\n";
           cout<<"4-Display\n";
           cout<<"5-return\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to enqueue : ";
                    cin>>num;
                       obj_Circular_Queue_Array.enqueue(num);
                    cout<<"pushed successed\n";
                    goto Q_operation3;
                    break;
                case 2:
                       cout<<obj_Circular_Queue_Array.dequeue()<<endl;
                    cout<<"poped successed\n";
                    goto Q_operation3;
                    break;
                case 3:
                    cout<<"number of element = "<<obj_Circular_Queue_Array.number_of_element()<<endl;
                    goto Q_operation3;
                    break;
                case 4:
                       cout<<"----------------------------------------------------\n";
                       obj_Circular_Queue_Array.display();
                       cout<<"----------------------------------------------------\n";
                       goto Q_operation3;
                       break;
                case 5:
                 goto que;
                    break;
                default:
                    break;
               }
           break;
        case 'd':
            Q_operation4:
            cout<<"1-enqueue\n";
            cout<<"2-dequeue\n";
            cout<<"3-number of element\n";
           cout<<"4-Display\n";
           cout<<"5-return\n";
            cout<<"please, enter your choice : ";
            cin>>S;
            system("cls");
               switch (S) {
                case 1:
                    cout<<"Enter the element you want to enqueue : ";
                    cin>>num;
                       obj_Circular_Queue_linked_list.enqueue(num);
                    cout<<"enqueue successed\n";
                    goto Q_operation4;
                    break;
                case 2:
                       obj_Circular_Queue_linked_list.dequeue();
                    cout<<"dequeue successed\n";
                    goto Q_operation4;
                    break;
                case 3:
                    cout<<"number of element = "<<obj_Circular_Queue_linked_list.number_of_element()<<endl;
                    goto Q_operation4;
                    break;
                case 4:
                       cout<<"----------------------------------------------------\n";
                       obj_Circular_Queue_linked_list.display();
                       cout<<"----------------------------------------------------\n";
                       goto Q_operation4;
                       break;
                case 5:
                 goto que;
                    break;
                default:
                    break;
               }
           break;
        case 'e':
            goto menue;
            break;
        default:
            break;
    }
        break;
    case 3:
        linked:
        cout<<"a-linked list\n";
        cout<<"b-Double linked list\n";
        cout<<"c-Circular linked list\n";
       cout<<"d-Double circular linked list\n";
       cout<<"e-return\n";
        cout<<"please, enter your choice : ";
        cin>>ch;
>>>>>>> 73b2c5d448688660c188a2fb8d0d3842c669af73
        system("cls");

        if (Qu == 1) {
        Q_operation:
            int Q_oper = que_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (Q_oper == 1) {
                cout << "Enter the element you want to enqueue : ";
                cin >> num;
                obj_Queue_Array.enqueue(num);
                cout << "pushed successed\n";
                goto Q_operation;
            }
            else if (Q_oper == 2) {
                cout << obj_Queue_Array.dequeue() << endl;
                cout << "poped successed\n";
                goto Q_operation;
            }
            else if (Q_oper == 3) {
                cout << "number of element = " << obj_Queue_Array.number_of_element() << endl;
                goto Q_operation;
            }
            else if (Q_oper == 4) {
                obj_Queue_Array.display();
                goto Q_operation;
            }
            else if (Q_oper == 5) {
                goto Que;
            }
        }
        else if (Qu == 2) {
        L_que:
            int L_Q = que_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (L_Q == 1) {
                cout << "Enter the element you want to enqueue : ";
                cin >> num;
                obj_Queue_linked_list.enqueue(num);
                cout << "pushed successed\n";
                goto L_que;
            }
            else if (L_Q == 2) {
                obj_Queue_linked_list.dequeue();
                cout << "poped successed\n";
                goto L_que;
            }
            else if (L_Q == 3) {
                cout << "number of element = " << obj_Queue_linked_list.number_of_element() << endl;
                goto L_que;
            }
            else if (L_Q == 4) {
                obj_Queue_linked_list.display();
                goto L_que;
            }
            else if (L_Q == 5) {
                goto Que;
            }
        }
        else if (Qu == 3) {
        Q_C_Array:
            int Q_C = que_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (Q_C == 1) {
                cout << "Enter the element you want to enqueue : ";
                cin >> num;
                obj_Circular_Queue_Array.enqueue(num);
                cout << "pushed successed\n";
                goto Q_C_Array;
            }
            else if (Q_C == 2) {
                cout << obj_Circular_Queue_Array.dequeue() << endl;
                cout << "poped successed\n";
                goto Q_C_Array;
            }
            else if (Q_C == 3) {
                cout << "number of element = " << obj_Circular_Queue_Array.number_of_element() << endl;
                goto Q_C_Array;
            }
            else if (Q_C == 4) {
                obj_Circular_Queue_Array.display();
                goto Q_C_Array;
            }
            else if (Q_C == 5) {
                goto Que;
            }
        }
        else if (Qu == 4) {
        Q_C_Link:
            int Q_C_L = que_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (Q_C_L == 1) {
                cout << "Enter the element you want to enqueue : ";
                cin >> num;
                obj_Circular_Queue_linked_list.enqueue(num);
                cout << "enqueue successed\n";
                goto Q_C_Link;
            }
            else if (Q_C_L == 2) {
                obj_Circular_Queue_linked_list.dequeue();
                cout << "dequeue successed\n";
                goto Q_C_Link;
            }
            else if (Q_C_L == 3) {
                cout << "number of element = " << obj_Circular_Queue_linked_list.number_of_element() << endl;
                goto Q_C_Link;
            }
            else if (Q_C_L == 4) {
                obj_Circular_Queue_linked_list.display();
                goto Q_C_Link;
            }
            else if (Q_C_L == 5) {
                goto Que;
            }
        }
        else if (Qu == 5) {
            goto ME;
        }

    }
    else if (pos == 3) {
    Linked_L:
        int S_L = menue_linked();
        SetConsoleTextAttribute(Console, 15);
        system("cls");
<<<<<<< HEAD
        if (S_L == 1) {
        L_operation:
            int O_S_l = linked_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (O_S_l == 1) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_linked.insert_first(num);
                cout << "insert successed\n";
                goto L_operation;
            }
            else if (O_S_l == 2) {
                obj_linked.deletion_first();
                cout << "deletion successed\n";
                goto L_operation;
            }
            else if (O_S_l == 3) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_linked.insert_last(num);
                cout << "insert successed\n";
                goto L_operation;
            }
            else if (O_S_l == 4) {
                obj_linked.deletion_last();
                cout << "deletion successed\n";
                goto L_operation;
            }
            else if (O_S_l == 5) {
                cout << "Enter the element you want to insert :";
                cin >> num;
                cout << "Enter the value : ";
                cin >> val;
                obj_linked.isert_after_value(val, num);
                cout << "insertion successed\n";
                goto L_operation;
            }
            else if (O_S_l == 6) {
                cout << "Enter the position you want to deletion : ";
                cin >> num;
                obj_linked.deletion_at_position(num);
                cout << "deletion successed\n";
                goto L_operation;
            }
            else if (O_S_l == 7) {
                cout << "number of element = " << obj_linked.number_of_element();
                goto L_operation;
            }
            else if (O_S_l == 8) {
                obj_linked.display();
                goto L_operation;
            }
            else if (O_S_l == 9) {
                goto Linked_L;
            }
        }
        else if (S_L == 2) {
        D_linked:
            int D_L = linked_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (D_L == 1) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_double_linked.insert_first(num);
                cout << "insert successed\n";
                goto D_linked;
            }
            else if (D_L == 2) {
                obj_double_linked.deletion_first();
                cout << "deletion successed\n";
                goto D_linked;
            }
            else if (D_L == 3) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_double_linked.insert_last(num);
                cout << "insert successed\n";
                goto D_linked;
            }
            else if (D_L == 4) {
                obj_double_linked.deletion_last();
                cout << "deletion successed\n";
                goto D_linked;
            }
            else if (D_L == 5) {
                cout << "Enter the element you want to insert :";
                cin >> num;
                cout << "Enter the position : ";
                cin >> val;
                obj_double_linked.isert_at_position(val, num);
                cout << "insertion successed\n";
                goto D_linked;
            }
            else if (D_L == 6) {
                cout << "Enter the position you want to deletion : ";
                cin >> num;
                obj_double_linked.deletion_at_position(num);
                cout << "deletion successed\n";
                goto D_linked;
            }
            else if (D_L == 7) {
                cout << "number of element = " << obj_double_linked.number_of_element();
                goto D_linked;
            }
            else if (D_L == 8) {
            Dis:
                int D_P = display_lin();
                SetConsoleTextAttribute(Console, 15);
                system("cls");
                if (D_P == 1) {
                    obj_double_linked.display_from_start();
                    goto Dis;
                }
                else if (D_P == 2) {
                    obj_double_linked.display_from_end();
                    goto Dis;
                }
                else if (D_P == 3) {
                    goto D_linked;
                }
            }
            else if (D_L == 9) {
                goto Linked_L;
            }
        }
        else if (S_L == 3) {
        L_operation3:
            int C_L = linked_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (C_L == 1) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_circular_linked.insert_first(num);
                cout << "insert successed\n";
                goto L_operation3;
            }
            else if (C_L == 2) {
                obj_circular_linked.deletion_first();
                cout << "deletion successed\n";
                goto L_operation3;
            }
            else if (C_L == 3) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_circular_linked.insert_last(num);
                cout << "insert successed\n";
                goto L_operation3;
            }
            else if (C_L == 4) {
                obj_circular_linked.deletion_last();
                cout << "deletion successed\n";
                goto L_operation3;
            }
            else if (C_L == 5) {
                cout << "Enter the element you want to insert :";
                cin >> num;
                cout << "Enter the position : ";
                cin >> val;
                obj_circular_linked.isert_at_position(val, num);
                cout << "insertion successed\n";
                goto L_operation3;
            }
            else if (C_L == 6) {
                cout << "Enter the position you want to deletion : ";
                cin >> num;
                obj_circular_linked.deletion_at_position(num);
                cout << "deletion successed\n";
                goto L_operation3;
            }
            else if (C_L == 7) {
                cout << "number of element = " << obj_circular_linked.number_of_element();
                goto L_operation3;
            }
            else if (C_L == 8) {
                obj_linked.display();
                goto L_operation3;
            }
            else if (C_L == 9) {
                goto Linked_L;
            }
        }
        else if (S_L == 4) {
        L_operation4:
            int D_C_l = linked_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (D_C_l == 1) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_double_circular_linked.insert_first(num);
                cout << "insert successed\n";
                goto L_operation4;
            }
            else if (D_C_l == 2) {
                obj_double_circular_linked.deletion_first();
                cout << "deletion successed\n";
                goto L_operation4;
            }
            else if (D_C_l == 3) {
                cout << "Enter the element you want to insert_first : ";
                cin >> num;
                obj_double_circular_linked.insert_last(num);
                cout << "insert successed\n";
                goto L_operation4;
            }
            else if (D_C_l == 4) {
                obj_double_circular_linked.deletion_last();
                cout << "deletion successed\n";
                goto L_operation4;
            }
            else if (D_C_l == 5) {
                cout << "Enter the element you want to insert :";
                cin >> num;
                cout << "Enter the position : ";
                cin >> val;
                obj_double_circular_linked.isert_at_position(val, num);
                cout << "insertion successed\n";
                goto L_operation4;
            }
            else if (D_C_l == 6) {
                cout << "Enter the position you want to deletion : ";
                cin >> num;
                obj_double_circular_linked.deletion_at_position(num);
                cout << "deletion successed\n";
                goto L_operation4;
            }
            else if (D_C_l == 7) {
                cout << "number of element = " << obj_double_circular_linked.number_of_element();
                goto L_operation4;
            }
            else if (D_C_l == 8) {
            Dis_1:
                int D_P = display_lin();
                SetConsoleTextAttribute(Console, 15);
                system("cls");
                if (D_P == 1) {
                    obj_double_circular_linked.display_from_start();
                    goto Dis_1;
                }
                else if (D_P == 2) {
                    obj_double_circular_linked.display_from_end();
                    goto Dis_1;
                }
                else if (D_P == 3) {
                    goto L_operation4;
                }
            }
            else if (D_C_l == 9) {
                goto  Linked_L;
            }
        }
        else if (S_L == 5) {
            goto ME;
        }
    }
    else if (pos == 4) {
    TRee:
        int t = Tree_menue();
        SetConsoleTextAttribute(Console, 15);
        system("cls");
        if (t == 1) {
        BT_operation:
            int bt = Tree_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (bt == 1) {
                cout << "enter the value you want to insert : ";
                cin >> num;
                BT_obj.insert(num);
                cout << "inserted succesed\n";
                goto BT_operation;
            }
            else if (bt == 2) {
                cout << "enter the value you want to delete : ";
                cin >> num;
                if (BT_obj.deleteValue(num))
                    cout << " has been deleted successfully from Binary Tree\n";
                else
                    cout << "this value is not exist in Binary  Tree\n";
                goto BT_operation;
            }
            else if (bt == 3) {
                cout << "please enter integer value to search for it\n";
                cin >> num;
                if (BT_obj.search(num))
                    cout << num << " is exist in Binary Tree\n";
                else
                    cout << "this value is not exist in Binary Tree\n";
                goto BT_operation;
            }
            else if (bt == 4) {
                if (BT_obj.isEmpty())
                    cout << "Binary Tree is Empty\n";
                else
                    cout << "Binary Tree is not Empty\n";
                goto BT_operation;
            }
            else if (bt == 5) {
                cout << "Binary Tree has " << BT_obj.size() << " Node(s)\n";
                goto BT_operation;
            }
            else if (bt == 6) {
                cout << "Height of Binary Tree = " << BT_obj.height() << "\n";
                goto BT_operation;
            }
            else if (bt == 7) {
                int Dis = Tree_Display();
                SetConsoleTextAttribute(Console, 15);
=======
                switch (S) {
                    case 1:
                    cout<<"Enter the element you want to insert_first : ";
                    cin>>num;
                    obj_linked.insert_first(num);
                    cout<<"insert successed\n";
                    goto L_operation;
                        break;
                    case 2:
                        obj_linked.deletion_first();
                        cout<<"deletion successed\n";
                        goto L_operation;
                        break;
                    case 3:
                        cout<<"Enter the element you want to insert_first : ";
                        cin>>num;
                        obj_linked.insert_last(num);
                        cout<<"insert successed\n";
                        goto L_operation;
                        break;
                    case 4:
                        obj_linked.deletion_last();
                        cout<<"deletion successed\n";
                        goto L_operation;
                        break;
                    case 5:
                        cout<<"Enter the element you want to insert :";
                        cin>>num;
                        cout<<"Enter the value : ";
                        cin>>val;
                        obj_linked.isert_after_value(val, num);
                        cout<<"insertion successed\n";
                        goto L_operation;
                        break;
                    case 6:
                        cout<<"Enter the position you want to deletion : ";
                        cin>>num;
                        obj_linked.deletion_at_position(num);
                        cout<<"deletion successed\n";
                        goto L_operation;
                        break;
                    case 7:
                        cout<<"number of element = "<<obj_linked.number_of_element();
                        goto L_operation;
                        break;
                    case 8:
                        cout<<"----------------------------------------------------\n";
                        obj_linked.display();
                        cout<<"----------------------------------------------------\n";
                        goto L_operation;
                        break;
                    case 9:
                        goto linked;
                        break;
                    default:
                        break;
                }
            break;
            case 'b':
            L_operation2:
                cout<<"1-insert_first\n";
                cout<<"2-deletion_first\n";
                cout<<"3-insert_last\n";
               cout<<"4-deletion_last\n";
               cout<<"5-isert_after_value\n";
                cout<<"6-deletion_at_position\n";
                cout<<"7-number of element\n";
                cout<<"8-display from start\n";
                cout<<"9-display from end\n";
                cout<<"10-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                        switch (S) {
                            case 1:
                            cout<<"Enter the element you want to insert_first : ";
                            cin>>num;
                                obj_double_linked.insert_first(num);
                            cout<<"insert successed\n";
                            goto L_operation2;
                                break;
                            case 2:
                                obj_double_linked.deletion_first();
                                cout<<"deletion successed\n";
                                goto L_operation2;
                                break;
                            case 3:
                                cout<<"Enter the element you want to insert_first : ";
                                cin>>num;
                                obj_double_linked.insert_last(num);
                                cout<<"insert successed\n";
                                goto L_operation2;
                                break;
                            case 4:
                                obj_double_linked.deletion_last();
                                cout<<"deletion successed\n";
                                goto L_operation2;
                                break;
                            case 5:
                                cout<<"Enter the element you want to insert :";
                                cin>>num;
                                cout<<"Enter the position : ";
                                cin>>val;
                                obj_double_linked.isert_at_position(val, num);
                                cout<<"insertion successed\n";
                                goto L_operation2;
                                break;
                            case 6:
                                cout<<"Enter the position you want to deletion : ";
                                cin>>num;
                                obj_double_linked.deletion_at_position(num);
                                cout<<"deletion successed\n";
                                goto L_operation2;
                                break;
                            case 7:
                                cout<<"number of element = "<<obj_double_linked.number_of_element();
                                goto L_operation2;
                                break;
                            case 8:
                                cout<<"----------------------------------------------------\n";
                                obj_double_linked.display_from_start();
                                cout<<"----------------------------------------------------\n";
                                goto L_operation2;
                                break;
                            case 9:
                                cout<<"----------------------------------------------------\n";
                                obj_double_linked.display_from_end();
                                cout<<"----------------------------------------------------\n";
                                goto L_operation2;
                                break;
                            case 10:
                                goto linked;
                            default:
                                break;
                        }
                    break;
            case 'c':
            L_operation3:
                cout<<"1-insert_first\n";
                cout<<"2-deletion_first\n";
                cout<<"3-insert_last\n";
               cout<<"4-deletion_last\n";
               cout<<"5-isert_at_position\n";
                cout<<"6-deletion_at_position\n";
                cout<<"7-number of element\n";
                cout<<"8-display\n";
                cout<<"9-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                        switch (S) {
                            case 1:
                            cout<<"Enter the element you want to insert_first : ";
                            cin>>num;
                                obj_circular_linked.insert_first(num);
                            cout<<"insert successed\n";
                            goto L_operation3;
                                break;
                            case 2:
                                obj_circular_linked.deletion_first();
                                cout<<"deletion successed\n";
                                goto L_operation3;
                                break;
                            case 3:
                                cout<<"Enter the element you want to insert_first : ";
                                cin>>num;
                                obj_circular_linked.insert_last(num);
                                cout<<"insert successed\n";
                                goto L_operation3;
                                break;
                            case 4:
                                obj_circular_linked.deletion_last();
                                cout<<"deletion successed\n";
                                goto L_operation3;
                                break;
                            case 5:
                                cout<<"Enter the element you want to insert :";
                                cin>>num;
                                cout<<"Enter the position : ";
                                cin>>val;
                                obj_circular_linked.isert_at_position(val, num);
                                cout<<"insertion successed\n";
                                goto L_operation3;
                                break;
                            case 6:
                                cout<<"Enter the position you want to deletion : ";
                                cin>>num;
                                obj_circular_linked.deletion_at_position(num);
                                cout<<"deletion successed\n";
                                goto L_operation3;
                                break;
                            case 7:
                                cout<<"number of element = "<<obj_circular_linked.number_of_element();
                                goto L_operation3;
                                break;
                            case 8:
                                cout<<"----------------------------------------------------\n";
                                obj_linked.display();
                                cout<<"----------------------------------------------------\n";
                                goto L_operation3;
                                break;
                            case 9:
                                goto linked;
                                break;
                            default:
                                break;
                        }
                break;
            case 'd':
            L_operation4:
                cout<<"1-insert_first\n";
                cout<<"2-deletion_first\n";
                cout<<"3-insert_last\n";
               cout<<"4-deletion_last\n";
               cout<<"5-isert_after_value\n";
                cout<<"6-deletion_at_position\n";
                cout<<"7-number of element\n";
                cout<<"8-display from start\n";
                cout<<"9-display from end\n";
                cout<<"10-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                system("cls");
                        switch (S) {
                            case 1:
                            cout<<"Enter the element you want to insert_first : ";
                            cin>>num;
                                obj_double_circular_linked.insert_first(num);
                            cout<<"insert successed\n";
                            goto L_operation4;
                                break;
                            case 2:
                                obj_double_circular_linked.deletion_first();
                                cout<<"deletion successed\n";
                                goto L_operation4;
                                break;
                            case 3:
                                cout<<"Enter the element you want to insert_first : ";
                                cin>>num;
                                obj_double_circular_linked.insert_last(num);
                                cout<<"insert successed\n";
                                goto L_operation4;
                                break;
                            case 4:
                                obj_double_circular_linked.deletion_last();
                                cout<<"deletion successed\n";
                                goto L_operation4;
                                break;
                            case 5:
                                cout<<"Enter the element you want to insert :";
                                cin>>num;
                                cout<<"Enter the position : ";
                                cin>>val;
                                obj_double_circular_linked.isert_at_position(val, num);
                                cout<<"insertion successed\n";
                                goto L_operation4;
                                break;
                            case 6:
                                cout<<"Enter the position you want to deletion : ";
                                cin>>num;
                                obj_double_circular_linked.deletion_at_position(num);
                                cout<<"deletion successed\n";
                                goto L_operation4;
                                break;
                            case 7:
                                cout<<"number of element = "<<obj_double_circular_linked.number_of_element();
                                goto L_operation4;
                                break;
                            case 8:
                                cout<<"----------------------------------------------------\n";
                                obj_double_circular_linked.display_from_start();
                                cout<<"----------------------------------------------------\n";
                                goto L_operation4;
                                break;
                            case 9:
                                cout<<"----------------------------------------------------\n";
                                obj_double_circular_linked.display_from_end();
                                cout<<"----------------------------------------------------\n";
                                goto L_operation4;
                                break;
                            case 10:
                                goto linked;
                            default:
                                break;
                        }
                    break;
            case 'e':
                goto menue;
                break;
            default:
                break;
        }
        break;
    case 4:
        binaryTree:
        cout<<"a-Binary tree\n";
        cout<<"b-Binary search tree\n";
        cout<<"c-return\n";
        cout<<"please, enter your choice : ";
        cin>>ch;
        system("cls");
        switch (ch) {
            case 'a':
                BT_operation:
                cout<<"1- insertion \n";
                cout<<"2- deletion \n";
                cout<<"3- search for value\n";
                cout<<"4- Is Empty\n";
                cout<<"5- number of nodes\n";
                cout<<"6- tree height\n";
                cout<<"7- print tree by depth\n";
                cout<<"8- print tree by breadth\n";
                cout<<"9- return\n";
                cout<<"Enter your choice : ";
                cin>>S;
>>>>>>> 73b2c5d448688660c188a2fb8d0d3842c669af73
                system("cls");
                if (Dis == 1) {
                Dib:
                    int d = display_depth();
                    SetConsoleTextAttribute(Console, 15);
                    system("cls");
                    if (d == 1) {
                        BT_obj.inOrder();
                        goto BT_operation;
                    }
                    else if (d == 2) {
                        BT_obj.preOrder();
                        goto BT_operation;
                    }
                    else if (d == 3) {
                        BT_obj.postOrder();
                        goto BT_operation;
<<<<<<< HEAD
                    }
                }
                else if (Dis == 2) {
                    BT_obj.levelOrder();
                    goto BT_operation;
                }
                else if (Dis == 3) {
                    goto BT_operation;
                }
            }
            else if (bt == 8) {
                goto TRee;
            }
        }
        else if (t == 2) {
        BT_operation2:
            int s = Tree_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (s == 1) {
                cout << "enter the value you want to insert : ";
                cin >> num;
                BST_obj.insert(num);
                cout << "inserted succesed\n";
                goto BT_operation2;
            }
            else if (s == 2) {
                cout << "enter the value you want to delete : ";
                cin >> num;
                if (BST_obj.deleteValue(num))
                    cout << " has been deleted successfully from Binary Tree\n";
                else
                    cout << "this value is not exist in Binary  Tree\n";
                goto BT_operation2;
            }
            else if (s == 3) {
                cout << "please enter integer value to search for it\n";
                cin >> num;
                if (BST_obj.search(num))
                    cout << num << " is exist in Binary Tree\n";
                else
                    cout << "this value is not exist in Binary Tree\n";
                goto BT_operation2;
            }
            else if (s == 4) {
                if (BST_obj.isEmpty())
                    cout << "Binary Tree is Empty\n";
                else
                    cout << "Binary Tree is not Empty\n";
                goto BT_operation2;
            }
            else if (s == 5) {
                cout << "Binary Tree has " << BST_obj.size() << " Node(s)\n";
                goto BT_operation2;
            }
            else if (s == 6) {
                cout << "Height of Binary Tree = " << BST_obj.height() << "\n";
                goto BT_operation2;
            }
            else if (s == 7) {
                int s_Dis = Tree_Display();
                SetConsoleTextAttribute(Console, 15);
                system("cls");
                if (s_Dis == 1) {
                    int s_d = display_depth();
                    SetConsoleTextAttribute(Console, 15);
                    system("cls");
                    if (s_d == 1) {
                        BST_obj.inOrder();
                        goto BT_operation;
                    }
                    else if (s_d == 2) {
                        BST_obj.preOrder();
                        goto BT_operation;
                    }
                    else if (s_d == 3) {
                        BST_obj.postOrder();
                        goto BT_operation;
                    }
=======
                        break;
                    case 7:
                        cout<<"a- inOrder\n";
                        cout<<"b- preOrder\n";
                        cout<<"c- postOrder\n";
                        cout<<"enter your choice : ";
                        cin>>ch;
                        system("cls");
                        switch (ch) {
                            case 'a':
                                cout<<"----------------------------------------------------\n";
                                BT_obj.inOrder();
                                cout<<"----------------------------------------------------\n";
                                goto BT_operation;
                                break;
                            case 'b':
                                cout<<"----------------------------------------------------\n";
                                BT_obj.preOrder();
                                cout<<"----------------------------------------------------\n";
                                goto BT_operation;
                                break;
                            case 'c':
                                cout<<"----------------------------------------------------\n";
                                BT_obj.postOrder();
                                cout<<"----------------------------------------------------\n";
                                goto BT_operation;
                                break;
                            default:
                                break;
                        }
                        break;
                    case 8:
                        cout<<"----------------------------------------------------\n";
                        BT_obj.levelOrder();
                        cout<<"----------------------------------------------------\n";
                        goto BT_operation;
                        break;
                    case 9:
                        goto binaryTree;
                    default:
                        break;
                }
                break;
            case 'b':
                BT_operation2:
                cout<<"1- insertion \n";
                cout<<"2- deletion \n";
                cout<<"3- search for value\n";
                cout<<"4- Is Empty\n";
                cout<<"5- number of nodes\n";
                cout<<"6- tree height\n";
                cout<<"7- print tree by depth\n";
                cout<<"8- print tree by breadth\n";
                cout<<"9- return\n";
                cout<<"Enter your choice : ";
                cin>>S;
                system("cls");
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to insert : ";
                        cin>>num;
                        BST_obj.insert(num);
                        cout<<"inserted succesed\n";
                        goto BT_operation2;
                        break;
                    case 2:
                        cout<<"enter the value you want to delete : ";
                        cin>>num;
                        if(BST_obj.deleteValue(num))
                            cout<<" has been deleted successfully from Binary Tree\n";
                        else
                            cout<<"this value is not exist in Binary  Tree\n";
                        goto BT_operation2;
                        break;
                    case 3:
                        cout<<"please enter integer value to search for it\n";
                        cin>>num;
                        if(BST_obj.search(num))
                            cout<<num<<" is exist in Binary Tree\n";
                        else
                            cout<<"this value is not exist in Binary Tree\n";
                        goto BT_operation2;
                        break;
                    case 4:
                        if(BST_obj.isEmpty())
                            cout<<"Binary Tree is Empty\n";
                        else
                            cout<<"Binary Tree is not Empty\n";
                        goto BT_operation2;
                        break;
                    case 5:
                        cout<<"Binary Tree has "<<BST_obj.size()<<" Node(s)\n";
                        goto BT_operation2;
                        break;
                    case 6:
                        cout<<"Height of Binary Tree = "<<BST_obj.height()<<"\n";
                        goto BT_operation2;
                        break;
                    case 7:
                        cout<<"a- inOrder\n";
                        cout<<"b- preOrder\n";
                        cout<<"c- postOrder\n";
                        cout<<"enter your choice : ";
                        cin>>ch;
                        system("cls");
                        switch (ch) {
                            case 'a':
                                cout<<"----------------------------------------------------\n";
                                BST_obj.inOrder();
                                cout<<"----------------------------------------------------\n";
                                goto BT_operation2;
                                break;
                            case 'b':
                                cout<<"----------------------------------------------------\n";
                                BST_obj.preOrder();
                                cout<<"----------------------------------------------------\n";
                                goto BT_operation2;
                                break;
                            case 'c':
                                cout<<"----------------------------------------------------\n";
                                BST_obj.postOrder();
                                cout<<"----------------------------------------------------\n";
                                goto BT_operation2;
                                break;
                            default:
                                break;
                        }
                        break;
                    case 8:
                        cout<<"----------------------------------------------------\n";
                        BST_obj.levelOrder();
                        cout<<"----------------------------------------------------\n";
                        goto BT_operation2;
                        break;
                    case 9:
                        goto binaryTree;
                        break;
                    default:
                        break;
                }
                break;
            case 'c':
                goto menue;
                break;
            default:
                break;
        }
        break;
    case 5:
    Assignment:
    cout<<"a-Linked one function\n";
    cout<<"b-post_fix_evaluate\n";
    cout<<"c-polynomial\n";
    cout<<"d-queue_using_stack\n";
    cout<<"e-return\n";
    cout<<"please, enter your choice : ";
    cin>>ch;
    system("cls");
        switch (ch) {
            case 'a':
                AS_operation:
                cout<<"1-Creat_or_insert\n";
                cout<<"2-number of element\n";
                cout<<"3-Display\n";
                cout<<"4-return\n";
                cout<<"Enter your choice : ";
                cin>>S;
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to insert : ";
                        cin>>num;
                        obj_ASSignment1.Creat_or_insert(num);
                        cout<<"inserted succesed\n";
                        goto AS_operation;
                        break;
                    case 2:
                        cout<<"the number of elementd = "<<obj_ASSignment1.number_of_element();
                        goto AS_operation;
                        break;
                    case 3:
                        cout<<"----------------------------------------------------\n";
                        obj_ASSignment1.display();
                        cout<<"----------------------------------------------------\n";
                        goto AS_operation;
                        break;
                    case 4:
                        goto Assignment;
                        break;
                    default:
                        break;
                }
                break;
            case 'b':
                cout<<process(get_string())<<endl;
                goto Assignment;
                break;
            case 'c':
                equ(get_str(), obj_poly);
                
                equ(get_str(), obj_poly2);
                
                obj_poly3.set_node(obj_poly3.add(obj_poly, obj_poly2));
                
                result(obj_poly.get_node(), obj_poly2.get_node(), obj_poly3.get_node());
                cout<<endl<<endl;
                goto Assignment;
                break;
            case 'd':
                AS_operation2:
                cout<<"1-enqueue\n";
                cout<<"2-dequeue\n";
                cout<<"3-number of element\n";
               cout<<"4-Display\n";
               cout<<"5-return\n";
                cout<<"please, enter your choice : ";
                cin>>S;
                switch (S) {
                    case 1:
                        cout<<"enter the value you want to enqueue : ";
                        cin>>num;
                        obj_queue.enqueue(num);
                        cout<<"enqueued successed\n";
                        goto AS_operation2;
                        break;
                    case 2:
                        obj_queue.deque();
                        cout<<"dequeued successed\n";
                        goto AS_operation2;
                        break;
                    case 3:
                        cout<<"number of element = "<<obj_queue.number_of_element()<<endl;
                        goto AS_operation2;
                        break;
                    case 4:
                        cout<<"----------------------------------------------------\n";
                        obj_queue.display();
                        cout<<"----------------------------------------------------\n";
                        goto AS_operation2;
                        break;
                    case 5:
                        goto Assignment;
                        break;
                    default:
                        break;
>>>>>>> 73b2c5d448688660c188a2fb8d0d3842c669af73
                }
            }
            else if (s == 8) {
                goto TRee;
            }

        }
        else if (t == 3) {
            goto ME;
        }
    }
    else if (pos == 5) {
    AS:
        int assi = Assignment_menue();
        SetConsoleTextAttribute(Console, 15);
        system("cls");
        if (assi == 1) {
        AS_operation:
            int As1 = Assignment_operaion();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (As1 == 1) {
                cout << "enter the value you want to insert : ";
                cin >> num;
                obj_ASSignment1.Creat_or_insert(num);
                cout << "inserted succesed\n";
                goto AS_operation;
            }
            else if (As1 == 2) {
                cout << "the number of elementd = " << obj_ASSignment1.number_of_element();
                goto AS_operation;
            }
            else if (As1 == 3) {
                obj_ASSignment1.display();
                goto AS_operation;
            }
            else if (As1 == 4) {
                goto AS;
            }
        }
        else if (assi == 2) {
            cout << process(get_string()) << endl;
            goto AS;
        }
        else if (assi == 3) {
            equ(get_str(), obj_poly);

            equ(get_str(), obj_poly2);

            obj_poly3.set_node(obj_poly3.add(obj_poly, obj_poly2));

            result(obj_poly.get_node(), obj_poly2.get_node(), obj_poly3.get_node());
            goto AS;
        }
        else if (assi == 4) {
        AS_operation2:
            int S_Q_ope = que_operation();
            SetConsoleTextAttribute(Console, 15);
            system("cls");
            if (S_Q_ope == 1) {
                cout << "enter the value you want to enqueue : ";
                cin >> num;
                obj_queue.enqueue(num);
                cout << "enqueued successed\n";
                goto AS_operation2;
            }
            else if (S_Q_ope == 2) {
                obj_queue.deque();
                cout << "dequeued successed\n";
                goto AS_operation2;
            }
            else if (S_Q_ope == 3) {
                cout << "number of element = " << obj_queue.number_of_element() << endl;
                goto AS_operation2;
            }
            else if (S_Q_ope == 4) {
                obj_queue.display();
                goto AS_operation2;
            }
            else if (S_Q_ope == 5) {
                goto AS;
            }
        }
        else if (assi == 5) {
            goto ME;
        }
    }
    else if (pos == 6) {
        exit(0);
    }

}
void gotoxy(int x, int y)
{
    COORD coordinates;     // coordinates is declared as COORD
    coordinates.X = x;     // defining x-axis
    coordinates.Y = y;     //defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void Drow_Box(int num) {
    gotoxy(35, 3);
    cout << (char)201;
    for (int i = 0; i < 30; i++) {
        cout << (char)205;
    }
    cout << (char)187;
    for (int i = 1; i <= num; i++) {
        gotoxy(35, 3+i);
        cout << (char)186;
        for (int i = 0; i < 30; i++) {
            cout << (char)32;
        }
        cout << (char)186;
    }
   

    gotoxy(35, 3+num+1);
    cout << (char)200;
    for (int i = 0; i < 30; i++) {
        cout << (char)205;
    }
    cout << (char)188;
}
void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}

int menue_Box() {
    ShowConsoleCursor(0);
    Drow_Box(6);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)Stack                       ";
        gotoxy(36, 5);
        cout << "2)queue                       ";
        gotoxy(36, 6);
        cout << "3)linked list                 ";
        gotoxy(36, 7);
        cout << "4)Tree                        ";
        gotoxy(36, 8);
        cout << "5)Assignment                  ";
        gotoxy(36, 9);
        cout << "6)Exit                        ";



        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)Stack                       ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)queue                       ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)linked list                 ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Tree                        ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)Assignment                  ";
            break;
        case 6:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 9);
            cout << "6)Exit                        ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 6;
        }
        if (ch == 80) {
            pos++;
            if (pos == 7)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int menue_stack() {
    ShowConsoleCursor(0);
    Drow_Box(4);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)Stack Array                 ";
        gotoxy(36, 5);
        cout << "2)queue Dynamic               ";
        gotoxy(36, 6);
        cout << "3)Stack linked list           ";
        gotoxy(36, 7);
        cout << "4)Reurn                       ";
        gotoxy(36, 8);
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)Stack Array                 ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)Stack Dynamic               ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)Stack linked list           ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Reurn                       ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 4;
        }
        if (ch == 80) {
            pos++;
            if (pos == 5)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int operation_Box() {
    ShowConsoleCursor(0);
    Drow_Box(6);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)Push                        ";
        gotoxy(36, 5);
        cout << "2)Pop                         ";
        gotoxy(36, 6);
        cout << "3)peak                        ";
        gotoxy(36, 7);
        cout << "4)Number of element           ";
        gotoxy(36, 8);
        cout << "5)Display                     ";
        gotoxy(36, 9);
        cout << "6)Return                      ";



        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)Push                        ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)Pop                         ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)peak                        ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Number of element           ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)Display                     ";
            break;
        case 6:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 9);
            cout << "6)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 6;
        }
        if (ch == 80) {
            pos++;
            if (pos == 7)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int menue_Queue() {
    ShowConsoleCursor(0);
    Drow_Box(5);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)Queue Array                 ";
        gotoxy(36, 5);
        cout << "2)queue linked list           ";
        gotoxy(36, 6);
        cout << "3)queue circular array        ";
        gotoxy(36, 7);
        cout << "4)queue circular linked       ";
        gotoxy(36, 8);
        cout << "5)Return                      ";
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)Queue Array                 ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)queue linked list           ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)queue circular array        ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)queue circular linked       ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 5;
        }
        if (ch == 80) {
            pos++;
            if (pos == 6)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int que_operation() {
    ShowConsoleCursor(0);
    Drow_Box(5);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)Enqueue                     ";
        gotoxy(36, 5);
        cout << "2)Dequeue                     ";
        gotoxy(36, 6);
        cout << "3)Number of element           ";
        gotoxy(36, 7);
        cout << "4)Display                     ";
        gotoxy(36, 8);
        cout << "5)Return                      ";



        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)Enqueue                     ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)Dequeue                     ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)Number of element           ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Display                     ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 5;
        }
        if (ch == 80) {
            pos++;
            if (pos == 6)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int menue_linked() {
    ShowConsoleCursor(0);
    Drow_Box(5);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)single linked list          ";
        gotoxy(36, 5);
        cout << "2)Double linked list          ";
        gotoxy(36, 6);
        cout << "3)circular linked list        ";
        gotoxy(36, 7);
        cout << "4)double circular linked      ";
        gotoxy(36, 8);
        cout << "5)Return                      ";
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)single linked list          ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)Double linked list          ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)circular linked list        ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)double circular linked      ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 5;
        }
        if (ch == 80) {
            pos++;
            if (pos == 6)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int linked_operation() {
    ShowConsoleCursor(0);
    Drow_Box(9);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)insert first                ";
        gotoxy(36, 5);
        cout << "2)delete first                ";
        gotoxy(36, 6);
        cout << "3)insert last                 ";
        gotoxy(36, 7);
        cout << "4)delete last                 ";
        gotoxy(36, 8);
        cout << "5)insert after value          ";
        gotoxy(36, 9);
        cout << "6)delete at position          ";
        gotoxy(36, 10);
        cout << "7)number of element           ";
        gotoxy(36, 11);
        cout << "8)display                     ";
        gotoxy(36, 12);
        cout << "9)return                      ";



        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)insert first                ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)delete first                ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)insert last                 ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)delete last                 ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)insert after value          ";
            break;
        case 6:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 9);
            cout << "6)delete at position          ";
            break;
        case 7:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 10);
            cout << "7)number of element           ";
            break;
        case 8:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 11);
            cout << "8)display                     ";
            break;
        case 9:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 12);
            cout << "9)return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 9;
        }
        if (ch == 80) {
            pos++;
            if (pos == 10)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int display_lin() {
    ShowConsoleCursor(0);
    Drow_Box(3);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)display from start          ";
        gotoxy(36, 5);
        cout << "2)display from end            ";
        gotoxy(36, 6);
        cout << "3)return                      ";
        gotoxy(36, 7);
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)display from start          ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)display from end            ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 3;
        }
        if (ch == 80) {
            pos++;
            if (pos == 4)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int Assignment_menue() {
    ShowConsoleCursor(0);
    Drow_Box(5);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)linked one function         ";
        gotoxy(36, 5);
        cout << "2)post fix evaluation         ";
        gotoxy(36, 6);
        cout << "3)polonomyal                  ";
        gotoxy(36, 7);
        cout << "4)Queue linked list           ";
        gotoxy(36, 8);
        cout << "5)return                      ";
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)linked one function         ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)post fix evaluation         ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)polonomyal                  ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Queue linked list           ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 5;
        }
        if (ch == 80) {
            pos++;
            if (pos == 6)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int Assignment_operaion() {
    ShowConsoleCursor(0);
    Drow_Box(4);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)create or insert            ";
        gotoxy(36, 5);
        cout << "2)number of element           ";
        gotoxy(36, 6);
        cout << "3)Display                     ";
        gotoxy(36, 7);
        cout << "4)Return                      ";
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)create or insert            ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)number of element           ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)Display                     ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 4;
        }
        if (ch == 80) {
            pos++;
            if (pos == 4)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int Tree_menue() {
    ShowConsoleCursor(0);
    Drow_Box(3);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)Binary Tree                 ";
        gotoxy(36, 5);
        cout << "2)Binary Search Tree          ";
        gotoxy(36, 6);
        cout << "3)return                      ";
        gotoxy(36, 7);
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)Binary Tree                 ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)Binary Search Tree          ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 3;
        }
        if (ch == 80) {
            pos++;
            if (pos == 4)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int Tree_operation() {
    ShowConsoleCursor(0);
    Drow_Box(8);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)insertion                   ";
        gotoxy(36, 5);
        cout << "2)deletion                    ";
        gotoxy(36, 6);
        cout << "3)search for value            ";
        gotoxy(36, 7);
        cout << "4)Is Empty                    ";
        gotoxy(36, 8);
        cout << "5)number of nodes             ";
        gotoxy(36, 9);
        cout << "6)tree height                 ";
        gotoxy(36, 10);
        cout << "7)display                     ";
        gotoxy(36, 11);
        cout << "8)return                      ";
 
        



        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)insertion                   ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)deletion                    ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)search for value            ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Is Empty                    ";
            break;
        case 5:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 8);
            cout << "5)number of nodes             ";
            break;
        case 6:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 9);
            cout << "6)tree height                 ";
            break;
        case 7:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 10);
            cout << "7)display                     ";
            break;
        case 8:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 11);
            cout << "8)return                      ";
            break;
      
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 8;
        }
        if (ch == 80) {
            pos++;
            if (pos == 9)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int Tree_Display() {
    ShowConsoleCursor(0);
    Drow_Box(3);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4);
        cout << "1)display by Depth            ";
        gotoxy(36, 5);
        cout << "2)display  by Breadth         ";
        gotoxy(36, 6);
        cout << "3)return                      ";
        gotoxy(36, 7);
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)display by Depth            ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)display  by Breadth         ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 3;
        }
        if (ch == 80) {
            pos++;
            if (pos == 4)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}
int display_depth() {
    ShowConsoleCursor(0);
    Drow_Box(4);
    int pos = 1;
    char ch;
    do {
        SetConsoleTextAttribute(Console, 15);
        gotoxy(36, 4); 
        cout << "1)inOrder                     ";
        gotoxy(36, 5);
        cout << "2)preOrder                    ";
        gotoxy(36, 6);
        cout << "3)postOrder                   ";
        gotoxy(36, 7);
        cout << "4)Return                      ";
        switch (pos) {
        case 1:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 4);
            cout << "1)inOrder                     ";
            break;
        case 2:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 5);
            cout << "2)preOrder                    ";
            break;
        case 3:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 6);
            cout << "3)postOrder                   ";
            break;
        case 4:
            SetConsoleTextAttribute(Console, 240);
            gotoxy(36, 7);
            cout << "4)Return                      ";
            break;
        }
        ch = _getch();
        if (ch == 32)
            ch = _getch();
        if (ch == 72) {
            pos--;
            if (pos == 0)
                pos = 4;
        }
        if (ch == 80) {
            pos++;
            if (pos == 5)
                pos = 1;
        }
    } while (ch != 13);
    return pos;
}


#endif /* menue_h */
