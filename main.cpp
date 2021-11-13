#include <iostream>
using namespace std;

int main() {
    int n=0, a=0, b=1, c=a+b;
    cin>>n;

    if (n>=2){
        cout<< b <<endl;
        for (int i=2; i<(n+1) ;i++) {
            cout << c << endl;
            a = b;
            b = c;
            c = a + b;
        }

    }else {
            cout<< "errore" <<endl;
        }
    return 0;
}
