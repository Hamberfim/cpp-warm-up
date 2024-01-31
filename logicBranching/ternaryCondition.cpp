#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector <int> numArr{10, 13, 15, 16, 17, 22, 56, 3};
    int varr_length = (int)numArr.size();

    for (int i = 0; i < varr_length; i++)
    {
        cout << numArr[i] << " % 2 is " << ((numArr[i]%2 != 0) ? "odd" : "even") << endl;
    }
    
    return 0;
}