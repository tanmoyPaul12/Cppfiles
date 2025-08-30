// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello World";
//     return 0;
// }

// /largest in three/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout<<"Enter 1st no."; 
//     cin>>a;
//     cout<<"Enter 2nd no."; 
//     cin>>b;
//     cout<<"Enter 3rd no."; 
//     cin>>c;
//     if(a>b && b>c)
//     {
//     cout<<"The largest no. is "<<a;
    
//     }
//     else if(b>a && b>c)
//     {
//      cout<<"The largest no. is "<<b;
    
//     }
//      else 
//      {
//         cout<<"The largest no. is "<<c;
        
//      } 
// }

// triangle

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, t;
//     cout<<"Enter three sides of the triangle :";
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     t=a+b+c;
//     if(t==180){
//         cout<<"Total"<<t;
//         cout<<"/n it is a valid triangle";
//     }
//     else
//     {
//         cout<<"Total"<<t;
//         cout<<"/n it is not a valid triangle";
//     }
// }
 

// area of a circle

// #include <iostream>
// using namespace std;
// int main()
// {
//     float r=5.0, pi=3.14159;
//     // int area=pi*r*r;
//     float area=pi*r*r;
//     cout<<"The area of the circle is : "<<area;    
//     return 0;
// }

// /calculation of simple interest/

// #include <iostream>
// using namespace std;
// int main()
// {
//     float p, r, si;
//     int n;
//     p=1000.5;
//     n=3;
//     r=15.5;
//     si= p*n*r/100;
//     cout<<"The simple interest is : "<<si;
//     return 0;
// }




// chai aur code questions arithmatic operation

#include <iostream>
using namespace std;
int main(){
    int  cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter no.of tea cups: ";
    cin >> cups;
    cout << "Enter the price of per cup:";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // give 5% discount if total price is above 100

    if (totalPrice>100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is :" << discountedPrice << endl;
    }else{
        cout << "Total price is:" << totalPrice << endl;
    }
    

    return 0;
}

