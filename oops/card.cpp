#include<bits/stdc++.h>
using namespace std;
class Card{
    private:
    string cardNumber;
    string cardHolder;
    string bank;

    public:
    Card() {
        cout << "Card object created." << endl;
    }
    Card(string cardNumber, string cardHolder, string bank) {
        this->cardNumber = cardNumber;
        this->cardHolder = cardHolder;
        this->bank = bank;
        cout << "Card object created with details." << endl;
    }
    Card(const Card &other) {
        this->cardNumber = other.cardNumber;
        this->cardHolder = other.cardHolder;
        this->bank = other.bank;
        cout << "Card object copied." << endl;
    }
    void setCardNumber(string cardNumber){
        this->cardNumber = cardNumber;
        cout << "Card Number set to: " << cardNumber << endl;
    }
    void setCardHolder(string cardHolder){
        this->cardHolder = cardHolder;
        cout << "Card Holder set to: " << cardHolder << endl;
    }
    void setBank(string bank){
        this->bank = bank;
        cout << "Bank set to: " << bank << endl; 
    }
    string getCardNumber() const {
        return cardNumber;
    }
    string getCardHolder() const {
        return cardHolder;
    }
    string getBank() const {
        return bank;
    }
};
class CreditCard : protected Card{
    private:
    string creditLimit;
    string expiryDate;
    string cvv;
    public:
    CreditCard() {
        cout << "CreditCard object created." << endl;
    }
    CreditCard(string cardNumber, string cardHolder, string bank, string creditLimit, string expiryDate, string cvv) 
        : Card(cardNumber, cardHolder, bank), creditLimit(creditLimit), expiryDate(expiryDate), cvv(cvv) {
        cout << "CreditCard object created with details." << endl;
    }
    CreditCard(const CreditCard &other) 
        : Card(other), creditLimit(other.creditLimit), expiryDate(other.expiryDate), cvv(other.cvv) {
        cout << "CreditCard object copied." << endl;
    }
    void setCreditLimit(string creditLimit) {
        this->creditLimit = creditLimit;
        cout << "Credit Limit set to: " << creditLimit << endl;
    }
    void setExpiryDate(string expiryDate) {
        this->expiryDate = expiryDate;
        cout << "Expiry Date set to: " << expiryDate << endl;
    }
    void setCvv(string cvv) {
        this->cvv = cvv;
        cout << "CVV set to: " << cvv << endl;
}
    void displayDetails() {
        cout << "Card Number: " << getCardNumber() << endl;
        cout << "Card Holder: " << getCardHolder() << endl;
        cout << "Bank: " << getBank() << endl;
        cout << "Credit Limit: " << creditLimit << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "CVV: " << cvv << endl;
    }
};
int main(){
    CreditCard cc("1234-5678-9012-3456", "John Doe", "Bank of Example", "5000", "12/25", "123");
    cc.setCreditLimit("6000");
    cc.setExpiryDate("01/26");
    cc.setCvv("456");
    cc.displayDetails();
    CreditCard ccCopy = cc; // Copy constructor
    ccCopy.displayDetails();
    cc.displayDetails();

    return 0;
}
