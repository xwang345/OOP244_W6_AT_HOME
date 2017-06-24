#ifndef SICT_CONTACT_H_
#define SICT_CONTACT_H_
#include <iostream>

// TODO: add namespace here

namespace sict {


    class Contact {
    private:
        char m_name[20];
        long long* m_phoneNumbers;
        int m_noOfPhoneNumbers;
    public:
        // TODO: add the default constructor here
        Contact();
        // TODO: add the constructor with parameters here
        Contact(const char* Name, long long* PhoneNum, int Num_of_Phone);
        // TODO: add the destructor here
        ~Contact();
        // TODO: add the display function here
        void display() const;
        // TODO: add the isEmpty function here
        bool isEmpty() const;

        Contact(const Contact& P);
        Contact& operator=(const Contact&);
        Contact& operator+=(const long long phoneNumber);
    };
}
#endif
