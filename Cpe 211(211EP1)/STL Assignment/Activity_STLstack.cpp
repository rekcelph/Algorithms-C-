#include <iostream>
#include <stack>
using namespace std;

    int main()
    {
        stack<int> stacker;
        stacker.push(1);
        stacker.push(2);
        stacker.push(3);
        stacker.push(4);
        stacker.push(5);

        int num = 0;
        stacker.push(num);
        stacker.pop();
        stacker.pop();
        stacker.pop();

        while(!stacker.empty())
        {
            cout << stacker.top() << " ";
            stacker.pop();
        }
        return 0;
    }
// Advantages of stack:

// *A Stack helps to manage the data in the 'Last in First out' method.
// *When the variable is not used outside the function in any program, the Stack can be used.
// *It allows you to control and handle memory allocation and deallocation.
// *It helps to automatically clean up the objects.

// Disadvantage of stack:

// *It is difficult in Stack to create many objects as it increases the risk of the Stack overflow.
// *It has very limited memory.
// *In Stack, random access is not possible.