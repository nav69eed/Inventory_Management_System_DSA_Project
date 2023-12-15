#if !defined(Product_h)
#define Product_h
#include <string>
#include <iostream>
using namespace std;
class Product
{
private:
    int Product_ID, Quantity_Remaining, Quantity_Sold;
    string Product_Name, Brand_Name, Product_Category, Shelf_Location, Color;
    double Base_Price, Sale_Price, Discount, Discount_Percentage;
    string Manufacturing_Date, Date_Received, Expiry_Date;
    void calculate_Discount();
    void Add_Product_Details();
public:
    void displayProductDetails();
    Product();
    ~Product();
};

#endif // Product_h
