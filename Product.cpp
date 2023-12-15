#include "Product.h"
Product::Product()
{
    Product_ID = 0;
    Quantity_Remaining = 0;
    Quantity_Sold = 0;
    Base_Price = 0.0;
    Sale_Price = 0.0;
    Discount_Percentage = 0.0;
    Discount = 0;
    Add_Product_Details();
}
void Product::Add_Product_Details()
{
    cout << "Enter Product ID  ";
    cin >> Product_ID;
    cout << "Enter Product Name : ";
    cin.ignore();
    getline(cin, Product_Name);
    cout << "Enter Brand Name : ";
    cin.ignore();
    getline(cin, Brand_Name);
    cout << "Enter Base Price : ";
    cin >> Base_Price;
    cout << "Enter Discount Percentage : ";
    cin >> Discount_Percentage;
    calculate_Discount();
    Quantity_Sold = 0;
    cout << "Enter Shelf Location : ";
    cin.ignore();
    getline(cin, Shelf_Location);
    cout << "Enter Color : ";
    cin >> Color;
    cout << "Enter Quantity Remaining:  ";
    cin >> Quantity_Remaining;
    cout << "Enter Manufacturing Date : ";
    cin >> Manufacturing_Date;
    cout << "Enter Expiry Date : ";
    cin >> Expiry_Date;
    cout << "Enter Date Received : ";
    cin >> Date_Received;
}
void Product::calculate_Discount()
{
    Discount = (Discount_Percentage / 100) * Base_Price;
    Sale_Price = (Base_Price) - (Discount);
}

void Product::displayProductDetails()
{
    cout << "\n\n*************DISPLAYING PRODUCT**************\n\n";
    cout << "Product ID: " << Product_ID << endl;
    cout << "Product Name: " << Product_Name << endl;
    cout << "Product Sale Price: Rs " << Sale_Price << "/-" << endl;
}
Product::~Product()
{
}