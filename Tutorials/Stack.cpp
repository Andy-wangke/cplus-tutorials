#include<iostream>
#include<vector>
 
using namespace std;
 
 /**
 Stack implementation in C++ using vector 
 **/
class Stack{
      private:
              vector<int> obj; //rememeber we are just making to store ints, but you can make this generic.
      public:
             void push(int);
             int pop();
             int size();    
};
 
void Stack::push(int no){
     obj.push_back(no); //We add the element to the abck of the vector
}
 
int Stack::pop(){
    //We should of course check whether our stack is empty before calling pulling out the element
    if(obj.size()!=0){
       int ele = obj.back();
       obj.pop_back();
       return ele;
    }else{
       cout << "Stack is empty!";
    }
}
 
int Stack::size(){
    return obj.size(); //Big deal hah?
}
 
//int main(){
//	
//	cout << "Hello world!\n";
//    Stack* stack = new Stack();
//    stack->push(10);
//    stack->push(20);
//   
//    cout << stack->size() << endl;
//    
//    stack->pop();
//    cout << stack->size() << endl;
//    stack->pop();
//    cout << stack->size() << endl;
//    stack->pop();
//   
//}
