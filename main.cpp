#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{   if (argc == 1) return 1;
    if (argv[1]){
        int odd = atoi(argv[1]) / 2;
        if(odd == 0){
            cout << "false" << "\n";
        }
        else{
            cout << "true" << "\n";
        }
    }
    return 0;
}
