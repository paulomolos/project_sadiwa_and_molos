#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>
#include <numeric>
#include <string.h>
#include "../include/project.h"
#define N 15
#define silver_swan 100
#define qwerty 50
#define ewan 5


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

void project::largest_product_grid()
{

   vector<vector<int> > grid;

    ifstream stream("grid.txt");
    string line;

    char *tok;

    if (stream.is_open())
    {
        while(stream.good())
        {
            getline(stream, line);

            tok = strtok((char *)line.c_str(), " ");

            vector<int> row;

            while (tok != NULL)
            {
                int field;
                stringstream ss;
                ss << tok;
                ss >> field;
                row.push_back(field);

                tok = strtok(NULL, " ");
            }
            grid.push_back(row);
        }
        stream.close();
    }

    unsigned long highest = 0;


    for (int i=0; i < 20; i++)
    {
        vector<int> row = grid.at(i);

        for (int c=0; c < 20-3; c++)
        {
            unsigned long prod = row.at(c) * row.at(c+1) * row.at(c+2) * row.at(c+3);
            if (prod > highest)
                highest = prod;
        }
    }


    for (int i=0; i < 20-3; i++)
    {
        vector<int> row1, row2, row3, row4;

        row1 = grid.at(i);
        row2 = grid.at(i+1);
        row3 = grid.at(i+2);
        row4 = grid.at(i+3);

        for (int c=0; c < 20; c++)
        {
            unsigned long prod = row1.at(c) * row2.at(c) * row3.at(c) * row4.at(c);

            if (prod > highest)
                highest = prod;
        }
    }


    for (int i=0; i < 20-3; i++)
    {
        vector<int> row1, row2, row3, row4;

        row1 = grid.at(i);
        row2 = grid.at(i+1);
        row3 = grid.at(i+2);
        row4 = grid.at(i+3);

        for (int c=0; c < 20-3; c++)
        {
            unsigned long prod = row1.at(c) * row2.at(c+1) * row3.at(c+2) * row4.at(c+3);

            if (prod > highest)
                highest = prod;
        }
    }


    for (int i=3; i < 20; i++)
    {
        vector<int> row1, row2, row3, row4;

        row4 = grid.at(i);
        row3 = grid.at(i-1);
        row2 = grid.at(i-2);
        row1 = grid.at(i-3);

        for (int c=0; c < 20-3; c++)
        {
            unsigned long prod = row4.at(c) * row3.at(c+1) * row3.at(c+2) * row4.at(c+3);

            if (prod > highest)
                highest = prod;
        }
    }

    cout<< highest;
}

void project::divisible_triangular_number()

{

	long long tri = 0;
	int div = 0;

	for(long x = 0; div <= 500; x++)
	{
		div = 0;
		long root = sqrt(double(tri));

		for(long a = 1; a <= root; a++)
		{
			if(tri % a == 0)
			{
				if(tri / a == a)
					div += 1;
				else
					div += 2;
			}
		}

		tri += x;
	}

	cout << tri << endl;
}


void project::largest_sum()
{
    char tatalon[qwerty];
    char cavite[qwerty+ewan];
    for(short int i=0 ; i < qwerty+ewan ; i++) cavite[i]=0;

    for(short int i=1 ; i <= silver_swan ; i++)
    {
        std::cin>>tatalon;

        for(short int i=0 ; i < qwerty+ewan ; i++)
        {
            if(i < qwerty) cavite[i] = cavite[i] + tatalon[i]- 48;

            while(cavite[i] >= 10)
            {
                cavite[i+1] += cavite[i]/10;
                cavite[i] = cavite[i]%10;
            }
        }
    }

    for(short int i = qwerty+ewan-1 ; i >= qwerty+ewan-20 ; i--)
    {
        int kalamansi = cavite[i];
        std::cout<<kalamansi<<" ";
    }

    std::cout<<"\n";
}

void project::longest_collatz_sequence()
{
      const int number = 1000000;

long long mahabangmahaba = 0LL;
long long startingNumber = 0LL;
long long sequence;

for (int i = 2; i <= number; i++) {
    int length = 1;
    sequence = i;
    while (sequence != 1) {
        if ((sequence % 2) == 0) {
            sequence = sequence / 2;
        } else {
            sequence = sequence * 3 + 1;
        }
        length++;
    }


    if (length > mahabangmahaba) {
        mahabangmahaba = length;
        startingNumber = i;
   cout<<i<<endl;}
}
cout <<"the sequence length is:"<<mahabangmahaba<<endl;


}

void project::diophantine_reciprocals_a()
{
    cout<<"Unable to meet program requirements.."<<endl;
}

void project::power_digit_sum()
{
     enum { EXPONENT = 1000 } ;
    const double LOG10 = std::log(10.0) / std::log(2) ;
    const int NDIGITS = int( ( EXPONENT + LOG10 ) / LOG10 )  ;

    std::vector<int> digits( NDIGITS ) ;
    digits.front() = 1 ;

    for( int i = 0 ; i < EXPONENT ; ++i )
    {
      int carry = 0 ;
      for( int j = 0 ; j < NDIGITS ; ++j )
      {
          int value = digits[j] + digits[j] + carry ;
          if( value > 9 ) { carry = 1 ; value -= 10 ; }
          else carry = 0 ;
          digits[j] = value % 10 ;
      }
    }
    std::cout << std::accumulate( digits.begin(), digits.end(), 0 ) << '\n' ;
}

void project::number_letter_counts()
{
    cout<<"Unable to meet program requirements.."<<endl;
}

void project::max_path_sum_one()
{
    cout<<"Unable to meet program requirements.."<<endl;
}

void project::counting_sundays()
{
    cout<<"Unable to meet program requirements.."<<endl;
}

void project::factorial_digit_sum()
{
    cout<<"Unable to meet program requirements.."<<endl;
}