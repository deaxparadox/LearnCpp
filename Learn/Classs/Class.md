## Class 

Class **Account** contains a **name** *data member* that stores that account holder's name. A class's data members maintain data for each object of the class.

Class **Account** also contains member function **setName** that a programm call to store a name in an **Account** object, and member function **getName** that a program can call to obtain a name for an **Accout** object.

file: Account.h

```cpp 

    #include <string>

    class Account {
        public:
        void setName(std::string accoutName) {
            name = accoutName;
        }

        std::string getName() const {
            return name;
        }

        private:
            std::string name;
    };


```

file : AccounTest.cpp

```cpp

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount;

    cout << "Initial account name is: " << myAccount.getName();

    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout << "Name in the object myAccount is: "
        << myAccount.getName() << endl;
}

```

## Initializing Objects with Constructors

Each class can define a **constructor** that specifies *custom initialization* for objects of that class. A **constructor** is a special member function thatmust have the *same name* as the class.


```cpp
#include <string>

class Account {
    public:

        // constructor initializes data member name with parameter accoutName
        explicit Account(std::string accountName) :name{accountName} {

        }

        // function to set the account name 
        void setName(std::string accoutName) {
            name = accoutName;
        }

        // function to retreive the account name 
        std::string getName() const {
            return name;
        }

    private:
        std::string name;   // account name data member
};  // end class Account
```

A constructor's *parameter list* specifies pieces of data required to initialized an object 

```cpp
explicit Account(std::string accountName)
```

inidicates that the constructor has one **string** parameter call **accountName**. When you create a new Account object, you must pass  a person's name to the constructor, which will recevie that name in the *parameter* accountName. The constructor will then use accountName to initialize that *data member* name.

The constructor uses a **member-initializer list**

```cpp
:name\{accountName\}
```

to initialize the **name** data member with the value of the parameter **accountName**. *Member initializers* appear between a constructor's parameter list and the left brace that begins the constructor's body. 

The member initializer list is separated from the parameter list with a colon (:). Each member initializer consists of a data member's *variable name* followed by parentheses  containing the member's *initial value*.


#### *explicit* Keyword

We declared this constructor **explicit**, because it takes a single parameter.


## Initializing Account Ojbect When They're created