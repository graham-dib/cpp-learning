#include "PPP.h"
#include "PPP_support.h"

int main() {
    int current = 'a';
    while (current != 'z' + 1){
        cout << char(current) << " ";
        ++current;
    }
    cout << endl;
}