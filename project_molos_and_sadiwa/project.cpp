#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>

#include "project.h"


using namespace std;

project::project()
{
    //ctor
}
void project::multiples_3_and_5()
{
      int sum=0;
    for (int a=0; a<1000;a++)
    {
        if((a%3)==0 || (a%5)==0)
        {

           sum+=a;

        }

    }
    cout<<sum<<endl;

}
void project::even_fibonacce()
{
    int sum=0;
    int constant=4000000;
    int a=0;
    int  b=1;
        int basis=0;
    while(a<=constant)
    {
            basis=a+b;
            a=b;
            b=basis;

        if(a % 2==0)
        {

            sum=sum+a;
        }

    }
    cout<<+sum<<endl;

}
void project::largest_prime_factor()
{
      long long constant=600851475143LL;
      long long highest=0LL;
      long long var=2LL;
  while (var<constant)
    {
        if(constant%var==0)
        {
            if(var>highest)
            {
                highest=var;
            }
        }


    var++;}
    cout<<highest<<endl;

}
void project::largest_palindrome_product()
{
     int nos[2];
    int highest[2];

    for(int a = 10; a < 1000; a++)
    {
        nos[0] = a;
        for(int b = 10; b < 100; b++)
        {
            ostringstream change;
            string palind;
            string final_palind= "";
            nos[1] = b;
            int product = nos[0]*nos[1];
            change << product;
            palind = change.str();
            int range = palind.length();
            for(int c = 0; c < range; c++)
            {
                final_palind = palind.at(c) + final_palind;
                if(palind == final_palind)
                {
                    for(int d = 0; d < 2; d++)
                    {
                        highest[d] = nos[d];
                    }
                }
            }
        }
    }

    for(int e = 0; e < 2; e++)
    {
        cout << highest[e] << endl;
    }



}
void project::smallest_multiple()
{
    int a = 1;
    bool b = false;
    while(!b)
    {
        for(int c = 1; c <= 20; c++)
        {

            if(a%c == 0)
            {
                if(c == 20)
                {
                    b = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        a++;
    }
    a--;
    cout << a << endl;

}
void project::sum_square_diff()
{
     long sum=0,sam,c=0;{
    for(long a=0;a<=100;a++)
    sum+=a*a;

    for(long b=0;b<=100;b++){
    c=c+b;

    }
    sam=c*c;

    }
    cout<<sam-sum<<endl;

}




void project::the_10001st_prime()
{
    int a = 2;
    for(int b = 0; b < 10001; b++)
    {
        bool c = 0;
        while(!c)
        {
            for(int d = 2; d <= a; d++)
            {

                if(d == a)
                {
                    c = true;
                    break;
                }

                else if(a%d == 0)
                {
                    break;
                }

            }
            a++;
        }
    }
    a--;
    cout << a << endl;

}
void project::largest_product_in_series()
{
    ifstream ReadFile;
    string line, str;
    string numbers = "";
    int index = 0;
    int temp = 0;
    int y = 0;
    int product = 1;
    int product2 = 1;
    int getnumber[5];
    int highestproduct[5];
    ReadFile.open("numbers.txt");

    while(ReadFile.good())
    {
        getline(ReadFile, line);
        str = line;
        numbers += str;
    }
        string a;
        for(int i = 0; i < 1000 - 4;i++)
        {
            product2 = 1;

            index = i;
            for(int k = 0; k < 5; k++)
            {
                a = numbers.at(index);
                stringstream(a) >> temp;
                y = temp;
                getnumber[k] = y;
                product2 *= getnumber[k];
                index++;
             }

            if(product < product2)
            {
                product = product2;
                for(int k = 0; k < 5; k++)
                {
                    highestproduct[k] = getnumber[k];
                }
            }

        }
      cout << product << endl;


}
void project::special_pytho_triplet()
{
     int total = 1000;

    for (int a = 1; a <= total/3; a++)
    {
        int b;
        for (int b = a + 1; b <= total/2; b++)
        {
            int c = total - a - b;
            if ( c > 0 && (a*a + b*b == c*c) )

               cout<<a*b*c<<endl;
        }
    }

}
void project::summation_of_primes()
{
    long long sum = 0LL;
    long long  constant = 2000000LL;
    for( int a = 2; a < constant; a++)
    {
        for(int b = 2; b <= a; b++)
        {
            if(b == a)
            {
                sum += a;
            }

            else if(a%b == 0)
            {
                break;
            }
        }
    }
    cout << sum << endl;

}
