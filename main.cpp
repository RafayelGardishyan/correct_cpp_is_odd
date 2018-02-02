#include <iostream>
#include <stdlib.h>
using namespace std;

/// RJCB: is_odd main function. is_odd needs exactly one argument, will
/// return exit code 1 otherwise. If the argument is not an
/// integer, or a number too big, the exit code will be 1.
int main(int argc, char* argv[])
{
    //RJCB: But the user may also supply 2, 3, or more arguments. Only an argc of 2 is OK
    if (argc != 2) return 1;
    //RJCB: two slashes within code, three slashes above a function/class/etc
    ///Check if there is a first argument
    //RJCB: We know there is a first argument, as argc > 1
    //if (argv[1]){
        ///Try to convert argument to int
        try{
            // RJCB: An odd number uses modulo
            int odd = atoi(argv[1]) % 2;
            ///If the integer is not odd return false
            if(odd == 0){
                cout << "false" << "\n";
            }
            ///If the integer is odd return true
            else if (odd == 1){
                cout << "true" << "\n";
            }
			else{
				return 1;
			}
        ///If the argument is not an integer don't return anything
        }catch(const invalid_argument){
            return 1;
        }
    //}

    //May or may not write this. It is added by the compiler if not.
    return 0;
}
