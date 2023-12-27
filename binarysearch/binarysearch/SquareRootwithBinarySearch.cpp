
long long int SqrtInt(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;
    long long int mid = start + (end - start) / 2;

    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double MorePrecison(int n, int precison, int tempsol)
{
    double ans = tempsol;
    double factor = 1;
    for (int i = 0; i < precison; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
} // n is value of square

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >>n ;
    int tempsol=SqrtInt(n);
    cout<<"Square root of the entered number : "<<MorePrecison(n,5,tempsol);

    return 0;
}