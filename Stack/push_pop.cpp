#include<iostream>
using namespace std;
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top= -1;
void push(int item){
    if(top == MAX_SIZE -1){
        cout<<"Over flow and exit"<<endl;
    }else{
        stack[++top]=item;
        cout<<item<<" "<<"Item is inserted"<<endl;
    }
}

void pop(){
    if(top== -1){
        cout<<"Under flow and exit"<<endl;
    }else{
        int item=stack[top--];
        cout<<item<<"Item is deleted"<<endl;
    }
}
void display(){
    if(top== -1){
    cout<<"The stack is empty"<<endl;
    }else{
        for(int i=0;i<=top; i++){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){

     int choise, item;
     cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
     while(1){
        cout<<"Enter your choise: ";
        cin>>choise;

        switch(choise){
            case 1:
                 cout<<"Enter the value to push: ";
                 cin>>item;
                 push(item);
                 break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                 cout<<"Invalid choise!!"<<endl;                 
        }
     }

    return 0;
}