//剑指第5题
//用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
#include <stack>
#include <vector>

using namespace std;

class Solution{
public:
    void push(int node){
        stack1.push(node);
    }

    int pop(){
       if(stack2.size()<=0){
           while (stack1.size()>0){
               int data=stack1.top();
               stack2.push(data);
               stack1.pop();
           }
       }

       int temp=stack2.top();
       stack2.pop();

       return temp;
    }

private:
    stack<int> stack1;//主要使用的栈
    stack<int> stack2;//辅助使用的栈
};
int main(void){

}

//调试成功！