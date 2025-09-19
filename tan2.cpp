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





                                        // chai aur code questions
                                        // arithmatic operation

// #include <iostream>
// using namespace std;
// int main(){
//     int  cups;
//     double pricePerCup, totalPrice, discountedPrice;

//     cout << "Enter no.of tea cups: ";
//     cin >> cups;
//     cout << "Enter the price of per cup:";
//     cin >> pricePerCup;

//     totalPrice = cups * pricePerCup;

//     // give 5% discount if total price is above 100

//     if (totalPrice>100){
//         discountedPrice = totalPrice - (totalPrice * 0.05);
//         cout << "Discounted price is :" << discountedPrice << endl;
//     }else{
//         cout << "Total price is:" << totalPrice << endl;
//     }

//     return 0;
// }


                                        // assignment operation



// #include<iostream>
// using namespace std;
// int main(){
//      int teaBags;
//      cout << "Enter number of tea bags you have:";
//      cin >> teaBags;
//      if (teaBags<10)
//      {
//         teaBags += 5;
//     }
//      cout << "Your total tea bags are:" << teaBags << endl;
//      return 0;
// }


                                        // logical operation




// #include <iostream>
// using namespace std;
// int main(){
//     bool isStudent;
//     int cups;
//     cout << "Are you a student(1 for yes 0 for no) ?" << endl;
//     cin >> isStudent;
//     cout << "How many cups of tea have you purchased ?";
//     cin >> cups;
//     if(isStudent || cups > 15){
//         cout << "You are eligible for discount" << endl;
//     }else{
//         cout << "You are NOT eligible for discount" << endl;
//     }
//     return 0;
// }



                                        // if-else operation


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string teaOrder;
//     cout << "Enter your tea  order:";
//     getline(cin,teaOrder);
//     if(teaOrder == "Green Tea"){
//         cout << "You have ordered Green Tea";
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int hours;
//     cout << "Enter the current Hour (0-23):";
//     cin >> hours;
//     if (hours>=8 && hours<=18)
//     {
//         cout << "We are OPEN!" <<endl;
//     }else{
//         cout << "We are CLOSED!" <<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int cups;
//     double pricePerCup = 2.6, discount,totalPrice;
//     cout << "How many cups of tea you have ordered ?" << endl;
//     cin >> cups;

//     totalPrice = cups * pricePerCup;

//     if(cups>20){
//         discount = 0.20;
//         cout << "Applied 20% discount\n";
//     }else if(cups>=10 && cups<=20){
//         discount = 0.10;
//         cout << "Applied 10% discount\n";
//     }else{
//         discount = 0;
//         cout << "Sorry no discount\n";
//     }

//     totalPrice -= (totalPrice * discount);
//     if(cups>=10){
//         cout <<"Total Price after discount is:" << totalPrice << endl;
//     }else{
//         cout <<"Total Price is:" << totalPrice << endl;
//     }

//     return 0;
// }


                                                // switch case



// #include<iostream>
// using namespace std;
// int main(){
//    int choice;
//    double price;
//     cout <<"Select your tea\n";
//     cout <<"1.Green Tea\n";
//     cout <<"1.Black Tea\n";
//     cout <<"1.Oolong Tea\n";
//     cout << "Enter your choice in number:";

//     cin >> choice;
//     switch(choice){
//         case 1:
//             price = 2.5;
//             cout <<"You selected Green Tea. Price:"<< price << endl;
//             break;
//         case 2:
//             price = 4.5;
//             cout <<"You selected Black Tea. Price:"<< price << endl;
//             break;
//         case 3:
//             price = 7.5;
//             cout <<"You selected Oolong Tea. Price:"<< price << endl;
//             break;
//         default:
//             cout << "Invalid choice" << endl;
//     }
//     return 0;
// }



                                                        // loops



// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     int teaCups;
//     cout<<"Enter the number of tea cups to serve:";
//     cin>>teaCups;

//     while (teaCups>0)
//     {
//         teaCups--;
//         cout<<"Serving a cup of tea\n"<<"Remaining "<<teaCups<<endl;
//     }
//     cout<<"All tea cups are served"<<endl;

//     return 0;
// }



// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string response;
//     do
//     {
//         cout<<"Do you want more tea (yes/no):"<<endl;
//         cin>> response;
//     } while (response !="no" && response!="No");
//     return 0;
// }



// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     int teaCups = 5;
//     for (int i = 1; i <= teaCups; i++)
//     {
//         cout << "Brewing "<<i<<" cup of tea.."<< endl ;
//     }
//         cout<<"All brewed loop ended";
//     return 0;
// }



// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string response;

//     while (true)
//     {
//         cout<<"Do you want more tea (type 'stop' to exit)?:";
//         getline(cin,response);

//         if(response=="stop"){
//             break;
//         }
//         cout<<"Here is your another cup of tea\n"<<endl;
//     }
//     cout<<"No more tea will be served";
//     return 0;
// }

                                        // Functions

// #include<iostream>
// using namespace std;

// int main(){

//        return 0;
// }

                                        // arrays
                                          // array always goes pass by reference






                                             // Oops



// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name = "Tanmoy";

//     void sayHello() {   // Method (member function)
//         cout << "Hello, my name is " << name << endl;
//     }
// };

// int main() {
//     Person p;
//     p.name = "Rahul";
//     p.sayHello();  // calling the method
//     return 0;
// }




// #include <iostream>
// #include <vector>

// using namespace std;

// // class name always starts with capital letter =>(C)hai || object with small letter

// class Chai{
//     // data members (attributes)
//     public:
//             string teaName;
//             int serving;
//             vector<string> ingredients;

//             // Member function
//             void displayChaiDetails(){
//                 cout << "Tea Name:"<< teaName << endl;
//                 cout << "Servings:"<< serving << endl;
//                 cout << "Ingredients:";
//                 for(string ingredent:ingredients){
//                     cout << ingredent <<" ";
//                 }
//                 cout<<endl;
//             }

// };

// int main(){
//     Chai chaiOne; //object made first class name then obj

//     chaiOne.teaName = "Black Tea";
//     chaiOne.serving = 2;
//     chaiOne.ingredients = {"Water", "Tea", "sugar", "Honey"};

//     chaiOne.displayChaiDetails();

//     //another object

//     Chai chaiTwo;
//     chaiTwo.teaName="Masala Chai";
//     chaiTwo.serving=5;
//     chaiTwo.ingredients={"Water", "Tea", "sugar","Ginger","Masala"};
//     chaiTwo.displayChaiDetails();
//     return 0;
// }



                            // Constructor, destructor and Copy Constructor


// #include<iostream>
// #include<vector>

// using namespace std;

// class Chai{

// };

// int main(){

//     return 0;
// }




                                        // Getter Setter



// #include <iostream>
// #include <vector>

// using namespace std;

// class Chai
// {
// private:
//     string teaName;
//     int serving;
//     vector<string> ingredients;

// public:
//             //default constructor

//     Chai()               
//     {
//         teaName = "unknown";
//         serving = 3;
//         ingredients = {"water", "tea leaves"};
//     }

//            // parameterized constructor  in int main used  with default constructor 

//     // Chai(string name, int ser, vector<string> ingr)
//     // {
//     //     teaName = name;
//     //     serving = ser;
//     //     ingredients = ingr;
//     // }


//          //getter teaname
//     string getTeaName()
//     {
//         return teaName;
//     }
//         // setter teaname
//     void setTeaName(string name)
//     {
//         // any logic we can apply with (name)
//         teaName = name;
//     }


//         //getter serving
//     int getServing()
//     {
//         return serving;
//     }
//         // setter serving
//     void setServing(int ser)
//     {
//         serving = ser + 2; //we can write here like this
//         // serving = ser;
//     }


//     // getter for ingredients
//     vector<string> getIngredients()
//     {
//         return ingredients;
//     }
//     // setter for ingredients
//     void setIngredients(vector<string> ing)
//     {
//         ingredients = ing;
//     }

    
//     void displayChaiDetails()
//     {
//         cout << "Tea Name:" << teaName << endl;
//         cout << "Servings:" << serving << endl;
//         cout << "Ingredients:";
//         for (string ingredent : ingredients)
//         {
//             cout << ingredent << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     // Chai chai("Ginger", 2, {"water"}); // object made for parameterized
//     Chai chai; // object made for default

//     //chai.teaName = "masala tea";  // cant access like this due to private getset required
//     // chai.serving = 7; not possible like this


//     chai.setTeaName("masala tea");
//     // cout << chai.getTeaName(); //getter to access the setter

//     chai.setServing(7);

//     chai.setIngredients({"water","tea leaves", "sugar", "ginger"});

//     chai.displayChaiDetails();

//     return 0;
// }

                // ok so default constructor cant access  but parameterized can access and for normal to access we need getter setter   


                // if i write default constructor then 2nd one and for parameterized 1st one bcz parameterized can access without getset default also can but not like chai.teaName = "masala tea";


                

                                                //delegating constructor

// #include<iostream>
// #include<vector>

// using namespace std;

// class Chai{
//     public:
//         string teaName;
//         int servings;
//         vector<string> ingredients;


//         //deligating constructor used if parameterized is used with normal constructor no need

//         Chai(string name): Chai(name, 2, {"water", "tealeaves", "sugar"}){}

//         //main constructor parameterized 

//         Chai(string name, int serve, vector<string> ingr){
//             teaName = name;
//             servings = serve;
//             ingredients = ingr;
//         }

//         void displayChaiDetails(){
//             cout << "Tea Name:" << teaName << endl;
//             cout << "Servings:" << servings << endl;
//             cout << "Ingredients:";
//             for (string ingredent : ingredients)
//                 {
//                     cout << ingredent << " ";
//                 }
//             cout << endl;
//         }



// };


// int main(){
//     Chai quickChai("Quick chai");
//     quickChai.displayChaiDetails();


//     return 0;
// }


                                            // Friend functions



// #include<iostream>
// #include<vector>

// using namespace std;

// class Chai{
//     private:
//         string teaName;
//         int servings;
    
//     public:
//         Chai(string name, int serve): teaName(name), servings(serve){}

//         // Chai(string name, int serve){
//         //     teaName = name;
//         //     servings = serve;
//         // }
//                         // both are parameterized constructor just different ways


//         friend bool compareServings(const Chai &chai1, const Chai &chai2);
        
//             void display() const {
//                 cout <<"teaname:" << teaName << endl;
//                 cout <<"Servings:" << servings << endl;
//             }


// };

// bool compareServings(const Chai &chai1, const Chai &chai2){
//     return chai1.servings > chai2.servings;
// }
 
// int main(){
//     Chai masalaChai("masala chai", 14);
//     Chai gingerChai("ginger chai", 19);
    
//     masalaChai.display();
//     gingerChai.display();

//     if (compareServings(masalaChai, gingerChai))
//     {
//         cout << "Masala chai is having MORE servings";
//     }else{
//         cout << "Ginger chai is having MORE servings";
//     }
    

//     return 0;
// } 



                                // Encapsulation


// #include<iostream>

// using namespace std;

// class BankAccount{
//     private:
//         string accountNumber;
//         double balance;
    
//     public:
//         BankAccount(string acc, double initBal){
//             accountNumber = acc;
//             balance = initBal;
//         }

//             // getter 
        
//         double getBalance() const {
//             return balance;
//         }
//             // setter
        
//         // void setBalance(double inbal){
//         //     balance = inbal;
//         // }     //no setter else anyone Can update balance

//             // method to deposit money

//         void deposit(double amount){
//             if(amount > 0){
//                 balance += amount;
//                 cout<<"Deposited amount:" << amount <<endl;   
//             }else{
//                 cout<<"Invalid deposited amount"<< amount << endl;
//             }
//         }
//          //balance lekhle balance expose hoijaibo so  amount oi display krmu r setBalance nai so balance dekte prto na
         
//             // withdraw method
        
//         void withdraw(double amount){
//             if(amount > 0 && amount <= balance){
//                 balance -= amount;
//                 cout << "Withdraw successful:" <<amount<< endl;
//             }else{
//                 cout << "Insufficient Balance:" <<amount<< endl;
//             }
//         }

// };


// int main(){
//     BankAccount myAccount("122342467" , 5000);
//     myAccount.getBalance(); // na lekhle o prblm nai bcz update ba show to krtm na 
//     myAccount.deposit(400);

//     return 0;

// }

       // So basically in this ex just cleared few confusion regarding getter how to show and when to show or hide

// #include<iostream>

// using namespace std;

// class BankAccount{
//     private:
//         string accountNumber;
//         double balance;
    
//     public:
//         BankAccount(string acc, double initBal){
//             accountNumber = acc;
//             balance = initBal;
//         }

//             // getter 
        
//         double getBalance() const {
//             return balance;
//         }
//             // setter
        
//         // void setBalance(double inbal){
//         //     balance = inbal;
//         // }     //no setter else anyone Can update balance

//             // method to deposit money

//         void deposit(double amount){
//             if(amount > 0){
//                 balance += amount;
//                 cout<<"Deposited amount:" << amount <<endl;   
//             }else{
//                 cout<<"Invalid deposited amount"<< amount << endl;
//             }
//         }
//          //balance lekhle balance expose hoijaibo so  amount oi display krmu r setBalance nai so balance dekte prto na
         
//             // withdraw method
        
//         void withdraw(double amount){
//             if(amount > 0 && amount <= balance){
//                 balance -= amount;
//                 cout << "Withdraw successful:" <<amount<< endl;
//             }else{
//                 cout << "Insufficient Balance:" <<amount<< endl;
//             }
//         }

// };


// int main(){
//     BankAccount myAccount("122342467" , 5000);
//     // myAccount.getBalance(); // na lekhle o prblm nai bcz update ba show toh krtm na 
//     cout<<"Initial balance:"<< myAccount.getBalance()<<endl;
//     myAccount.deposit(400);
//     cout<<"After deposit:"<< myAccount.getBalance()<<endl;
//     myAccount.withdraw(100);
//     cout<<"After withdraw:"<< myAccount.getBalance()<<endl;

//     return 0;

// }




                                    // Abstract Class , derived class and virtual function
 


// #include<iostream>
// #include<string>

// using namespace std;

// class Tea{
//     public:
//        virtual void prepareIngredients() = 0; //virtual function
//        virtual void brew() = 0;
//        virtual void serve() = 0;

//        void makeTea(){
//         prepareIngredients();
//         brew();
//         serve();
//        }
//     };


//         //derived class
// class GreenTea: public Tea{
// public:
//     void prepareIngredients() override{
//         cout<<"Green leaves water sugar is ready"<<endl;
//     }
//     void brew() override{
//         cout<<"Green Tea Brewed"<<endl;
//     }
//     void serve() override{
//         cout<<"Green Tea Tea served"<<endl;
//     }
// };
//          // i can make as many diff derived class as i want 
// class MasalaTea: public Tea{
// public:
//     void prepareIngredients() override{
//         cout<<"Tea leaves water sugar is ready"<<endl;
//     }
//     void brew() override{
//         cout<<"Masala Tea Brewed"<<endl;
//     }
//     void serve() override{
//         cout<<"Masala Tea Tea served"<<endl;
//     }
// };


// int main(){

//     GreenTea grenTea;
//     MasalaTea masTea;

//     grenTea.makeTea();
//      // makeTea method derived cls a banani hoise na still avaliable ase bcz agr 3 ta method implement hoile maketea o avaliable hoibo bcz maketea a internally oi 3 ta method re oi call kore
//      masTea.makeTea();
//     return 0;
// }



                    //    practice practice

// #include<iostream>
// #include<string>
// #include<vector>

// using namespace std;

        
// class Tea{
// private:
//     int cups;
//     string teaName;

// public:
//     Tea(int c, string n){
//         cups = c;
//         teaName = n;
//     }  

//     string getTeaname(){
//         return teaName;
//     }


//     // void display(){
//     //     cout<<"Tea cups are:"<<cups<<endl;
//     //     cout<<"Tea name is:"<<teaName<<endl;
//     // }


// };



// int main(){
//     Tea chai(6,"Masala Chai");
//     cout<<"Teaname is:"<<chai.getTeaname()<<endl;

//     return 0;
// }
               

// #include<iostream>
// #include<string>
// #include<vector>

// using namespace std;

        
// class Tea{
// private:
//     int cups;
//     string teaName;

// public:
//     Tea(){
//         cups = 5;
//         teaName = "Green Tea";
//     }  

    


//     void display(){
//         cout<<"Tea cups are:"<<cups<<endl;
//         cout<<"Tea name is:"<<teaName<<endl;
//     }


// };

// int main(){
//     Tea chai;
//     // chai.teaName = "Masala Tea"; //not possible without friend or getter
//     chai.display(); 

//     return 0;
 
// }



                // inheritance  , final keyword

// #include<iostream>
// #include<string>
// #include<vector>

// using namespace std;

// // base/main/parent/original class 

// class Tea{
// protected:
//     string teaName;
//     int servings;
// public:
//     Tea(string name, int serve): teaName(name) , servings(serve){
//         cout<<"Tea constructor called " << teaName << endl;
//     }   
//                 // override krsi brew so eta print hoito na
//      virtual void brew() const {
//         cout<<"Brewing"<< teaName <<"with generic method"<<endl;
//      }
//      virtual void serve() const {
//         cout<<"Serving"<< servings <<" cup of tea with generic method"<<endl;
//      }
//      // virtual destructor
//      virtual ~Tea(){
//         cout<<"Destructor called"<<teaName<<endl;
//      }

// };


// class GreenTea: public Tea{
//     public:
//                     //constructor deligating
//         GreenTea(int serve):Tea("Green Tea",serve){
//             cout << "Green Tea deligating constructor called" << endl;
//         }

//         void brew() const override{
//             cout<<"Brewing"<<teaName<< " by steeping green tea leaves"<<endl;
//         }
//         // void serve() const override{
//         //     cout <<"serving"<<servings <<" cups of tea" <<endl;
//         // }
//                     //destructor
//         ~GreenTea(){
//             cout<<"Destructor called"<<endl;
//         }

// };


// class MasalaTea : public Tea{
//     public:
//         MasalaTea(int serve):Tea("Masala Tea",serve) {
//             cout << "Masala Tea deligating constructor called" << endl;
//         }
//         // final keyword cant inherit from masala tea can inherit from tea but this is final 
//         void brew() const override final{
//              cout<<"Brewing"<<teaName<< " with spices and milk"<<endl;
//         }

//         void serve() const override{
//             cout <<"serving"<<servings <<" cups of masala tea " <<endl;
//         }

//         ~MasalaTea(){
//             cout<<"destructor called"<<endl;
//         }
// };
//                 //inherit from masala class but brew cant override bcz of final



// // class SpicyTea: public MasalaTea{
// //     public:
// //                 // cant overrride 
// //         // void brew() const override{
// //         //      cout<<"Brewing"<<teaName<< " with spices and milk"<<endl;
// //         // }
// //                 // can override no final written in masala serve method
// //         void serve() const override{
// //             cout <<"serving"<<servings <<" cups of tea" <<endl;
// //         }
// // };





// int main(){

//     Tea* tea1 = new GreenTea(4);
//     Tea* tea2 = new MasalaTea(6);

//     tea1->brew();
//     tea1->serve();

//     tea2->brew();
//     tea2->serve();

//     delete tea1;
//     delete tea2;

//     return 0;
// }


                                                        // -------------------------------------