//TASK 1
// #include<iostream>
// using namespace std;
// class shape
// {
//   private:
//   float height,width,length;
//   public: 
//   shape()
//   {
//     height=0;
//     width=0;
//     length=0;
//   }  
//   shape(float h,float w,float l)
//   {
//     height=h;
//     width=w;
//     length=l;
//   }
//   void setheight(float h)
//   {
//     height=h;
//   }
//   void setwidth(float w)
//   {
//     width=w;
//   }
//   void setlength(float l)
//   {
//     length=l;
//   }
//   float getheight()
//   {
//     return height;
//   }
//   float getwidth()
//   {
//     return width;
//   }
//   float getlength()
//   {
//     return length;
//   }
//   void calculateArea()
//   {
//     cout<<"Area calculation function specifier"<<endl;
//   }
//   void calculatePerimeter()
//   {
//     cout<<"Perimeter calculation function specifier"<<endl;
//   }
//   void print()
//   {
//     cout<<"length is:"<<length<<endl;
//     cout<<"width is:"<<width<<endl;
//     cout<<"height is:"<<height<<endl;
//   }


// };
// class circle :public shape
// { 
//     private:
//     float radius,area,perimeter;
//     public:
//     circle(){};
//     void set_radius(float r)
//     {
//         radius = r;
//     }
//     void calculateArea()
//     {
//         area=3.1417*radius*radius;
//     }
//     float getarea() const
//     {
//         return area;
//     }
//     void  calculatePerimeter()
//     {
//           perimeter=2*3.1417*radius;
         
//     }
//     float getperimeter() const
//     {
//         return perimeter;
//     }
//       void print()
//       {
//         cout<<"Area of circle with radius: "<<radius<<" is:"<<area<<endl;
//         cout<<"Perimeter of circle with radius: "<<radius<<" is:"<<perimeter<<endl;
//       }

// };
// class rectangle : public shape
// {
//       private:
//       float length,width,area,perimeter;
//       public:
//       shape c;
//      //length=c.getlength();
//      rectangle(float l,float w):length(l),width(w){};
//      void calculateArea()
//      {
//         area=length*width;
//         //cout<<"Area is"<<area<<endl;
//      }
//      void calculatePerimeter()
//      {
//         perimeter=2*(length*width);
//        // cout<<"Perimeter is"<<perimeter<<endl;
//      }
//     void print()

//     {
//         cout<<"Perimeter of rectangle with length: "<<length<<" and width: "<<width<<" is:"<<perimeter<<endl;
//         cout<<"Area of rectangle with length: "<<length<<" and width: "<<width<<" is:"<<area<<endl;
//     }

// };
// class triangle :public shape
// {
//      private:
//      float base,height,h,area,perimeter;
//      public:
//      triangle(float b,float h,float h1):base(b),height(h),h(h1){};
//      void calculateArea()
//      {
//         area=(base*height)/2;
    
//      }
//      void calculatePerimeter()
//      {
//         perimeter=base+height+h;
//      }
//      void print()
//      {
//         cout<<"\nperimeter of triangle is:"<<perimeter<<endl;
//         cout<<"Area of triangle is: "<<area<<endl;
//      }

    
// };
// int main()
// {
//     shape *obj;
//     obj=new shape(); 
    

//     circle *obj1;
//     obj1=new circle();
//     obj1->set_radius(5);
//     obj1->calculateArea();
//     obj1-> calculatePerimeter();
//     cout<<"****************************"<<endl;
//     cout<<"For circle: \n"<<endl;
//     obj1->print();

//  rectangle *obj3;
//  obj3=new rectangle(5,3);
//  obj3->calculateArea();
//  obj3->calculatePerimeter();
//   cout<<"****************************"<<endl;
//  cout<<"For rectangle:\n"<<endl;
//  obj3->print();
 
//  triangle *obj2;
//  obj2=new triangle(5.4,8.6,4);
//  obj2->calculateArea();
//  obj2->calculatePerimeter();
//   cout<<"****************************"<<endl;
//   cout<<"For triangle:"<<endl;
//  obj2->print();


// delete obj,obj1,obj2,obj3;
//     return 0;
// }





//Task 3

// #include<iostream>
// using namespace std;
// class Animals
// {
//   public:
//   void move()
//   {
//      cout<<"Animals can move"<<endl;
//   }
//   void eat()
//   {
//        cout<<"Animals can eat"<<endl;
//   }
// };
// class lions:public Animals
// {
//     public:
//     lions()
//     {

//     }
//     void move  ()
//     {
//         cout<<"Lion can run faster"<<endl;
//     }
//     void eat()
//     {
//         cout<<"Lions eat meat"<<endl;
//     }
// };
// class Elephants:public Animals
// {
//     public:
//      void move  ()
//     {
//         cout<<"Elephant can walk slowly"<<endl;
//     }
//     void eat()
//     {
//         cout<<"Elephants eat grass."<<endl;
//     }
// };
// class Snakes:public Animals
// {
//     public:
//      void move  ()
//     {
//         cout<<"Snake can move on ground"<<endl;
//     }
//     void eat()
//     {
//         cout<<"Snakes eat small animals and insects"<<endl;
//     }
// };

// int main()
// {
//     lions *lion;
//     lion=new lions;
//     Elephants *elephant; 
//     elephant=new Elephants;
//     Snakes *snake;
//     snake=new Snakes;
//     cout<<"lion:"<<endl;
//     lion->eat();
//     lion->move();
//     cout<<"Elephant:"<<endl;
//     elephant->eat();
//     elephant->move();
//     cout<<"Snakes:"<<endl;
//     snake->eat();
//     snake->move();

//     delete lion,elephant,snake;

//     return 0;
// }



//Task 2


// #include<iostream>
// using namespace std;

// class MenuItem {
//     public:
//         MenuItem(){}
//         void displayDescription(){
//             cout << "Menu Items are dislayed here:\n " << endl;
//         }
// };

// class Appetizer : public MenuItem {
//     public: 
//         Appetizer(){}
//         void displayDescription() {
//             cout << "\n\t\tAppetizers" << endl;
//             cout << "Chicken Corn Soups: \n" ;
//             cout << "Hot and sour Soups: \n" ;
//             cout << "Chicken Wings: \n\n" ;
//         }
// };

// class MainCourse : public MenuItem {
//     public: 
//         MainCourse(){}
//         void displayDescription() {
//             cout << "\n\t\tMain Course" << endl;
//             cout << "Chicken Karahi: \n" ;
//             cout << "Chicken Biryani: \n" ;
//             cout << "Beef Pulao \n\n" ;
//         }
// };

// class Dessert : public MenuItem {
//     public: 
//         Dessert(){}
//         void displayDescription() {
//             cout << "\n\t\tDesserts" << endl;
//             cout << "Kheer: \n" ;
//             cout << "Ice Cream: \n" ;
//             cout << "Cake: \n\n" ;
//         }
// };

// int main(){
//     MenuItem *m;
//     m = new MenuItem;
//     m->displayDescription();

//     Appetizer *a;
//     a = new Appetizer;
//     a->displayDescription();

//     MainCourse *mc;
//     mc = new MainCourse;
//     mc->displayDescription();

//     Dessert *d;
//     d = new Dessert;
//     d->displayDescription();

//     delete m,a,d;

//      return 0;

// }





// #include <iostream>
// using namespace std;
// class Account {
// protected:
//     double balance;

// public:
//     Account(double initial_balance = 0) : balance(initial_balance) {}

//     void withdraw(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawal of $" << amount << " successful." << endl;
//         } else {
//             cout << "Insufficient funds." << endl;
//         }
//     }

//     void deposit(double amount) {
//         balance += amount;
//         cout << "Deposit of $" << amount << " successful." << endl;
//     }

//     double getBalance() const {
//         return balance;
//     }
// };


// class SavingsAccount : public Account {
// public:
//     SavingsAccount(double initial_balance = 0) : Account(initial_balance) {}

//     void withdraw(double amount) {
//         double withdrawalFee = 1.0; 
//         if (amount + withdrawalFee <= balance) {
//             balance -= (amount + withdrawalFee);
//             cout << "Withdrawal of $" << amount << " successful. Withdrawal fee: $" << withdrawalFee << endl;
//         } else {
//             cout << "Insufficient funds." << endl;
//         }
//     }
// };


// class CheckingAccount : public Account {
// public:
//     CheckingAccount(double initial_balance = 0) : Account(initial_balance) {}

//     void withdraw(double amount) {
//         double overdraftFee = 5.0; 
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawal of $" << amount << " successful." << endl;
//         } else if (amount <= balance + overdraftFee) {
//             balance -= (amount + overdraftFee);
//             cout << "Withdrawal of $" << amount << " successful. Overdraft fee: $" << overdraftFee << endl;
//         } else {
//             cout << "Insufficient funds." << endl;
//         }
//     }
// };

// int main() {
//     const int numAccounts = 2;
//     Account* accounts[numAccounts];

//     accounts[0] = new SavingsAccount(100);
//     accounts[1] = new CheckingAccount(100);

//     for (int i = 0; i < numAccounts; ++i) {
//         cout << "Account " << i + 1 << " Balance: $" << accounts[i]->getBalance() << endl;
//         accounts[i]->withdraw(50);
//         cout << "Account " << i + 1 << " Balance: $" << accounts[i]->getBalance() << endl;
//         accounts[i]->withdraw(70); // Attempt to withdraw more than balance
//         cout << "Account " << i + 1 << " Balance: $" << accounts[i]->getBalance() << endl;
//         cout << endl;
//     }

    
//     for (int i = 0; i < numAccounts; ++i) {
//         delete accounts[i];
//     }

//     return 0;
// }