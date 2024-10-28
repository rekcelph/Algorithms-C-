#include <iostream>
#include <vector>
using namespace std;


    int main()
    {
        int x, n;
        vector<int> victor;

        for(x = 0; x < 10; x++)
        {
            victor.push_back(x);
        }

        cout << "Size: " << victor.size();
        cout << "\nCapacity: " << victor.capacity();
        cout << "\nMax Size: " << victor.max_size();

        //vector resizer if possible
        victor.resize(10);

        cout << "\nSize: " << victor.size();
        cout << "\n\n";

        if(victor.empty() == false)
        {
            cout << "Vector is not empty.";
        }
        else
        {
            cout << "Vector is empty.";
        }

        victor.shrink_to_fit();
        cout << "\nVector elements are: ";
        for(auto it = victor.begin(); it != victor.end(); it++)
        {
            cout << *it << " ";
        }
        return 0;
    }

    Advantge of vector:

    *substantially quicker than standard processors because 
    they can operate on numerous data components at once.

    Disadvantage of vector:

    *Less detail. Vector files are limited in dealing with complex images. ...
    *Skill and time requirements. Vector files can require more skill and time to create.
    *Limited browser support. There is less support for vector graphics on web browsers than for raster graphics.
    *Inconsistency.