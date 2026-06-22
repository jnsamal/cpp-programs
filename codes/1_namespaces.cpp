#include <bits/stdc++.h>
using namespace std;

// Namespaces are used to create different versions of a variable

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{

    int x = 0;

    cout << "Local Variable " << x << '\n';
    cout << "1st namespace Variable " << first::x << '\n';
    cout << "2nd namespace variable " << second::x << '\n';

    return 0;
}