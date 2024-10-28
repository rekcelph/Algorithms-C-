#include <iostream>
#include <list>
using namespace std;

    int main()
    {
        //can set how much numbers the container will have
        list<int> lister{1,2,3,4,5,6,7,8,9,10};

        for(auto i: lister)
        {
            cout << i << " ";
        }
        return 0;
    }
// Advantages of list:

// *It maintains its order automatically while traversing it.
// *Its length can be changed and it keeps on increasing.
// *Start from 0 and count from 1.

// Disadvantages of list:

// *Memory usage: More memory is required in the linked list as compared to an array. ...
// *Traversal: In a Linked list traversal is more time-consuming as compared to an array.