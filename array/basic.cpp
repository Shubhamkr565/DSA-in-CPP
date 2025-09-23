// What would be the output of the below program

// #include <iostream>
// using namespace std;
// int main( )
// {
// int i;
// int a[5] = {1};
// for (i = 0; i < 5; i++)
// cout<<a[i];
// return 0;
// }


// What would be the output of the below program


// #include <iostream>
// using namespace std;
// int main( )
// {
// char array[26], i ;
// for ( i = 0 ; i <= 25 ; i++ )
// {
// array[i] = 'A' + i ;
// cout<<array[i] ;
// }
// return(0);
// }


void func(int a[5])
{
    int i;
    for(i = 1; i < 4; i++)
        a[i] = a[i-1] – a[i] + a[i+1];
}