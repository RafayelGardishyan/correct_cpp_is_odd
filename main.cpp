#include <iostream>
#include <stdlib.h>
using namespace std;
///Main Function (Returns nothing, true of false)
int main(int argc, char* argv[])
{
    if (argc == 1) return 1;
    ///Check if there is a first argument
    if (argv[1]){
        ///Try to convert argument to int
        try{
            int odd = atoi(argv[1]) / 2;
            ///If the integer is not odd return false
            if(odd == 0){
                cout << "false" << "\n";
            }
            ///If the integer is odd return true
            else{
                cout << "true" << "\n";
            }
        ///If the argument is not an integer don't return anything
        }catch(invalid_argument){
            return 1;
        }
    }
    return 0;
}
///<EOF>
