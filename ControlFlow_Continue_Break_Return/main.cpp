#include <iostream>

using namespace std;

/// Continue -> continue can only us in loops

// int main()
// {
//     for(int i =0; i<=5;i++)
//     {
//         if(i%2 == 0)
//         {
//             continue;
//         }
//         cout <<" i = "<<i<< " Darshan" << endl;
//     }
//     return 0;
// }


/// Break

// int main()
// {
//     for(int i =0; i<5;i++)
//     {
//         if(i == 2)
//         {
//             break;
//         }
//         cout << "Hello World!" << endl;

//     }
//     return 0;
// }



/// Return

int main()
{
    for(int i =0; i<5;i++)
    {
        if(i == 2)
        {
            return 0;
        }
        cout << "Hello World!" << endl;
    }
    return 0;
}
