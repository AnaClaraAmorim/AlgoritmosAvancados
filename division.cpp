// C++ program to find sum, multiplication of all divisors of
// a natural number
#include<bits/stdc++.h>
using namespace std;
 
long long  int  num_divisors = 0 ,sum_divisor = 0, mul_divisors = 1;
const long long int MOD = 1e9 + 7;

void divisors(long long int num)
{
   
    if(num == 1) // there will be no proper divisor
      return ;
    // find all divisors which divides 'num'
    for (long long int i=2; i<=sqrt(num); i++)
    {
        // if 'i' is divisor of 'num'
        if (num%i==0)
        {
            num_divisors++;
            // if both divisors are same then add
            // it only once else add both
            if (i==(num/i)){
                sum_divisor = (sum_divisor + i) % MOD;
                mul_divisors = (mul_divisors * i)%MOD;
            }
            else{
                sum_divisor = (sum_divisor + (i + num/i)% MOD) % MOD ;
                num_divisors++;
                mul_divisors = (mul_divisors * (i))%MOD;
                mul_divisors = (mul_divisors * ((num/i)%MOD))% MOD;
               
            }
        }
    }
 
    // Add 1 to the sum_divisor and num_divisors as 1 is also a divisor
    // Add num to the sum_divisor and to num_divisior num is also a divisor
    sum_divisor = (sum_divisor + 1 + num) % MOD;
    num_divisors +=2;
    //multiply num to the mul_divisor, num is also a divisor
    mul_divisors = (mul_divisors * (num%MOD))% MOD;
}


 
// Driver program to run the case
int main()
{
    long long int num;
    cin >> num;
    divisors(num);
    cout << num_divisors << ' '<< sum_divisor << ' '<< mul_divisors;
}