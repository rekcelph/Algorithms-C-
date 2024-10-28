#include <iostream>
#include <queue>
using namespace std;

    int main()
    {
        queue<char> queueueue;
        queueueue.emplace('S');
        queueueue.emplace('h');
        queueueue.emplace('i');
        queueueue.emplace('r');
        queueueue.emplace('a');
        queueueue.emplace('s');
        queueueue.emplace('u');

        while(!queueueue.empty())
        {
            cout << " " << queueueue.front();
            queueueue.pop();
        }
        return 0;
    }
// Advantages of queue:

// Data queues are fast and optimized.
// Queues are flexible.
// They can handle multiple data types.

// Disadvantage of queue:

// *No Random Access. Queues only allow sequential access to elements. ...
// *Additional Memory Overhead. ...
// *Increased Processing Latency. ...
// *No Preemption. ...
// *Additional Programming Complexity. ...
// *Not Cache Friendly. ...
// *Restricted Access. ...
// *Blocking Operations.