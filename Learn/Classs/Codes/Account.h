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